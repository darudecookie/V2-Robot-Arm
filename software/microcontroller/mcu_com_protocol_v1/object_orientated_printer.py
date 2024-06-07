import serial
import time

class Serial_Interface:
    def __init(self, port: str = 'COM4', baud_rate: int = 115200):
        self.Serial_port =serial.Serial(port, baud_rate)
        
    def __del__(self):
        self.Serial_port.close()