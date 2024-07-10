import serial 
import time
from collections import deque
import threading
import numpy
import time as Time

import rclpy
from rclpy.node import Node
import rclpy.parameter
from v2_robot_arm_interfaces.msg import CurrentEEInfo, TargetEEInfo, CurrentJointInfo, TargetJointInfo, SystemDiagnosticInfo
from v2_robot_arm_interfaces.srv import MicrocontrollerParameterDump, SystemStatus

# ********** both of these dicts/lists are copied here and on the mcu, and ensuring that they match is absolutely critical to proper function **********
MCU_arguments = {
    0: "Estop",
    1: "JointHold",
    2: "Move_Home",

    10: "Set_Joint_Positions",
    11: "Set_Joint_Velocities",
    12: "Set_Joint_Torques",

    20: "Get_Joint_Positions",
    21: "Get_Joint_Velocities",
    22: "Get_Joint_Torques",
    23: "Get_Joint_Accelerations",
    24: "Get_Joint_Jerks",

    30: "Set_Joint_Position_Limits",
    31: "Set_Joint_Velocity_Limits",
    32: "Set_Joint_Torque_Limits",
    33: "Set_Joint_Acceleration_Limits",
    34: "Set_Joint_Jerk_Limits",
    35: "Set_X_Workspace_Limit",
    36: "Set_Y_Workspace_Limit",
    37: "Set_Z_Workspace_Limit",

    40: "Set_Target_Joint_PID_Params",
    41: "Set_Home_Joint_Positions",
        
    50: "Get_EE_Float",
    51: "Set_EE_Float",
    
    60: "Get_Temperatures",
}


