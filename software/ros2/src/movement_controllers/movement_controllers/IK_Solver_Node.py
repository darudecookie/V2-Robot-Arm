import PyKDL

import rclpy
from rclpy.node import Node
from v2_robot_arm_interfaces.msg import CurrentJointInfo, TargetJointInfo, CurrentCartesian, TargetCartesian, ControlStatus


class IK_Controller(Node):

    def __init__(self):
        super().__init__("IK_Solver_Node") 
        self.get_logger().info("initiating node")

        self.should_output = False

        self.target_joint_angles = [0, 0, 0, 0, 0, 0, 0]
        self.current_joint_angles = [0, 0, 0, 0, 0, 0, 0]

        self.target_cartesian_matrix = PyKDL.Frame()
        self.translation_speed = 0
        self.rotation_speed = 0

        self.current_cartesian_matrix = PyKDL.Frame()

        self.Current_Status_sub = self.create_subscription(ControlStatus, "control_status", self.receive_output_status, 10)

        self.Current_Joint_sub = self.create_subscription(CurrentJointInfo, "current_joint_information", self.receive_current_joint_angles, 10)
        self.Target_Joint_pub = self.create_publisher(TargetJointInfo, "target_joint_information", 10)

        self.Current_Cartesian_pub = self.create_publisher(CurrentCartesian, "current_cartesian", 10)
        self.Target_Cartesian_sub = self.create_subscription(TargetCartesian, "target_cartesian", self.receive_target_cartesian, 10)

        self.IK_Calc_frequency = 200
        self.IK_timer = self.create_timer(1 / self.IK_Calc_frequency, self.calculate_IK_publish_JointAngles)

    def receive_output_status(self, msg):
        if msg.ik_solver == 1:
            self.should_output = True
        elif msg.ik_solver == 0:
            self.should_output = False

    def receive_current_joint_angles(self, msg):
        self.current_joint_angles = msg.positions
        self.calculate_FK_publish_CurrentCartesian()

    def calculate_FK_publish_CurrentCartesian(self):

        msg = CurrentCartesian()

        self.Current_Cartesian_pub.publish(msg)

    def receive_target_cartesian(self, msg):
        self.target_cartesian_matrix.p = msg.position 
        self.target_cartesian_matrix.M = msg.rotation

        self.translation_speed = msg.translation_speed
        self.rotation_speed = msg.rotation_speed

    def calculate_IK_publish_JointAngles(self):
        if self.should_output:
            msg = TargetJointInfo()
            msg.param_to_control = 0

            self.Target_Joint_pub.publish(TargetJointInfo)


def main(args=None):
    rclpy.init(args=args)

    IK_Controller_Object = IK_Controller()
    rclpy.spin(IK_Controller_Object)


if __name__ == '__main__':
    main()
