# V2-Robot-Arm
Working directory for second version of robot arm

This project was started after my highschool senior project, to build on and improve my v1 robot arm

Some issues I identified with V1:
* Basically impossible to mount encoders on joints 3 and 4
* Actuators had high backlash
* A lot of vibration, partly coming from actautor backlash
* Slippage between gearbox input and motor,
* 2-3 link was really heavy for its size and length
* Arm only had 4DOF, probably hard to add more axes

I really enjoyed some of the trajectory generation and controls stuff, along with the visual servoing i got to see, at my internship so I want an arm that is solid enough to explore some of those higher level concepts.

I've decided to start with a new version of the cycloidal gearbox, because the gearboxes caused a lot of problems.