class Serial_Interface(Node):
    def __init__(
        self,
        port: str = "/dev/ttyACM0",
        baud_rate: int = 115200,
        MCU_init_sequence=b"<MCU_init>\n",
    ):
        super().__init__("Microcontroller_Interface_Node", allow_undeclared_parameters=True)  
        self.get_logger().info("initiating node")

        self.declare_parameter("safe_startup",True)
        safe_startup = self.get_parameter("safe_startup")

        self.start_char =254 #rb"þ"
        self.start_char = self.start_char.to_bytes(length=1, byteorder="little", signed=False)

        self.stop_char = 255    #rb"ÿ"#
        self.stop_char =self.stop_char .to_bytes(length=1, byteorder="little", signed=False)


        self.MCU_key_list = tuple(MCU_arguments.keys())
        self.MCU_val_list= tuple(MCU_arguments.values())
        self.clear_queue = True

        MCU_communication_frequency = 300
        ros_communication_frequency = 2 * MCU_communication_frequency

        self.declare_parameter("estop_cooldown", 20)
        self.estop_cooldown = self.get_parameter("safe_startup")
        self.time_since_last_estop = time.time() - self.estop_cooldown.value

        # queue of decoded received messages from the MCU
        self.MCU_report_queue = deque([])
        # queue of messages to be sent to the MCU that have already been encoded to bits
        self.MCU_send_queue = deque([])

        self.get_logger().info(f"opening serial port, port: {port}")
        if safe_startup.value:
            while True:
                try:
                    self.Serial_port = serial.Serial(port, baud_rate, )
                    self.get_logger().info("Opened mcu serial port")
                    break
                except serial.SerialException:
                    self.get_logger().warn(f"failed to open serial port to MCU, port: {port}, retrying in 0.5 seconds")
                    time.sleep(0.5)
        
        
        self.get_logger().info("establishing communication with microcontroller")
        if safe_startup.value:
            while True:
                if self.Serial_port.in_waiting>0:
                    read_msg = self.Serial_port.readline()
                    if MCU_init_sequence == read_msg:
                        self.get_logger().info(f"established MCU connection")
                        break
                self.get_logger().warn(f"failed to establish MCU connection, retrying in 0.5 seconds")
                time.sleep(0.5)


        # creating all of the publishers and subscirbers for appropriate topics
        self.current_Joint_Info_pub = self.create_publisher(CurrentJointInfo, "current_joint_information", 10)
        self.current_Joint_Info_components = CurrentJointInfo()
        self.joint_info_reported = [False, False, False, False,False]
        self.target_Joint_Info_sub = self.create_subscription(TargetJointInfo, "target_joint_information", self.send_joint_information, 10)

        self.System_Diagnostic_pub = self.create_publisher(SystemDiagnosticInfo, "system_diagnostic_information", 10)

        self.current_EE_Info_pub = self.create_publisher(CurrentEEInfo, "current_end_effector_information", 10)

        self.target_EE_Info_sub = self.create_subscription(TargetEEInfo, "target_end_effector_information", self.send_end_effector_information , 10)

        # creating clients/servers for communication
        self.MCU_param_dump_server = self.create_service(MicrocontrollerParameterDump, "microcontroller_parameter_dump", self.send_MCU_parameter_dump)
        self.System_Status_server = self.create_service(SystemStatus, "system_status", self.send_system_status)

        # creating timer callbacks communicating with system
        # there are two callbacks, one for this node <-> MCU and one for this node <-> rest of ROS
        # frequency (hz) for program to read and then write an mcu message
        self.MCU_communication_timer = self.create_timer(1/MCU_communication_frequency, self.read_from_MCU_write_to_MCU)

        # frequency for messages to be pulled from queue and sent to ros (hz)
        self.ros_communication_timer = self.create_timer(1/ros_communication_frequency, self.parse_queue_from_MCU)

        self.conditional_queue_len_print()

        self.get_logger().info("node initiated!")

    def __del__(self):
        try:
            self.Serial_port.close()
        except AttributeError:
            return
        
    def conditional_queue_len_print(self):
        if len(self.MCU_report_queue)> 0 or len(self.MCU_send_queue)>0:
            self.get_logger().debug(f"report queue: {len(self.MCU_report_queue)}, send queue: {len(self.MCU_send_queue)}")
            self.clear_queue = False
        elif not self.clear_queue:
            self.get_logger().debug(f"report queue: {len(self.MCU_report_queue)}, send queue: {len(self.MCU_send_queue)}")
            self.clear_queue = True


    def key_from_val(self, value: str) -> int:
        return self.MCU_key_list[self.MCU_val_list.index(value)]

    def decode_from_serial(self, serial_input: str) -> tuple:
        should_parse = False
        command_byte = True


        parsed_message = [-1, rb""]

        serial_input = list(serial_input)
        serial_input.pop(-1)    

        parsed_message[0] = serial_input[0]
        parsed_message[1] = bytes(serial_input[1:])
        return tuple(parsed_message)


    def command_to_bytes(self, command: int) -> str:
        try:
            output_command = command.to_bytes(
                1, byteorder="little", signed=False)
            return output_command
        except OverflowError:
            self.get_logger().debug("command out of range; cannot be transformed to bytes")
            return ""

    def encode_1_float(self, input_float: float) -> str:
        if -100 <= input_float <= 100:
            float_sections = [
                int(input_float),
                int(input_float * 100) - int(input_float) * 100,
                int(input_float * 100 * 100) - int(input_float * 100) * 100,
            ]

            for i in range(3):
                if float_sections[i] < 0:
                    float_sections[i] = abs(float_sections[i]) + 101
            return (
                float_sections[0].to_bytes(1, byteorder="little", signed=False)
                + float_sections[1].to_bytes(1, byteorder="little", signed=False)
                + float_sections[2].to_bytes(1, byteorder="little", signed=False)
            )
        else:
            self.get_logger().debug("float value out of range; val not converted")

    def encode_n_floats(self, input_float_array: float, n_floats: int = 7) -> str:
        if len(input_float_array) != n_floats:
            self.get_logger().debug("length of float array does not match provide length")
            return ""

        output_bytes = rb""

        for input_float in input_float_array:
            output_bytes += self.encode_1_float(input_float)

        return output_bytes

    def decode_1_float(self, input_bytes: str) -> float:
        output_float = 0
        for i in range(0, 3):
            float_section = float(int.from_bytes(
                input_bytes[i:i+1], byteorder='little'))
            if float_section >= 101:
                float_section -= 101
                float_section = -float_section

            float_section /= (10**(i*2))
            output_float += float_section

        return output_float

    def decode_n_floats(self, input_bytes: str, n_floats: int = 7) -> list[float]:
        if len(input_bytes) / 3 != n_floats:
            return False
        float_array = []
        for i in range(0, len(input_bytes), 3):
            float_array.append(self.decode_1_float(input_bytes[i:i+2]))

        return float_array


    def read_from_MCU_write_to_MCU(self):       #MCU comm loop
        if self.Serial_port.in_waiting > 0:
            read_data = rb""
            should_parse = False
            byte_num = 0

            read_byte = self.Serial_port.read()
            if read_byte == self.start_char:
                #self.get_logger().debug("reading command-arg from MCU")
                read_data = self.Serial_port.read_until(expected = self.stop_char)
                self.MCU_report_queue.append(self.decode_from_serial(read_data))
                self.conditional_queue_len_print()

        self.conditional_queue_len_print()
        
        if len(self.MCU_send_queue) > 0 and ((time.time() - self.time_since_last_estop) > self.estop_cooldown.value):
            to_send_line = self.start_char+self.MCU_send_queue.popleft()+self.stop_char
            self.Serial_port.write(to_send_line)
            #self.get_logger().debug("sending command-arg to MCU")


        return
    
    def send_system_status(self, request, response):
        system_diag_msg = SystemDiagnosticInfo()
        system_diag_msg.temperatures = [-1]

        if request.estop != 0:
            system_diag_msg.estop = request.estop

            estop_byte_msg = self.command_to_bytes(self.key_from_val("Estop"))
            if request.estop == 1:
                estop_byte_msg += self.command_to_bytes(1)
                                
                self.get_logger().warn("E-Stop activated - origin: software")
            elif request.estop == -1:
                estop_byte_msg += self.command_to_bytes(0)

                self.get_logger().warn("E-Stop deactivated")
            self.MCU_send_queue.appendleft(estop_byte_msg)
            

        if request.jointhold != 0:
            system_diag_msg.jointhold = request.jointhold

            jointhold_byte_msg = self.command_to_bytes(self.key_from_val("JointHold"))
            if request.jointhold == 1:
                jointhold_byte_msg += self.command_to_bytes(1)

                self.get_logger().warn("joint hold activated")
            elif request.jointhold == -1:
                jointhold_byte_msg += self.command_to_bytes(0)
                               
                self.get_logger().warn("joint hold dectivated")
            self.MCU_send_queue.appendleft(jointhold_byte_msg)
        
        self.System_Diagnostic_pub.publish(system_diag_msg)        
        if request.move_home == 1:
            self.MCU_send_queue.appendleft(self.command_to_bytes(self.key_from_val("Move_Home")))

            self.get_logger().info("move home commanded")
        response.returnsuccess = 1

        return response

    def send_joint_information(self, msg):
        joint_info_msg = rb""
        float_vals_to_write = []

        if msg.param_to_control == 0:
            joint_info_msg += self.command_to_bytes(self.key_from_val("Set_Joint_Positions"))
            float_vals_to_write = msg.target_joint_velocities
        elif msg.param_to_control == 1:
            joint_info_msg += self.command_to_bytes(self.key_from_val("Set_Joint_Velocities"))
            float_vals_to_write = msg.Target_Joint_Velocities
        elif msg.param_to_control == 2:
            joint_info_msg += self.command_to_bytes(self.key_from_val("Set_Joint_Torques"))
            float_vals_to_write = msg.target_joint_torques

        joint_info_msg += self.encode_n_floats(float_vals_to_write, 7)

        self.MCU_send_queue.append(joint_info_msg)

    def send_end_effector_information(self, msg):
        end_effector_val = msg.target_end_effector_value
        self.MCU_send_queue.append(self.command_to_bytes(self.key_from_val("Set_EE_Float")) + self.encode_1_float(end_effector_val))

    def send_MCU_parameter_dump(self, request, response) -> int:
        def queue_param_if_needed(target_joint: int, param_values: float, param_code_name: str, ):
            if target_joint != - 10:
                encoded_msg = rb''
                encoded_msg = self.command_to_bytes(
                    self.key_from_val(param_code_name))
                encoded_msg += self.command_to_bytes(target_joint)
                encoded_msg += self.encode_n_floats(
                    param_values, len(param_values))
            self.MCU_send_queue.append(encoded_msg)

        queue_param_if_needed(request.joint_position_limit_update_target, request.joint_position_limit_update_params, "Set_Joint_Position_Limits")
        queue_param_if_needed(request.joint_velocity_limit_update_target, request.joint_velocity_limit_update_params, "Set_Joint_Velocity_Limits")
        queue_param_if_needed(request.joint_torque_limit_update_target, request.joint_torque_limit_update_params, "Set_Joint_Torque_Limits")
        queue_param_if_needed(request.joint_acceleration_limit_update_target, request.joint_acceleration_limit_update_params, "Set_Joint_Acceleration_Limits")
        queue_param_if_needed(request.joint_jerk_limit_update_target, request.joint_jerk_limit_update_params, "Set_Joint_Jerk_Limits")

        queue_param_if_needed(request.PID_update_target, request.PID_update_params, "Set_Target_Joint_PID_Params")

        def queue_workspace_bound_if_needed(workspace_bound: float[2], param_code_name: str):
            if any(workspace_bound) != -1:
                encoded_msg = self.command_to_bytes(self.key_from_val(param_code_name))
                encoded_msg += self.encode_n_floats(workspace_bound)
                self.MCU_send_queue.append(encoded_msg)

        queue_workspace_bound_if_needed(request.x_workspace_bounds, "Set_X_Workspace_Limit")
        queue_workspace_bound_if_needed(request.y_workspace_bounds, "Set_Y_Workspace_Limit")
        queue_workspace_bound_if_needed(request.z_workspace_bounds, "Set_Z_Workspace_Limit")

        if any(request.joint_home_positions) != -1:
            encoded_msg = self.command_to_bytes(self.key_from_val("Set_Home_Joint_Positions"))
            encoded_msg += self.encode_n_floats(request.joint_home_positions, 7)
            self.MCU_send_queue.append(encoded_msg)

        response.returnsuccess = 1
        return response


    def parse_queue_from_MCU(self):   #MCU to ros system
        if len(self.MCU_report_queue) > 0:
            information_to_report = self.MCU_report_queue.popleft()
            if information_to_report!= None:
                if information_to_report[0]!= -1:
                    match MCU_arguments[information_to_report[0]]:
                        case "Estop":
                            self.report_system_diagnostic_information(information_to_report[0], information_to_report[1])
                        case "JointHold":
                            self.report_system_diagnostic_information(information_to_report[0], information_to_report[1])
                            
                        case  "Get_Joint_Positions":
                            self.report_joint_information(information_to_report[0], information_to_report[1])
                        case  "Get_Joint_Velocities":
                            self.report_joint_information(information_to_report[0], information_to_report[1])
                        case  "Get_Joint_Torques":
                            self.report_joint_information(information_to_report[0], information_to_report[1])
                        case  "Get_Joint_Accelerations":
                            self.report_joint_information(information_to_report[0], information_to_report[1])
                        case  "Get_Joint_Jerks":
                            self.report_joint_information(information_to_report[0], information_to_report[1])
                        case  "Get_EE_Float":
                            self.report_end_effector_information(information_to_report[1])
        return 

    def report_system_diagnostic_information(self, passed_cmd: int, passed_arg: str):
        argument = int.from_bytes(passed_arg, "little")

        if passed_cmd == self.key_from_val("Estop"):
            msg = SystemDiagnosticInfo()
            msg.temperatures = [-1]
            if argument == 1:
                self.get_logger().warn("E-Stop activated - origin: hardware")
                self.time_since_last_estop = time.time()
                msg.estop = 1
            elif argument == 0:
                msg.estop = -1
                
        elif passed_cmd == self.key_from_val("Get_Temperatures"):
            msg = SystemDiagnosticInfo()
            msg.temperatures = self.decode_n_floats(passed_arg, 7)
            
        self.System_Diagnostic_pub.publish(msg)

    def report_joint_information(self, passed_cmd: int, passed_arg: str):
        def checkdem(array):
            return False
            try:
                array[0]
                if type(array[0])==type([0,0]):
                    return True
            except IndexError:
                return False
        
        if passed_cmd == self.key_from_val("Get_Joint_Positions"):
            print("pos", self.decode_n_floats(input_bytes = passed_arg, n_floats=7))
            print(self.joint_info_reported)

            self.current_Joint_Info_components.positions = self.decode_n_floats(input_bytes = passed_arg, n_floats=7)
            self.joint_info_reported[0] = True
            
        elif passed_cmd == self.key_from_val("Get_Joint_Velocities"):
            print("vel", self.decode_n_floats(input_bytes = passed_arg, n_floats=7))
            print(self.joint_info_reported)

            self.current_Joint_Info_components.velocities = self.decode_n_floats(input_bytes = passed_arg, n_floats=7)
            self.joint_info_reported[1] = True

        elif passed_cmd == self.key_from_val("Get_Joint_Torques"):
            print("torque", self.decode_n_floats(input_bytes = passed_arg, n_floats=7))
            print(self.joint_info_reported)

            self.current_Joint_Info_components.torques = self.decode_n_floats(input_bytes = passed_arg, n_floats=7)
            self.joint_info_reported[2] = True

        elif passed_cmd == self.key_from_val("Get_Joint_Accelerations"):
            print("accel",self.decode_n_floats(input_bytes = passed_arg, n_floats=7))
            print(self.joint_info_reported)

            self.current_Joint_Info_components.accelerations = self.decode_n_floats(input_bytes = passed_arg, n_floats=7)
            self.joint_info_reported[3] = True

        elif passed_cmd == self.key_from_val("Get_Joint_Jerks"):
            print("jerk", self.decode_n_floats(input_bytes = passed_arg, n_floats=7))
            print(self.joint_info_reported)

            self.current_Joint_Info_components.jerks = self.decode_n_floats(input_bytes = passed_arg, n_floats=7)
            self.joint_info_reported[4] = True

        #print(self.joint_info_reported)
        #for i in range(5):
        #    if self.joint_info_reported[i] == False:
        #        return
            
        if all(self.joint_info_reported) == True:
            #print(type(self.current_Joint_Info_components.positions) )
            if type(self.current_Joint_Info_components.positions) != numpy.ndarray or type(self.current_Joint_Info_components.velocities) != numpy.ndarray or type(self.current_Joint_Info_components.jerks) != numpy.ndarray or type(self.current_Joint_Info_components.accelerations) != numpy.ndarray or type(self.current_Joint_Info_components.jerks) != numpy.ndarray:
                print("pub fail:")
                print(self.current_Joint_Info_components.positions, self.current_Joint_Info_components.velocities, self.current_Joint_Info_components.torques, self.current_Joint_Info_components.accelerations, self.current_Joint_Info_components.jerks)
                
                #self.current_Joint_Info_components = CurrentJointInfo()
                self.joint_info_reported = [False,False,False,False,False]
                return
            #print("pub")
            self.current_Joint_Info_pub.publish(self.current_Joint_Info_components)
            self.joint_info_reported = [False,False,False,False,False]
            #self.current_Joint_Info_components = CurrentJointInfo()
            


    def report_end_effector_information(self,  passed_arg: str):
        msg = CurrentEEInfo()
        
        msg.current_end_effector_value =  self.decode_1_float(passed_arg)
        
        self.current_EE_Info_pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    Serial_Interface_Object = Serial_Interface()
    rclpy.spin(Serial_Interface_Object)


if __name__ == "main":
    main()