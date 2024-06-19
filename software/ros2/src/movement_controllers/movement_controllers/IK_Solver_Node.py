import PyKDL

import rclpy
from rclpy.node import Node
from v2_robot_arm_interfaces.msg import CurrentJointInfo, TargetJointInfo, CurrentCartesian, TargetCartesian, ControlStatus

class IK_Controller(Node):
    def __init__(self):
        super().__init__() 

        self.should_output = False

        self.Current_Status_sub = self.create_subscription(ControlStatus, "control_status", self.update_output_status)

        self.Current_Joint_sub = self.create_subscription(CurrentJointInfo, "current_joint_information", self.update_current_joint_angles)
        self.Target_Joint_pub = self.create_publisher(TargetJointInfo, "target_joint_information", 10)

        self.Current_Cartesian_pub = self.create_publisher(CurrentCartesian, "current_cartesian", 10)
        self.Target_Cartesian_sub = self.create_subscription(TargetCartesian, "target_cartesian", self.update_target_cartesian)

        self.target_joint_angles = [0,0,0,0,0,0,0]
        self.current_joint_angles = [0,0,0,0,0,0,0]

        self.target_cartesian_matrix = PyKDL
        self.current_cartesian_matrix = PyKDL


        self.IK_Calc_frequency = 200
        self.IK_timer = self.create_timer(1/self.IK_Calc_frequency, self.update_and_pub_IK)

    def update_output_status(self, msg):
        if msg.ik_solver == 1:
            self.should_output = True
        elif msg.ik_solver == 0:
            self.should_output = False

    def update_current_joint_angles(self, msg):
        self.current_joint_angles = msg.current_joint_positions
        self.publish_current_cartesian()

    def update_target_cartesian(self, msg):
        msg.position =  #3 float array
        msg.rotation = # 3 float array
        
    def update_and_pub_IK(self):


        msg = TargetJointInfo
        msg.param_to_control = 0
        msg.target_joint_positions = #7 float array
    
    def publish_current_cartesian(self):



        msg = CurrentCartesian
        msg.position = [0,0,0]
        msg.rotation = [0,0,0]

        self.Current_Cartesian_pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    IK_Controller_Object = IK_Controller()
    rclpy.spin(IK_Controller_Object)


if __name__ == '__main__':
    main()