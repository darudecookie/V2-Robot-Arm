import serial

import math 
import time 

import ikpy.chain
import numpy as np
import ikpy.utils.plot as plot_utils


print("creating joint links")
my_chain =ikpy.chain.Chain.from_urdf_file("C:/Users/alexg/Documents/current_projects/new arm/code/new fk-serial control code/urdf_from_converter_v1.urdf.txt")
global_time =time.time()

print("doine joint chain")
serial_refresh_interval = 200
ik_refresh_interval = 200

def check_runtime (last_time, runtime_interval):
    if (time.time() -last_time) >runtime_interval:
        return True
    else:
        return False
    
#
#def main():
#    

#    while True:
#       
#      if 
