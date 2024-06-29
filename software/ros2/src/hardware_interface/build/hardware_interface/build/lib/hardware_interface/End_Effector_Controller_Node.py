
import rclpy
from v2_robot_arm_interfaces.msg import CurrentEEInfo, TargetEEInfo 
from v2_robot_arm_interfaces.srv import TargetEEState

class End_Effector_Controller(rclpy.Node):
    def __init__(self):
        self.current_EE_Info_sub = self.create_subscription(CurrentEEInfo, "current_end_effector_information", self.current_EE_callback)
        self.target_EE_info_pub = self.create_publisher(TargetEEInfo,"target_end_effector_information", 10)

        self.EE_State_server = self.create_subscription(TargetEEState, "target_end_effector_state", self.EE_state_callback)

    def EE_state_callback(self, request, response):
        print(":3")
    def current_EE_callback(self, msg):
        print("moew")