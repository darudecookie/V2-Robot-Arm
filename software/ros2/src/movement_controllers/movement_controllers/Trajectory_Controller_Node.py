import rclpy
import rclpy.action
from rclpy.node import Node

from v2_robot_arm_interfaces.msg import TargetCartesian, ControlStatus, SystemDiagnosticInfo
from v2_robot_arm_interfaces.action import ParametricTrajectoryInfo


class Trajectory_Controller(Node):

    def __init__(self):
        super().__init__("Trajectory_Controller_Node") 
        self.get_logger().info("initiating node")

        self.should_output = -1

        self.control_status_sub = self.create_subscription(ControlStatus, "control_status", self.update_output_from_system, 10)
        self.system_diagnostic_sub = self.create_subscription(SystemDiagnosticInfo, "system_diagnostic_information", self.update_estop_jointhold_from_system, 10)
        self.Target_Cartesian_pub = self.create_publisher(TargetCartesian, "target_cartesian", 10)
        self.Parametric_Trajectory_action_server = rclpy.action.ActionServer(self, ParametricTrajectoryInfo, "parametric_trajectory_information", self.parametric_trajectory_callback)

        self.get_logger().info("node initiated!")

    def update_output_from_system(self, msg):
        if msg.trajectory_controller == 1:
            self.should_output = 1
            self.get_logger().info("restarting trajectory output")
        else:
            self.should_output = -1
            self.get_logger().info("pausing trajectory output")
    
    def update_estop_jointhold_from_system(self, msg):
        if msg.estop != -1 or msg.jointhold != -1:
            self.should_output = -1
            self.get_logger().warn("pausing trajectory output due to estop or jointhold")
        elif msg.estop == 1 or msg.jointhold == 1:
            self.should_output = 1
            self.get_logger().info("restarting trajectory output")

    def parametric_trajectory_callback(self):
        print("hiii")

        
def main(args=None):
    rclpy.init(args=args)

    Trajectory_Controller_Object = Trajectory_Controller()
    rclpy.spin(Trajectory_Controller_Object)


if __name__ == '__main__':
    main()
