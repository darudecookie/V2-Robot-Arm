
import rclpy
from rclpy.node import Node
from v2_robot_arm_interfaces.msg import CurrentEEInfo, TargetEEInfo 
from v2_robot_arm_interfaces.srv import TargetEEState

class End_Effector_Controller(Node):
    def __init__(self):
        super().__init__("End_Effector_Controller_Node")

        self.current_EE_Info_sub = self.create_subscription(CurrentEEInfo, "current_end_effector_information", self.current_EE_callback, 10)
        self.target_EE_info_pub = self.create_publisher(TargetEEInfo,"target_end_effector_information", 10)

        self.EE_State_server = self.create_service(TargetEEState, "target_end_effector_state", self.EE_state_callback)

    def EE_state_callback(self, request, response):
        print(":3")
        response.current_end_effector_value = 0.5
        return response
    def current_EE_callback(self, msg):
        print("moew")

def main(args=None):
    rclpy.init(args=args)

    EE_Controller_Object = End_Effector_Controller()
    rclpy.spin(EE_Controller_Object)


if __name__ == "main":
    main()