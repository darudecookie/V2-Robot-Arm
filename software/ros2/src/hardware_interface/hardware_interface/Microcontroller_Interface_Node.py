import serial 
import time
from collections import deque

import rclpy
from v2_robot_arm_interfaces.msg import CurrentEEInfo, TargetEEInfo, CurrentJointInfo, TargetJointInfo, SystemDiagnosticInfo
from v2_robot_arm_interfaces.srv import MicrocontrollerParameterDump

# format here is basically 'command_index : (command_name, has_arguments (bool))'
# so this entry: '0:("Estop", False)' means that the command has an index/associated number of 0, is named 'Estop' and has no arguments
# ********** both of these lists are copied here and on the mcu, and ensuring that they match is absolutely critical to proper function **********
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

        
    50: "Get_EE_Boolean",
    51: "Get_EE_Float",
    52: "Set_EE_Boolean",
    53: "Set_EE_Float",
}


class Serial_Interface(rclpy.Node):
    def __init__(
        self,
        port: str = "COM4",
        baud_rate: int = 115200,
        MCU_init_sequence=rb"<MCU_init>\n",
    ):

        self.start_char = rb"<"
        self.stop_char = rb">"
        self.end_char = rb"\n"

        # queue of decoded received messages from the MCU
        self.MCU_report_queue = deque([])
        # queue of messages to be sent to the MCU that have already been encoded to bits
        self.MCU_send_queue = deque([])

        self.print_for_ros(("opening serial port, port:", port))
        while True:
            try:
                self.Serial_port = serial.Serial(port, baud_rate)
                break
            except AttributeError:
                self.print_for_ros(
                    (
                        "failed to open serial port to MCU, port:",
                        port,
                        "retrying in 0.5 seconds",
                    )
                )
                time.sleep(0.5)

        # creating all of the publishers and subscirbers for appropriate topics
        self.current_Joint_Info_pub = self.create_publisher(CurrentJointInfo, "current_joint_information", 10)
        self.current_Joint_Info_components = [[], [], [], [], []]
        self.target_Joint_Info_sub = self.create_subscription(TargetJointInfo, "target_joint_information", self.send_joint_information, 10)

        self.System_Diagnostic_pub = self.create_publisher(SystemDiagnosticInfo, "system_diagnostic_information", 10)

        self.current_EE_Info_pub = self.create_publisher(CurrentEEInfo, "current_end_effector_information", 10)
        self.current_EE_Info_components =[False, False]
        self.target_EE_Info_sub = self.create_subscription(TargetEEInfo, "target_end_effector_information", 10)

        # creating clients/servers for communication
        self.System_Status_server = self.create_service(MicrocontrollerParameterDump, "microcontroller_parameter_dump", self.send_MCU_parameter_dump)

        # creating timer callbacks communicating with system
        # there are two callbacks, one for this node <-> MCU and one for this node <-> rest of ROS
        # value (hz) for program to read and then write an mcu message
        MCU_communication_frequency = 200
        self.MCU_communication_timer = rclpy.Node.create_timer(1/MCU_communication_frequency, self.MCU_comminication_loop)

        # value for messages to be pulled from queue and sent to ros
        ros_communication_frequency = 500
        self.ros_communication_timer = rclpy.Node.create_timer(1/ros_communication_frequency, self.ros_communication_loop)

    def __del__(self):
        self.Serial_port.close()

    def decode_from_serial(self, serial_input: str) -> tuple:
        should_parse = False
        command_byte = True

        parsed_message = [-1, rb""]

        for character in str(serial_input):
            if character == self.start_char:
                should_parse = True

            elif should_parse:
                if character == self.end_char:
                    if parsed_message[0] != -1:
                        return tuple(parsed_message)
                    return
                elif command_byte:
                    parsed_message[0] = int(character)
                    command_byte = False
                else:
                    parsed_message[1] += character

    def write_bytes_to_serial(self, arg_cmd_bytes: str) -> None:

        output_bytes = self.start_char + arg_cmd_bytes + self.stop_char + self.end_char
        self.Serial_port.write(output_bytes)

    def command_to_bytes(self, command: int) -> str:
        try:
            output_command = command.to_bytes(
                1, byteorder="little", signed=False)
            return output_command
        except OverflowError:
            self.print_for_ros(
                ("command out of range; cannot be transformed to bytes"))
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
                + float_sections[1].to_bytes(1,
                                             byteorder="little", signed=False)
                + float_sections[2].to_bytes(1,
                                             byteorder="little", signed=False)
            )
        else:
            print("float value out of range; val not converted")

    def encode_n_floats(self, input_float_array: float, n_floats: int = 7) -> str:
        if len(input_float_array) != n_floats:
            self.print_for_ros(
                "length of float array does not match provide length")
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
    
    def MCU_comminication_loop(self):
        read_line = self.Serial_port.readline()
        if read_line:
            self.MCU_report_queue.append(self.decode_from_serial(read_line))

        if len(self.MCU_send_queue) > 0:
            to_send_line = self.MCU_send_queue.popleft()
            self.Serial_port.write(to_send_line)

        self.print_for_ros("report q:", len(
            self.MCU_report_queue), "send q:", len(self.MCU_send_queue))


    def ros_communication_loop(self):
        if len(self.MCU_report_queue > 0):
            information_to_report = self.MCU_report_queue.popleft()
            if information_to_report[0] == -1:
                return

    def print_for_ros(self, arg):

        for val in arg:
            print(str(val), sep=" ", end="")
        print("\n")

    def send_system_status(self, request, response):
        if request.estop != 0:
            estop_byte_msg = self.command_to_bytes(MCU_arguments["Estop"])
            if request.estop == 1:
                estop_byte_msg += self.command_to_bytes(1)
            elif request.estop == -1:
                estop_byte_msg += self.command_to_bytes(2)
            self.MCU_send_queue.append(estop_byte_msg)

        if request.jointhold != 0:
            estop_byte_msg = self.command_to_bytes(MCU_arguments["JointHold"])
            if request.jointhold == 1:
                estop_byte_msg += self.command_to_bytes(1)
            elif request.jointhold == -1:
                estop_byte_msg += self.command_to_bytes(2)
            self.MCU_send_queue.append(estop_byte_msg)

        if request.move_home == 1:
            self.MCU_send_queue.append(
                self.command_to_bytes(MCU_arguments["Move_Home"]))

        response.returnsuccess = 1

        return response

    def send_joint_information(self, msg) -> None:
        joint_info_msg = rb""
        float_vals_to_write = []

        if msg.param_to_control == 0:
            joint_info_msg += self.command_to_bytes(
                MCU_arguments["Set_Joint_Positions"])
            float_vals_to_write = msg.target_joint_velocities
        elif msg.param_to_control == 1:
            joint_info_msg += self.command_to_bytes(
                MCU_arguments["Set_Joint_Velocities"])
            float_vals_to_write = msg.Target_Joint_Velocities
        elif msg.param_to_control == 2:
            joint_info_msg += self.command_to_bytes(
                MCU_arguments["Set_Joint_Torques"])
            float_vals_to_write = msg.target_joint_torques

        joint_info_msg += self.encode_n_floats(float_vals_to_write, 7)

        self.MCU_send_queue.append(joint_info_msg)

    def send_end_effector_information(self, msg):
        if msg.target_end_effector_bool != 0:
            if msg.target_end_effector_bool == 1:
                end_effector_val = 1
            elif msg.target_end_effector_bool == -1:
                end_effector_val = 0
            self.MCU_send_queue.append(self.command_to_bytes(
                MCU_arguments["Set_EE_Boolean"]) + self.command_to_bytes(end_effector_val))

        else:
            end_effector_val = msg.target_end_effector_value
            self.MCU_send_queue.append(self.command_to_bytes(
                MCU_arguments["Set_EE_Float"]) + self.encode_1_float(end_effector_val))

    def send_MCU_parameter_dump(self, request, response) -> int:
        def queue_param_if_needed(target_joint: int, param_values: float, param_code_name: str, ) -> None:
            if target_joint != - 10:
                encoded_msg = rb''
                encoded_msg = self.command_to_bytes(
                    MCU_arguments[param_code_name])
                encoded_msg += self.command_to_bytes(target_joint)
                encoded_msg += self.encode_n_floats(
                    param_values, len(param_values))
            self.MCU_send_queue.append(encoded_msg)

        queue_param_if_needed(request.joint_position_limit_update_target,
                              request.joint_position_limit_update_params, "Set_Joint_Position_Limits")
        queue_param_if_needed(request.joint_velocity_limit_update_target,
                              request.joint_velocity_limit_update_params, "Set_Joint_Velocity_Limits")
        queue_param_if_needed(request.joint_torque_limit_update_target,
                              request.joint_torque_limit_update_params, "Set_Joint_Torque_Limits")
        queue_param_if_needed(request.joint_acceleration_limit_update_target,
                              request.joint_acceleration_limit_update_params, "Set_Joint_Acceleration_Limits")
        queue_param_if_needed(request.joint_jerk_limit_update_target,
                              request.joint_jerk_limit_update_params, "Set_Joint_Jerk_Limits")

        queue_param_if_needed(request.PID_update_target,
                              request.PID_update_params, "Set_Target_Joint_PID_Params")

        def queue_workspace_bound_if_needed(workspace_bound: float[2], param_code_name: str) -> None:
            if any(workspace_bound) != -1:
                encoded_msg = self.command_to_bytes(
                    MCU_arguments[param_code_name])
                encoded_msg += self.encode_n_floats(workspace_bound)
                self.MCU_send_queue.append(encoded_msg)

        queue_workspace_bound_if_needed(
            request.x_workspace_bounds, "Set_X_Workspace_Limit")
        queue_workspace_bound_if_needed(
            request.y_workspace_bounds, "Set_Y_Workspace_Limit")
        queue_workspace_bound_if_needed(
            request.z_workspace_bounds, "Set_Z_Workspace_Limit")

        if any(request.joint_home_positions) != -1:
            encoded_msg = self.command_to_bytes(MCU_arguments["Set_Home_Joint_Positions"])
            encoded_msg += self.encode_n_floats(request.joint_home_positions, 7)
            self.MCU_send_queue.append(encoded_msg)

        response.returnsuccess = 1
        return response


    def report_system_diagnostic_information(self, passed_arg: str) -> None:
        print("mwo")

    def report_joint_information(self, passed_cmd: int, passed_arg: str) -> None:
        if passed_cmd == MCU_arguments["Get_Joint_Positions"]:
            self.current_Joint_Info_components[0] = self.decode_n_floats(input_bytes = passed_arg, n_floats=7)
            
        elif passed_cmd == MCU_arguments["Get_Joint_Velocities"]:
            self.current_Joint_Info_components[1] = self.decode_n_floats(input_bytes = passed_arg, n_floats=7)

        elif passed_cmd == MCU_arguments["Get_Joint_Torques"]:
            self.current_Joint_Info_components[2] = self.decode_n_floats(input_bytes = passed_arg, n_floats=7)

        elif passed_cmd == MCU_arguments["Get_Joint_Accelerations"]:
            self.current_Joint_Info_components[3] = self.decode_n_floats(input_bytes = passed_arg, n_floats=7)

        elif passed_cmd == MCU_arguments["Get_Joint_Jerks"]:
            self.current_Joint_Info_components[4] = self.decode_n_floats(input_bytes = passed_arg, n_floats=7)

        if len(all(self.current_Joint_Info_components)) != 0:
            msg = CurrentJointInfo
            
            msg.current_joint_positions = self.current_Joint_Info_components[0]
            msg.current_joint_velocity = self.current_Joint_Info_components[1]
            msg.current_joint_torques = self.current_Joint_Info_components[2]
            msg.current_joint_acceleration = self.current_Joint_Info_components[3]
            msg.current_joint_jerks = self.current_Joint_Info_components[4]

            self.current_Joint_Info_pub.publish(msg)
            
            self.current_Joint_Info_components =  [[], [], [], [], []]
            
    def report_end_effector_information(self, passed_cmd: int, passed_arg: str) -> None:
        if passed_cmd == MCU_arguments["Get_EE_Boolean"]:
            self.current_EE_Info_components[0]  = self.decode_from_serial(int.from_bytes(passed_arg, "little"))
            
        elif passed_cmd == MCU_arguments["Get_EE_Float"]:
            self.current_EE_Info_components[1] = self.decode_1_float(passed_arg)

        if type(all(self.current_EE_Info_components))!=bool and all(self.current_EE_Info_components)!=False:
            msg = CurrentEEInfo
            
            msg.current_end_effector_bool = self.current_EE_Info_components[0]
            msg.current_end_effector_value = self.current_EE_Info_components[1]
            
            self.current_EE_Info_pub.publish(msg)
            
            self.current_EE_Info_components =[False, False]

meow = Serial_Interface()
meow.print_for_ros("e")
print("done")

