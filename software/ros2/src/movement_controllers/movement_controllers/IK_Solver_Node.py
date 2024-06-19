import rclpy
from rclpy.node import Node

class IK_Controller(Node):
    def __init__(self):
        
        
def main(args=None):
    rclpy.init(args=args)

    IK_Controller_Object = IK_Controller()
    rclpy.spin(IK_Controller_Object)


if __name__ == '__main__':
    main()