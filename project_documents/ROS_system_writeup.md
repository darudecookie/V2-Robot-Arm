This document is a list of all of the ROS nodes, topics, and services I think will be necessary.

__Topics:__  

__Topic Name__
* <ins>Topic short summary</ins>   
* <ins>Topic data type</ins>    


__current_joint_information__  
* current angles, velocities, and potential acceleration and/or jerk of all robot joints from arm's encoders
* 2-4 Float arrays

__target_joint_information__
* target angles, velocities, and potential acceleration and/or jerk of all robot joints from arm's encoders
* 2-4 Float arrays



__current_cartesian__
* current cartesian position and orientation of robot end effector
* kdl vector thingy

__target_cartesian__
* target cartesian position and orientation of robot end effector
* kdl vector thingy

__system_status__
* information about the current system status
* contains:
    * bool: joint_hold
    * bool: shutting_down



__Services:__  


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