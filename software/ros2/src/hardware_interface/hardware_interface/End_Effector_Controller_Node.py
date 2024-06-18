
import rclpy
from v2_robot_arm_interfaces.msg import CurrentEEInfo, TargetEEInfo 
from v2_robot_arm_interfaces.srv import TargetEEState

class End_Effector_Controller(rclpy.node.Node):
    def __init__(self):
        super().__init__("End_Effector_Controller_Node")

        self.internal_current_EE_state = 0
        self.internal_target_EE_state = 0
        
        self.current_EE_Info_sub = self.create_subscription(CurrentEEInfo,"current_end_effector_information", self.current_EE_callback, 10)
        self.target_EE_info_pub = self.create_publisher(TargetEEInfo,"target_end_effector_information", 10)

        self.EE_State_server = self.create_service(TargetEEState, "target_end_effector_state", self.EE_state_callback)

    def EE_state_callback(self, request, response):
        self.internal_target_EE_state=request.target_end_effector_value 
        response.current_end_effector_value = self.internal_current_EE_state
        return response
    
    def current_EE_callback(self, msg):
        self.internal_current_EE_state = msg.current_end_effector_value
    
    def target_EE_timer_callback(self, msg):
        msg = TargetEEInfo
        msg.current_end_effector_value = self.internal_target_EE_state
        self.target_EE_info_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)

    EE_Controller_Object = End_Effector_Controller()
    rclpy.spin(EE_Controller_Object)


if __name__ == "main":
    main()