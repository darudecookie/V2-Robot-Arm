This document is a list of all of the ROS nodes, topics, and services I think will be necessary.

__Topics:__  

__Topic Name__
* <ins>Topic short summary</ins>   
* <ins>Topic data type</ins>    

__parsed_peripheral_info__

__current_joint_information__

__system_diagnostic_information__

__target_cartesian__

__target_joint_information__

__current_end_effector_information__

__target_end_effector_information__


__Services:__  

__microcontroller_parameter_dump__

__system_status__

__control_status__

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




__User_Interface_Node__
* Node handles user input to robot like safing, homing, and displaying current cartesian and joint info; could use a gui
* Publishes
    * 
* Subscribes 
    * 

__ROS_Controller_Node__
* Node 
* Publishes
    * 
* Subscribes 
    * 