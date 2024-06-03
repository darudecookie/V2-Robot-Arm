Project Requirements  
<ins>Stretch/Future Requirements</ins>  


* 1 Kg payload  
* greater than 750mm reach
* Position and Velocity Control  
* Acceleration limiting
* <ins>Jerk limiting</ins>
* <ins> Smooth velocity, acceleration, and jerk limiting (i.e. all joints slow to match slowest joint)</ins>
* ROS/ROS2 integration
    * Joint, Cartesian, And trajectory control
    * Peripheral (i.e. Xbox 360 controller pr HOTAS) control
    * Sensible ROS structure 
* Robust micronctroller-PC communocation
    * Able to change constants like joint angles from PC through ROS
    * Greater than 100hz two-way communication (for information like current and target joint angles)
* Power:
    * 24V
    * Less than 10A; no blowing breakers or PSU's
* Estop system
     * Hardware and software triggers
     * Should cut power to motor drivers 
