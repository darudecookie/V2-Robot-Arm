import rclpy
import serial
import time
from collections import deque

from v2-robot-arm_interfaces import 

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
    
    20: "Set_Joint_Position_Limits",
    21: "Set_Joint_Velocity_Limits",
    22: "Set_Joint_Torque_Limits",
    23: "Set_Joint_Acceleration_Limits",
    24: "Set_Joint_Jerk_Limits",
    25: "Set_X_Workspace_Limit",
    26: "Set_Y_Workspace_Limit",
    27: "Set_Z_Workspace_Limit",
    
    30: "Set_Target_Joint_PID_Params",
    31: "Set_Home_Joint_Positions",
    
    40: "Set_EE_Boolean",
    41: "Set_EE_Float"
}


class Serial_Interface:
    def __init__(
        self,
        port: str = "COM4",
        baud_rate: int = 115200,
        MCU_init_sequence=rb"<MCU_init>\n",
    ):

        self.start_char = rb"<"
        self.stop_char = rb">"
        self.end_char = rb"\n"

        self.MCU_report_queue = deque(
            []
        )  # queue of decoded received messages from the MCU
        self.MCU_send_queue = deque(
            []
        )  # queue of messages to be sent to the MCU that have already been encoded to bits

        self.print_for_ROS(("opening serial port, port:", port))
        while True:
            try:
                self.Serial_port = serial.Serial(port, baud_rate)
                break
            except AttributeError:
                self.print_for_ROS(
                    (
                        "failed to open serial port to MCU, port:",
                        port,
                        "retrying in 0.5 seconds",
                    )
                )
                time.sleep(0.5)

    def __del__(self):
        self.Serial_port.close()

    def decode_from_serial(self, serial_input: str) -> tuple:
        should_parse = False
        command_byte = True

        parsed_message = [-1, ""]

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
            output_command = command.to_bytes(1, byteorder="little", signed=False)
            return output_command
        except OverflowError:
            self.print_for_ROS(("command out of range; cannot be transformed to bytes"))
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
            print("float value out of range; val not converted")

    def encode_n_floats(self, input_float_array: float, n_floats: int = 7) -> str:
        if len(input_float_array) != n_floats:
            self.print_for_ROS("length of float array does not match provide length")
            return ""

        output_bytes = rb""

        for input_float in input_float_array:
            output_bytes += self.encode_1_float(input_float)

        return output_bytes

    def send_system_status(self, msg,):

        if msg.Estop != 0:
            estop_byte_msg = self.command_to_bytes(MCU_arguments["Estop"])
            if msg.estop == 1:
                estop_byte_msg += self.command_to_bytes(1)
            elif msg.estop == -1:
                estop_byte_msg += self.command_to_bytes(2)
            self.MCU_send_queue.append(estop_byte_msg)

        if msg.JointHold != 0:
            estop_byte_msg = self.command_to_bytes(MCU_arguments["JointHold"])
            if msg.estop == 1:
                estop_byte_msg += self.command_to_bytes(1)
            elif msg.estop == -1:
                estop_byte_msg += self.command_to_bytes(2)
            self.MCU_send_queue.append(estop_byte_msg)
            
        if msg.move_home == 1:
            self.MCU_send_queue.append(self.command_to_bytes(MCU_arguments["Move_Home"]))

    def report_system_diagnostic_information(self):
        print("mwo")

    def send_joint_information(self, msg):
        joint_info_msg = rb""
        float_vals_to_write = []

        if msg.param_to_control == 0:
            joint_info_msg += self.command_to_bytes(MCU_arguments["Set_Joint_Positions"])
            float_vals_to_write = msg.Target_Joint_Positions
        elif msg.Joint_Info_Type == 1:
            joint_info_msg += self.command_to_bytes(
                MCU_arguments["Set_Joint_Velocities"]
            )
            float_vals_to_write = msg.Target_Joint_Velocities
        elif msg.Joint_Info_Type == 2:
            joint_info_msg += self.command_to_bytes(MCU_arguments["Set_Joint_Torques"])
            float_vals_to_write = msg.Target_Joint_Torques

        joint_info_msg += self.encode_n_floats(float_vals_to_write, y)

        self.MCU_send_queue.append(joint_info_msg)

    def report_joint_information(self):
        print("mwo")

    def send_end_effector_information(self, msg):
        
        if msg.target_end_effector_bool!=0:
            if  msg.target_end_effector_bool ==1 :
                end_effector_val = 1
            elif msg.target_end_effector_bool == -1:
                end_effector_val = 0
            self.MCU_send_queue.append(self.command_to_bytes(MCU_arguments["Set_EE_Boolean"]) + self.command_to_bytes(end_effector_val))
        
        else:   
            end_effector_val = msg.target_end_effector_value 
            self.MCU_send_queue.append(self.command_to_bytes(MCU_arguments["Set_EE_Float"]) + self.encode_1_float(end_effector_val))
            
    def report_end_effector_information(self):
        print("mwo")

    def send_MCU_parameter_dump(self, msg) -> int:
        def queue_param_if_needed(target_joint: int, param_values: float, param_code_name: str, ) -> None:
            if target_joint != - 10: 
                encoded_msg = rb''
                encoded_msg = self.command_to_bytes(MCU_arguments[param_code_name])
                encoded_msg += self.command_to_bytes(target_joint)
                encoded_msg += self.encode_n_floats(param_values, len(param_values))
            self.MCU_send_queue.append(encoded_msg)
        
        queue_param_if_needed(msg.joint_position_limit_update_target, msg.joint_position_limit_update_params, "Set_Joint_Position_Limits"  )
        queue_param_if_needed(msg.joint_velocity_limit_update_target, msg.joint_velocity_limit_update_params, "Set_Joint_Velocity_Limits" )
        queue_param_if_needed(msg.joint_torque_limit_update_target, msg.joint_torque_limit_update_params, "Set_Joint_Torque_Limits")
        queue_param_if_needed(msg.joint_acceleration_limit_update_target, msg.joint_acceleration_limit_update_params, "Set_Joint_Acceleration_Limits")
        queue_param_if_needed(msg.joint_jerk_limit_update_target, msg.joint_jerk_limit_update_params, "Set_Joint_Jerk_Limits")
        
        queue_param_if_needed(msg.PID_update_target, msg.PID_update_params, "Set_Target_Joint_PID_Params")
        
        
        def queue_workspace_bound_if_needed(workspace_bound: float[2], param_code_name: str) -> None:
            if any(workspace_bound)!=-1:
                encoded_msg  = self.command_to_bytes(MCU_arguments[param_code_name])
                encoded_msg += self.encode_n_floats(workspace_bound)
                self.MCU_send_queue.append(encoded_msg)
                
        queue_workspace_bound_if_needed(msg.x_workspace_bounds,"Set_X_Workspace_Limit" )
        queue_workspace_bound_if_needed(msg.y_workspace_bounds,"Set_Y_Workspace_Limit" )
        queue_workspace_bound_if_needed(msg.z_workspace_bounds,"Set_Z_Workspace_Limit" )
        
        if any(msg.joint_home_positions) != -1:
            encoded_msg = self.command_to_bytes(MCU_arguments["Set_Home_Joint_Positions"])
            encoded_msg += self.encode_n_floats(msg.joint_home_positions, 7)
            self.MCU_send_queue.append(encoded_msg)
        return 1

    def print_for_ROS(self, arg):
        for val in arg:
            print(str(val), sep=" ", end="")
        print("\n")

    def MCU_comminication_loop(self):
        # will be ROS timer/timerinterupt thingy when implemented
        read_line = self.Serial_port.readline()
        if read_line:
            self.MCU_report_queue.append(self.decode_from_serial(read_line))

        if len(self.MCU_send_queue) > 0:
            to_send_line = self.MCU_send_queue.popleft()
            self.Serial_port.write(to_send_line)

    def ROS_communication_loop(self):
        print("mwo")


meow = Serial_Interface()
meow.print_for_ROS("e")
print("done")
