
import serial
import time
import random
import struct



def encode_1_float(float_val: float):
    
    byte_list = bytearray(struct.pack("f", float_val))
    
    byte_value = rb''
    for i in range(4):
        byte_value+=byte_list[i].to_bytes(1, byteorder="little", signed=False)
    
    print(byte_value)
    return byte_value





MCU_start_string = b"<MCU_init>" 
ser = serial.Serial("COM4", 115200)

while True:
    meow = ser.readline()
    if MCU_start_string in meow:
        print(meow)
        break
    
time.sleep(1)

msg = rb'<' + rb'1' + encode_1_float(1202) + rb'>/n'
print(msg)
ser.write(msg)

while True:
    print(ser.readline())