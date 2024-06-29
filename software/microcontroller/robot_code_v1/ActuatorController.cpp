#include "ActuatorController.h"

#include "Arduino.h"
#include <AccelStepper.h>
#include <FastPID.h>

Actuator::Actuator(const uint8_t step_pin, const uint8_t dir_pin, int steps, int microsteps, const float reduction_ratio, const int PID_frequency)
{
  Actuator::stepper_object = new AccelStepper(AccelStepper::DRIVER, step_pin, dir_pin);
  Actuator::stepper_object->setMaxSpeed(10 * microsteps * reduction_ratio * Actuator::_m_steps_rev);
  Actuator::stepper_object->setAcceleration(2 * microsteps * reduction_ratio * Actuator::_m_steps_rev);

  Actuator::_m_steps_rev = steps * microsteps;
  Actuator::_m_reduction_ratio = reduction_ratio;
  Actuator::_m_PID_frequency = PID_frequency;
  Actuator::PID_object = new FastPID(2, 0, 0, PID_frequency, 16, true);
}

void Actuator::conditional_run()
{
  if (!(Actuator::joint_hold) && (Actuator::should_run))
  {
    Actuator::stepper_object->run();
  }
}

void Actuator::set_position(float position)
{
  if (Actuator::joint_position_limits[0] <= position <= Actuator::joint_position_limits[1])
  {
    Actuator::angle_setpoint = position;
    Actuator::control_mode = 0;
  }
}
void Actuator::set_velocity(float velocity)
{
  if (abs(velocity) <= Actuator::joint_velocity_limit)
  {
    Actuator::stepper_object->setSpeed(velocity * Actuator::_m_reduction_ratio * Actuator::_m_steps_rev);
    Actuator::control_mode = 1;
  }
}
void Actuator::set_torque(float torque)
{
  if (abs(torque) <= Actuator::joint_torque_limit)
  {
  }
  Serial.println("WARNING: TORQUE CONTROL NOT YET SUPPORTED");
}

float Actuator::check_current_angle()
{
  float position = 0; /////////PAY ATTENTION BITCH U NEED TO CHANGE THIS
  // normalizes angle to +- 180 value
  if (position > 180)
  {
    position -= 360;
  }
  else if (position < -180)
  {
    position += 360;
  }
  return position;
}

void Actuator::calculate_joint_kinematics()
{
  float most_current_position = Actuator::check_current_angle();

  const float time_since_last = ((micros() - Actuator::last_joint_info_check) / pow(10, 6));
  Actuator::last_joint_info_check = micros();

  float last_velocity = _m_current_velocity;
  float last_acceleration = _m_current_acceleration;

  Actuator::_m_current_velocity = (Actuator::_m_current_position - most_current_position) / time_since_last; // velocity = (current position - last position) / secs between two measurements
  Actuator::_m_current_acceleration = (Actuator::_m_current_velocity - last_velocity) / time_since_last;     // acceleration = (current velocity - last velocity) / secs between two measurements
  Actuator::_m_current_jerk = (Actuator::_m_current_acceleration - last_acceleration) / time_since_last;     // jerk = (current acceleration - last acceleration) / secs between two measurements

  Actuator::_m_current_position = most_current_position;

  if ((Actuator::joint_position_limits[0] <= Actuator::_m_current_position <= Actuator::joint_position_limits[1]) && (Actuator::_m_current_velocity <= Actuator::joint_velocity_limit) && (Actuator::_m_current_acceleration <= Actuator::joint_acceleraton_limit) && (Actuator::_m_current_jerk <= Actuator::joint_jerk_limit))
  {
    Actuator::should_run = true;
  }
  else
  {
    Actuator::should_run = false;
  }
}

void Actuator::Kinematics_PID_Calc()
{
  Actuator::calculate_joint_kinematics();
  if ((Actuator::control_mode == 0) && (Actuator::joint_hold == true) && (Actuator::should_run = true))
  {
    float PID_output = Actuator::PID_object->step(Actuator::angle_setpoint, Actuator::_m_current_position);
    Actuator::stepper_object->move(PID_output * Actuator::_m_steps_rev * Actuator::_m_reduction_ratio);
  }
}

void Actuator::update_PID_params(double new_PID_params[3])
{
  Actuator::PID_object->setCoefficients(new_PID_params[0], new_PID_params[1], new_PID_params[2], Actuator::_m_PID_frequency);
}

void Actuator::update_max_speed(float new_speed)
{
  Actuator::stepper_object->setMaxSpeed(abs((new_speed)*_m_steps_rev * _m_reduction_ratio));
  Actuator::joint_velocity_limit = new_speed;
}

void Actuator::update_max_accel(float new_accel)
{
  Actuator::stepper_object->setAcceleration(abs((new_accel - 1) * _m_steps_rev * _m_reduction_ratio));

  Actuator::joint_acceleraton_limit = new_accel;
}