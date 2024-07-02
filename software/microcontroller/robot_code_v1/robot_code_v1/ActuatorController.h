#ifndef Actuator_Controller_h
#define Actuator_Controller_h

#include "Arduino.h"
#include "AccelStepper.h"
#include "FastPID.h"

class Actuator
{
public:
  float _m_position = 0; // this is supposed to be the most current reading from the encoder; so no interpolation/estimation like with other values
  float _m_velocity = 0; // internal target velocity
  float _m_acceleration = 0;
  float _m_jerk = 0;
  float _m_torque = 0;

  bool joint_hold = false; // designed to set by external jointhold func

  // all of these are in deg/sec^n (ie max velocity is in deg/sec^1, max jerk is in deg/sec^3 ), except for torque which is/will be in Nm
  float joint_position_limits[2] = {1, -1};
  float joint_jerk_limit = 2; // these next limits aren't arrays bc i imagine they would be they same regardless of direction of joint travel
  float joint_torque_limit = 2;

  Actuator(const uint8_t step_pin, const uint8_t dir_pin, int steps, int microsteps, const float reduction_ratio, const int PID_frequency, const float angle_modifiers[2]);

  void conditional_run(); // runs joints if should be run, basically wrapper of accelstepper->run()

  void set_position(float angle); // how target values will be set, setting them triggers different modes (for example setting target velocity stops position PID loop from outputting)
  void set_velocity(float velocity);
  void set_torque(float torque);

  void Kinematics_PID_Calc(float unparsed_angle_input); // func checks joint position and calculates, veloicty, accel, and jerk, then refreshes PID if neccessary

  void update_PID_params(double new_PID_params[3]); // these just update params; should be called when initting joints
  void update_max_speed(float new_speed);
  void update_max_accel(float new_accel);

private:
  AccelStepper *stepper_object;
  FastPID *PID_object;
  int _m_PID_frequency; // i dont plan to change this but it has to be here bc changing PID params also requires reinputting frequency

  int _m_steps_rev;               // steps per one revolution of the MOTOR, equal to motor steps * driver microsteps
  int _m_reduction_ratio;         // reduction ratio of the gearbox, equal to # of motor turns for 1 joint turn
  float _m_angle_add_offset;      // offset to add to inputted encoder val
  float _m_angle_multiply_offset; // offset to multiply encoder val by

  bool should_run = true;  // internal complement to jointhold, this allows for a joint to be stopped without tripping jointhold flag and then having to juggle commanded jointhold w an outof bound joint or something
  int8_t control_mode = 0; // what mode is being used; 0: angle, 1:velocity, 3: jerk

  float angle_setpoint = 0;       // internal target angle
  long last_joint_info_check = 0; // time that joint kinematics were last calculated  float _m_velocity = 0; // internal target velocity

  float joint_velocity_limit = 0; // param limits; these are private because veloicty and acceleration limits need to be passed to the stepper object and the rest of the system, unlike torque and jerk
  float joint_acceleraton_limit = 0;

  void check_current_angle(float unparsed_angle_data);        // internal function that checks angle; used as placehold bc i dont exactly know how ill check the encoder angles yet (6/29/24)
  void calculate_joint_kinematics(float unparsed_angle_data); // calculates kinematics w read encoder val
};

#endif