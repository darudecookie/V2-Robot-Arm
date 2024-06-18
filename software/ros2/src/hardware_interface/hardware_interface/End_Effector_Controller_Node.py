
import rclpy
from v2_robot_arm_interfaces.msg import CurrentEEInfo, TargetEEInfo 
from v2_robot_arm_interfaces.srv import TargetEEState

class End_Effector_Controller(rclpy.Node):
    def __init__(self):
        self.current_EE_Info_sub = self.create_subscription()
        self.target_EE_info_pub = self.create_publisher(TargetEEInfo, )