import serial
import time
def msg_to_byte(message: list[int]) -> str:
    msg = rb''

    for val in message:
        msg+= int(val).to_bytes(1, byteorder="little", signed=False)
    
    return msg

ser = serial.Serial("/dev/ttyACM0", 115200, bytesize=8)

time.sleep(1)

while True:
    while ser.in_waiting >0:
        byte = ser.read()
        if int.from_bytes(byte) == 254:
            print("start") 
        elif int.from_bytes(byte) == 255:
            print("\n")
            
        try:
            print(byte.decode(), end = "")
        except UnicodeDecodeError:
            print(int.from_bytes(byte))
        
    meow =  input("? ") 
    if meow == "on":
        ser.write(msg_to_byte([254, 0, 1, 255]))
    elif meow == "off":
        ser.write(msg_to_byte([254, 0, 0, 255]))

