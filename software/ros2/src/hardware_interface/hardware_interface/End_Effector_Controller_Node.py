
import rclpy
from rclpy.node import Node
from v2_robot_arm_interfaces.msg import CurrentEEInfo, TargetEEInfo 
from v2_robot_arm_interfaces.srv import TargetEEState

class End_Effector_Controller(Node):
    def __init__(self):
        super().__init__("End_Effector_Controller_Node", allow_undeclared_parameters=True, automatically_declare_parameters_from_overrides=True)
        self.get_logger().info("initiating node")

        self.internal_current_EE_state = 0
        self.internal_target_EE_state = 0
        
        self.current_EE_Info_sub = self.create_subscription(CurrentEEInfo,"current_end_effector_information", self.current_EE_callback, 10)
        self.target_EE_info_pub = self.create_publisher(TargetEEInfo,"target_end_effector_information", 10)

        self.EE_State_server = self.create_service(TargetEEState, "target_end_effector_state", self.EE_state_callback)

        self.get_logger().info("node initiated!")

    def EE_state_callback(self, request, response):
        self.internal_target_EE_state=request.target_end_effector_value 
        response.current_end_effector_value = self.internal_current_EE_state
        
        self.get_logger().info(f"changing target end effector value to {self.internal_target_EE_state}")
        
        return response
    
    def current_EE_callback(self, msg):
        self.internal_current_EE_state = msg.current_end_effector_value

        self.get_logger().debug("updating current end effector value")

    def target_EE_timer_callback(self, msg):
        msg = TargetEEInfo()
        msg.current_end_effector_value = self.internal_target_EE_state
        self.target_EE_info_pub.publish(msg)

        self.get_logger().debug("updating target end effector value")


def main(args=None):
    rclpy.init(args=args)

    EE_Controller_Object = End_Effector_Controller()
    rclpy.spin(EE_Controller_Object)


if __name__ == "main":
    main()