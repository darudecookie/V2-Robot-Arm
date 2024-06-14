This document is a list of all of the ROS nodes, topics, and services I think will be necessary.

__Topics:__  

__Topic Name__
* <ins>Topic short summary</ins>   
* <ins>Topic data type</ins>    


__current_joint_information__
* information about the current joints on the arms
* float[7] position
* float[7] velocity
* float[7] acceleration
* float[7] jerk
* float[7] torque (?)

__target_joint_information__
* information about the target state of the joints
* float[7] position
* float[7] velocity
* float[7] acceleration
* float[7] jerk

__system_diagnostic_information__
* information about secondary diagnositc values
* bool estop (whether estop is hit, can be low-hz topic)
* float[**] temperature (could add temp sensors in future)
* float[**] 

__target_cartesian__
* information about the target cartesian coordinates of the arm
* EITHER:
    * float[3] position (x y z)
    * float[3] rotation (roll pitch yaw)


__current_end_effector_information__
* information from the end effector, this will change based on what the end effector is/does
* float current_end_effector_value
* bool current_end_effector_bool

__target_end_effector_information__
* target end effector state, this will change based on what the end effector is/does
* float target_end_effector_value
* bool target_end_effector_bool

__Services:__  

__microcontroller_parameter_dump__
* single msg that contains a lot of rarely modified params that can be updated on the mcu
* int PID_update_target
* int[3] PID_update_params

* int joint_position_limit_update_target
* float[2] joint_position_limit_update_params

* int joint_velocity_limit_update_target
* float[2] joint_velocity_limit_update_params

* int joint_acceleration_limit_update_target
* float[2] joint_acceleration_limit_update_params

* int joint_torque_limit_update_target
* float[2] joint_torque_limit_update_params

* float[2] x_workspace_bounds
* float[2] y_workspace_bounds
* float[2] z_workspace_bounds
* float[7] home_joint_angles


__system_status__
* service call for important/time sensitive funcs
* bool E_Stop
* bool Joint_Hold
* bool move_home 

__control_status__
* used to control which node/solver is controlling the arm
* bool Trajectory_Controller_outputting
* bool IK_Solver_outputting
* bool Peripheral_Interface_outputting
* bool Master_Controller_outputting

__target_end_effector_state__

__microcontroller_parameter_dump__


__Nodes:__  

__Node_Name__
* <ins>Node short summary  </ins>  
* <ins>Topics Node publishes  </ins>  
* <ins>Topics Node subscribes to  </ins>  
* <ins>Services node is a server for  </ins>  
* <ins>Services node is a client for  </ins>  


__Microcontroller_Interface_Node__
* Node interfaces with robot arm mcu. Serves as a two-way information gate
* Publishes
    * __current_joint_information__
* Subscribes 
    * __target_joint_information__
    * __system_status__
* Server for:

* Client for: 
    * estop


__Cartesian_Controller_Node__
* Node takes a target cartesian position/orientation and converts it to joint angles
* Publishes
    * e
* Subscribes 
    * e
* Serves
* CL

__Joint_Controller_Node__   
* Node 
* Publishes
    * e
* Subscribes 
    * e


__Trajectory_Controller_Node__ 
* Node 
* Publishes
    * 
* Subscribes 
    * 


__Peripherial_Interface_Node__
* Node 
* Publishes
    * 
* Subscribes 
    * 



__End_Effector_Controller_Node__
* Node 
* Publishes
    * 
* Subscribes 
    * 




__ROS_Controller_Node__
* Node controls other nodes and also provides io for user to interface with system
* Publishes
    * 
* Subscribes 
    * 

__Package Breakdown:__
* v2-robot-arm_interfaces
    * all msg's and srv's for system 
* hardware_interface
    * Microcontroller_Interface_Node
    * End_Effector_Controller_Node
* movement_controllers   
    * Trajectory_Controller_Node
    * IK_Solver_Node
    * Peripherial_Interface_Node
* ros_controller_interface
    * ROS_Controller_Node