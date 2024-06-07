#THIS PROGRAM WORKS - IT PRINTS 'instructions' TO SERIAL AND THE ARDUINO READS AND PARESES IT
#SECRETE WAS GIVING ARDUINO TIME TO INITIALIZE AFTER OPENING PORT
#PROBABLY CAN BE LESS THAN 5 SECS, BUT SAFE VALUE

import serial
import time
import random
import struct




command_list = (("E_Stop", 0, False),
                ("Joint_Hold", 1, False),
                )


intpart =1
mantissa = 1
print(intpart.to_bytes(1, byteorder="little", signed=True))
print(mantissa.to_bytes(1, byteorder="little", signed=True))


MCU_start_string = b"<MCU_init>" 
ser = serial.Serial("COM4", 115200)
    

    
if True:

    while(True):
        meow = ser.readline()
        print(meow)
        if  MCU_start_string in meow:
            print("MCU initialized")
            break
    time.sleep(2)
    


    for i in range(1):
        
        cmd = 49
        arg = 11
        arg2 = 23
        
        def encode_1_float (input_float: float):
            if -1 < input_float <1:
                mantissas =[int(input_float*100), int(input_float*100*100) - int(input_float*100) * 100]
                for i  in range(2):
                    if mantissas[i] < 0:
                        mantissas[i] = abs(mantissas[i])+101
                return mantissas[0].to_bytes(1, byteorder="little", signed=False) + mantissas[1].to_bytes(1, byteorder="little", signed=False)
            else:
                print("float value out of range; val not converted")
                
        def encode_float_array(inp_float_array: float):
            output_bytes = rb''
            
            for input_float in inp_float_array:
                output_bytes+=encode_1_float (input_float)
                
            return output_bytes
            
        def encode_command(command: int):
            if 0<=command<=255:
                return command.to_bytes(1, byteorder="little", signed=True)
            else:
                print("command >255; cannot be converted to byte")
                
        for i in range(10):
            bruh = random.uniform(-1,1)
            print(round(bruh,4))
            meow = rb'<' + encode_command(49) + encode_1_float(0.1522) + rb'>'
            ser.write(meow)
            
            x = 0
            start = time.time()
            while x<10:
                meow = ser.readline()
                if rb'float' in meow:
                    start -= time.time()
                    #print(i, meow,":", -1000*1000*start, "microseconds")
                    print(meow)
                    x = 20
            time.sleep(0.1)

    while False:
        meow = ser.readline()
        print(meow)
        if  MCU_start_string in meow:
            print("MCU restarting - program restarting")
            break



    ser.close()

class Microcontroller_Interface:
    def __init__ (self, inp_MCU_start_string : str =  b"<MCU_init>" , COM_Port: str = "COM6"):
        self.MCU_start_string = inp_MCU_start_string 
        self.Serial_Port = serial.Serial(COM_Port, 115200)
    
        self.to_MCU_queue = []

        self.wait_for_MCU_init()
        
        
    def __del__(self):
        self.Serial_Port.close()
        
    def wait_for_MCU_init(self)->None:
        while True:
            read_line = self.Serial_Port.readline()
            
            if self.MCU_start_string in read_line:
                print("MCU initiated, delaying by 2 seconds to allow initialization to complete\ninitialization message =", read_line)
                time.sleep(2)
                return 
        
    def Estop_JointHold_callback(self)->None:
        self.to_MCU_queue.insert(1, 0)
    
    def write_cmd_to_serial (self, command: int, argument: str)->None:
        message_start_char = '<'
        message_end_char = '>\n'
        
        message = message_start_char + str(command) + argument + message_end_char
        message = bytes(message, "utf-8")
        
        self.Serial_Port.write(message )

#if __name__ == "main()":
    #meow = Microcontroller_Interface(inp_MCU_start_string = b"<MCU_init>" , COM_Port="COM6" )

