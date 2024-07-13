import PyKDL

import rclpy
from rclpy.node import Node
from v2_robot_arm_interfaces.msg import CurrentJointInfo, TargetJointInfo, CurrentCartesian, TargetCartesian, ControlStatus

class IK_Controller(Node):
    def __init__(self):
        super().__init__("IK_Controller_Node") 

        self.should_output = False

        self.Current_Status_sub = self.create_subscription(ControlStatus, "control_status", self.update_output_status, 10)

        self.Current_Joint_sub = self.create_subscription(CurrentJointInfo, "current_joint_information", self.update_current_joint_angles, 10)
        self.Target_Joint_pub = self.create_publisher(TargetJointInfo, "target_joint_information", 10),

        self.Current_Cartesian_pub = self.create_publisher(CurrentCartesian, "current_cartesian", 10)
        self.Target_Cartesian_sub = self.create_subscription(TargetCartesian, "target_cartesian", self.update_target_cartesian, 10)

        self.target_joint_angles = [0,0,0,0,0,0,0]
        self.current_joint_angles = [0,0,0,0,0,0,0]

        self.current_cartesian_pos = [0,0,0]
        self.current_cartesian_rot = [0,0,0]



        self.target_cartesian_matrix = PyKDL.Frame()
        self.current_cartesian_matrix = PyKDL.Frame()

        self.target_translation_speed = 1
        self.target_rotation_speed = 1


        self.IK_Calc_frequency = 200
        self.IK_timer = self.create_timer(1/self.IK_Calc_frequency, self.update_and_pub_IK)

    def update_output_status(self, msg):
        if msg.ik_solver == 1:
            self.should_output = True
        elif msg.ik_solver == 0:
            self.should_output = False

    def update_current_joint_angles(self, msg):
        self.current_joint_angles = msg.positions
        self.publish_current_cartesian()

    def update_target_cartesian(self, msg):
        self.target_cartesian_matrix.p = msg.rotation 
        self.target_cartesian_matrix.M=msg.position  

        self.target_translation_speed = msg.translation_speed
        self.target_rotation_speed = msg.rotation_speed

    def update_and_pub_IK(self):

        msg = TargetJointInfo()
        msg.param_to_control = 0
        msg.target_joint_positions = self.target_joint_angles

    
    def publish_current_cartesian(self):



        msg = CurrentCartesian()
        msg.position = [0,0,0]
        msg.rotation = [0,0,0]

        self.Current_Cartesian_pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    IK_Controller_Object = IK_Controller()
    rclpy.spin(IK_Controller_Object)


if __name__ == '__main__':
    main()