import rclpy
from rclpy.node import Node

from v2_robot_arm_interfaces.msg  import ControlStatus, SystemDiagnosticInfo, PeripheralSpeed, TargetCartesian, CurrentCartesian, TargetJointInfo, CurrentJointInfo
from v2_robot_arm_interfaces.srv import SystemStatus, SystemStatus_Request, MicrocontrollerParameterDump, TargetEEState 
from v2_robot_arm_interfaces.action import ParametricTrajectoryInfo



class ROS_Controller(Node):
    def __init__(self):
        super().__init__("ROS_Controller_Node")
        self.get_logger().info("initiating node")
        
        self.Control_status_msg= ControlStatus()
        self.System_Diagnostic_info_msg = SystemDiagnosticInfo()
        self.System_Status_msg = SystemStatus_Request()
        
        self.current_cartesian_pos = [0,0,0]
        self.current_cartesian_rot = [0,0,0]
        
        self.target_cartesian_pos = [0,0,0]
        self.target_cartesian_rot = [0,0,0]
        
        self.current_joint_position = [0,0,0,0,0,0,0]
        self.current_joint_velocity = [0,0,0,0,0,0,0]
        self.current_joint_torque = [0,0,0,0,0,0,0]
        self.current_joint_acceleration = [0,0,0,0,0,0,0]
        self.current_joint_jerk = [0,0,0,0,0,0,0]
        
        self.target_joint_position = [0,0,0,0,0,0,0]
        self.target_joint_velocity = [0,0,0,0,0,0,0]
        self.target_joint_torque = [0,0,0,0,0,0,0]
        
        self.current_end_effector = 0
        self.target_end_effector = 0
        
        self.System_Status_client = self.create_client(SystemStatus, "system_status")
        #while not self.System_Status_client.wait_for_service(timeout_sec = 1):
        #    self.get_logger().warn("'system_status' service not available\nretrying in 1 second")
            
        self.MCU_Param_Dump_client = self.create_client(MicrocontrollerParameterDump, "microcontroller_parameter_dump")
        self.Target_EE_client = self.create_client(TargetEEState, "target_end_effector_information")
        
        self.Current_Cartesian_sub = self.create_subscription(CurrentCartesian, "current_cartesian", self.update_current_cartesian, 10)
        self.Target_Cartesian_pub = self.create_publisher(TargetCartesian, "target_cartesian", 10)
        
        self.Current_Joint_sub = self.create_subscription(CurrentJointInfo, "current_joint_info", self.update_current_joint, 10)
        self.Target_Joint_pub = self.create_publisher(TargetJointInfo, "target_joint_info", 10)
        
        
        self.get_logger().info("node initiated!")
        
    def update_current_cartesian(self, msg):
        for i in range(3):
            self.current_cartesian_pos[i] = msg.position[i]
            self.current_cartesian_rot[i] = msg.rotation[i]

            
    def update_current_joint(self, msg):
        for i in range(7):
            self.current_joint_position[i] = msg.positions
            self.current_joint_velocity[i] = msg.velocities
            self.current_joint_torque[i] = msg.torques
            self.current_joint_acceleration[i] =msg.accelerations
            self.current_joint_jerk[i] = msg.jerks
        print(self.current_joint_position)
        
    def update_current_ee(self, msg):
        self

def main(args=None):
    rclpy.init(args=args)
    
    ROS_Controller_object = ROS_Controller()
    
    rclpy.spin(ROS_Controller_object)


if __name__ == '__main__':
    main()
