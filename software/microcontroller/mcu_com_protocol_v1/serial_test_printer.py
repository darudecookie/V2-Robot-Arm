#THIS PROGRAM WORKS - IT PRINTS 'instructions' TO SERIAL AND THE ARDUINO READS AND PARESES IT
#SECRETE WAS GIVING ARDUINO TIME TO INITIALIZE AFTER OPENING PORT
#PROBABLY CAN BE LESS THAN 5 SECS, BUT SAFE VALUE

import serial
import time
import random
import struct

def encode_1_float (input_float: float):
    if -100 <= input_float <=100:
        float_sections = [int(input_float), int(input_float*100) - int(input_float)*100, int(input_float*100*100) - int(input_float*100) * 100]

        for i  in range(3):
            if float_sections[i] < 0:
                float_sections[i] = abs(float_sections[i])+101
        return float_sections[0].to_bytes(1, byteorder="little", signed=False) + float_sections[1].to_bytes(1, byteorder="little", signed=False) + float_sections[2].to_bytes(1, byteorder="little", signed=False)
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




MCU_start_string = rb"<MCU_init>\n" 
ser = serial.Serial("/dev/ttyACM0", 115200)

while(True):

    meow = ser.readline
    print(meow)


    if  str(meow):
        print("MCU initialized")
        break



cmd = 0

while True:
    

        print("estop on off?")
        arg= int(input("? "))
        meow = rb'<' + encode_command(cmd) + encode_command(arg) + rb'>'
        print(meow)
        ser.write(meow)
        

    


if False:    
    for i in range(1):
        float_array = []
        for i in range(7):
            float_array.append(random.uniform(-100,100))
        print(float_array)
            
        int_part = 29
        mantissa1 = 1
        mantissa2=1
    
    
    x = 0
    start = time.time()
    while False: #x<10:
        meow = ser.readline()
        if  meow:
            start -= time.time()
            #print(i, meow,":", -1000*1000*start, "microseconds")
            print(meow)
            x = 0
    time.sleep(0.1)

while False:
    meow = ser.readline()
    print(meow)
    if  MCU_start_string in meow:
        print("MCU restarting - program restarting")
        break



ser.close()
