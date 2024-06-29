#ifndef Actuator_Controller_h
#define Actuator_Controller_h

#include "Arduino.h"
#include <AccelStepper.h>
#include <FastPID.h>

class Actuator
{
public:
  float _m_current_position = 0;

  bool joint_hold = false;

  // all of these are in deg/sec^n (ie max velocity is in deg/sec^1, max jerk is in deg/sec^3 ), except for torque which is/will be in Nm
  float joint_position_limits[2] = {0, -0};
  float joint_jerk_limit = 0;
  float joint_torque_limit = -0;

  Actuator::Actuator(const uint8_t step_pin, const uint8_t dir_pin, int steps, int microsteps, const float reduction_ratio, const int PID_frequency);

  void conditional_run();

  void set_position(float angle);
  void set_velocity(float velocity);
  void set_torque(float torque);

  void Kinematics_PID_Calc();

  void update_PID_params(double new_PID_params[3]);
  void update_max_speed(float new_speed);
  void update_max_accel(float new_accel);

private:
  AccelStepper *stepper_object;
  FastPID *PID_object;
  int _m_PID_frequency;

  int _m_steps_rev;
  int _m_reduction_ratio;

  bool should_run = true;
  int8_t control_mode = 0; // 0: angle, 1:velocity, 3: jerk

  float angle_setpoint = 0;
  float _m_current_velocity = 0;
  float _m_current_acceleration = 0;
  float _m_current_jerk = 0;
  long last_joint_info_check = 0;

  float joint_velocity_limit = 0;
  float joint_acceleraton_limit = 0;

  float check_current_angle();
  void calculate_joint_kinematics();
};

#endif