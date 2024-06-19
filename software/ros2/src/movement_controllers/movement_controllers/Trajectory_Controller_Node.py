import rclpy
from rclpy.node import Node

class Trajectory_Controller(Node):
    def __init__(self):
        self.Current_Cartesian_pub = self.create_publisher()
        self.Target_Cartesian_sub
        
def main(args=None):
    rclpy.init(args=args)

    Trajectory_Controller_Object = Trajectory_Controller()
    rclpy.spin(Trajectory_Controller_Object)


if __name__ == '__main__':
    main()