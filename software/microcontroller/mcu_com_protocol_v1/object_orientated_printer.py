import serial
import time
from collections import deque

#format here is basically 'command_index : (command_name, has_arguments (bool))'
# so this entry: '0:("Estop", False)' means that the command has an index/associated number of 0, is named 'Estop' and has no arguments
# ********** both of these lists are copied here and on the mcu, and ensuring that they match is absolutely critical to proper function **********

MCU_arguments = {0: ("Estop", True), 1: ("JointHold", True), 10:("Set_Joint_Angles", True), 11:("Set_Joint_Velocities", True),  12:("Set_Joint_Accelerations", True),  13:("Set_Joint_Jerks", True), 14:("Set_Joint_Torques", True),}

class Serial_Interface:
    def __init__(self, port: str = 'COM4', baud_rate: int = 115200, MCU_init_sequence = rb"<MCU_init>\n"):
        
        self.start_char = rb'<'
        self.stop_char = rb'>'
        self.end_char = rb'\n'
        
        self.serial_input_queue = deque([])    #queue of received messages from the MCU
        self.serial_output_queue =deque([])    #queue of messages to be sent to the MCU
        
        self.print_for_ROS(("opening serial port, port:", port))
        while True:
            try:
                self.Serial_port =serial.Serial(port, baud_rate)
                break
            except AttributeError:
                self.print_for_ROS(("failed to open serial port to MCU, port:", port, "retrying in 0.5 seconds"))
                time.sleep(0.5)
        

        
    def __del__ (self):
        self.Serial_port.close()
        
    def interpret_from_serial(self, serial_input:str) -> None:
        should_parse = False
        command_byte = True
        
        parsed_message = [-1, ""]
        
        for character in str(serial_input):
            if character == self.start_char:
                should_parse = True
            
            elif should_parse:
                if character==self.end_char:
                    if parsed_message[0]!=-1:
                        self.serial_input_queue.append(tuple(parsed_message))
                    return
                elif command_byte:
                    parsed_message[0] = int(character)
                    command_byte = False
                else:
                    parsed_message[1]+=character

    def write_bytes_to_serial(self, arg_cmd_bytes: str)->None:

        output_bytes = self.start_char + arg_cmd_bytes + self.stop_char + self.end_char
        self.Serial_port.write(output_bytes)
        
    def command_to_bytes(self, command: int) -> str:
        try :
            output_command =  command.to_bytes(1, byteorder="little", signed=False)
            return output_command
        except OverflowError:
            self.print_for_ROS(("command out of range; cannot be transformed to bytes"))
            return ""
        
    def encode_1_float(self, input_float: float) -> str:
        if -100 <= input_float <=100:
            float_sections = [int(input_float), int(input_float*100) - int(input_float)*100, int(input_float*100*100) - int(input_float*100) * 100]

            for i  in range(3):
                if float_sections[i] < 0:
                    float_sections[i] = abs(float_sections[i])+101
            return float_sections[0].to_bytes(1, byteorder="little", signed=False) + float_sections[1].to_bytes(1, byteorder="little", signed=False) + float_sections[2].to_bytes(1, byteorder="little", signed=False)
        else:
            print("float value out of range; val not converted")   

    def encode_n_floats(self, input_float_array: float, n_floats: int = 7) -> str:
        if len(input_float_array)!=n_floats:
            self.print_for_ROS("length of float array does not match provide length")
            return ""
        
        output_bytes = rb''
    
        for input_float in input_float_array:
            output_bytes+=self.encode_1_float (input_float)
            
        return output_bytes


        
    def send_system_status(self, msg,):
        
    def report_system_diagnostic_information(self):


    def send_joint_information(self, msg):
        
    def report_joint_information(self):

            
    def send_end_effector_information(self, msg):
            
    def report_end_effector_information(self):
    
    
    def send_MCU_parameter_dump(self, msg):


    def print_for_ROS(self, arg):
        for val in arg:
            print(str(val),sep= " ", end = "")
        print('\n')


meow = Serial_Interface()
meow.print_for_ROS("e")
print("done")