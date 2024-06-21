import rclpy
from rclpy.node import Node

import inputs 

class Joystick_Controller(Node):
    def __init__(self):
        super().__init__() 
        print("moew")
        

class testjoy():
    def __init__(self):
        print("meow")

        self.joy_values = [128,128,128]
        self.trigger = False
        self.thumb_button = False

    def event_parser(self, gamepad_event):
        #func turns a joystick val (range 0-255) to a number between -1 and 1
        def map_joy_to_1(joy_val: int)->float:
            joy_val -= 128
            joy_val /= 128
            return joy_val
        
        match event.ev_type:
            case "Key":     #button press

            case "Absolute":        #joystick

def main(args=None):

    #rclpy.init(args=args)
    #Joystick_Controller_Object = Joystick_Controller()
    #rclpy.spin(Joystick_Controller_Object)
    while True:
        events = inputs.get_gamepad()
        for event in events:
            print(event.ev_type, event.code, event.state)
if __name__ == '__main__':
    main()


#joy
    #left right roll: ABS_X, 0 at left, 255 at right
    #forward pabck pitch: ABS_Y, 0 at forward, 255 at back
    #left right yaw, turning, ABS_Z, 0 at left, 255 at right

#buttons
    #trigger: BTN_Z, 0/1
    #wpn release/thumb trigger: BTN_WEST, 0/1

