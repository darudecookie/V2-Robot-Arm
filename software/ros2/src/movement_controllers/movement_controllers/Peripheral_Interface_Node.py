import rclpy
from rclpy.node import Node

class Joystick_Controller(Node):
    def __init__(self):
        

def main(args=None):
    rclpy.init(args=args)

    Joystick_Controller_Object = Joystick_Controller()
    rclpy.spin(Joystick_Controller_Object)


if __name__ == '__main__':
    main()
