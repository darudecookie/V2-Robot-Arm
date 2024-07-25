from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='hardware_interface',
            executable='Microcontroller_Interface_Node',
            name='Microcontroller_Interface_Node'
        ),
        Node(
            package='hardware_interface',
            executable='End_Effector_Controller_Node',
            name='End_Effector_Controller_Node'
        ),
        
        Node(
            package='ros_controller_interface',
            executable='ROS_Controller_Node',
            name='ROS_Controller_Node',
        ),
        
        Node(
            package='movement_controllers',
            executable='Kinematic_Solver_Node',
            name='Kinematic_Solver_Node',
        ),
        Node(
            package='movement_controllers',
            executable='Peripheral_Interface_Node',
            name='Peripheral_Interface_Node',
        ),
        Node(
            package='movement_controllers',
            executable='Trajectory_Controller_Node',
            name='Trajectory_Controller_Node',
        )
    ])
