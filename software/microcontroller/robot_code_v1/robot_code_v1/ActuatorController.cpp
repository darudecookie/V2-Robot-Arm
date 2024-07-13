#include "ActuatorController.h"

#include "Arduino.h"
#include "AccelStepper.h"
#include "FastPID.h"

Actuator::Actuator(const uint8_t step_pin, const uint8_t dir_pin, int steps, int microsteps, const float reduction_ratio, const int PID_frequency, const float angle_modifiers[2])
{
  Actuator::stepper_object = new AccelStepper(AccelStepper::DRIVER, step_pin, dir_pin);              // setup stepper driver w passed params
  Actuator::stepper_object->setMaxSpeed(10 * microsteps * reduction_ratio * Actuator::_m_steps_rev); // PLACEHOLDER values, rela values are set after init
  Actuator::stepper_object->setAcceleration(2 * microsteps * reduction_ratio * Actuator::_m_steps_rev);

  Actuator::_m_steps_rev = steps * microsteps; // setting up internal vars
  Actuator::_m_reduction_ratio = reduction_ratio;
  Actuator::_m_PID_frequency = PID_frequency;
  Actuator::PID_object = new FastPID(2, 0, 0, PID_frequency, 16, true); // setting PID loop with PLACEHOLDER vals
}

void Actuator::conditional_run() // if no bad flags set; run, should be on intterupt every 50ns or so
{
  if (!(Actuator::joint_hold) && (Actuator::should_run))
  {
    Actuator::stepper_object->run();
  }
}

void Actuator::set_position(float position)
{
  if ((Actuator::joint_position_limits[0] <= position) && (position <= Actuator::joint_position_limits[1])) // check if position allowed
  {
    Actuator::angle_setpoint = position; // set angle setpoint
    Actuator::control_mode = 0;          // set control mode to 0 for position
  }
}
void Actuator::set_velocity(float velocity)
{
  if (abs(velocity) <= Actuator::joint_velocity_limit) // check if veloicty allowed, note the abs()
  {
    Actuator::stepper_object->setSpeed(velocity * Actuator::_m_reduction_ratio * Actuator::_m_steps_rev); // set speed
    Actuator::control_mode = 1;                                                                           // set control mode to 1 for velocity
  }
}
void Actuator::set_torque(float torque) // not yet supported idk if torque sensing on steppers is possible wo expensive drivers
{
  if (abs(torque) <= Actuator::joint_torque_limit)
  {
    // do nothing, not supported
  }
  //Serial.println("WARNING: TORQUE CONTROL NOT YET SUPPORTED"); // might get rid of this bc it wouldnt be seen
}

void Actuator::check_current_angle(float unparsed_angle_data) // returns current angle, should include angle offset arg prob
{
    //Serial.println("angle");
  float reading = 0; /////////PAY ATTENTION BITCH U NEED TO CHANGE THIS

  float position = (reading * Actuator::_m_angle_multiply_offset) + Actuator::_m_angle_add_offset; // modify read angle val

  // normalize angle val to -1<=angle val<=1 (radians)
  if (position > 1)
  {
    position -= 2;
  }
  else if (position < -1)
  {
    position += 2;
  }
  Actuator::_m_position = position;
}

void Actuator::calculate_joint_kinematics(float unparsed_angle_input)
{
    //Serial.println("kin");

  // calculate joint veloicty, acceleration, and jerk

  float old_position = Actuator::_m_position;
  Actuator::check_current_angle(unparsed_angle_input); // check angle

  const float time_since_last = ((micros() - Actuator::last_joint_info_check) / pow(10, 6)); // pow(10,6) = 10^6: normalize microsecs to secs
  Actuator::last_joint_info_check = micros();

  float last_velocity = _m_velocity;
  float last_acceleration = _m_acceleration;

  Actuator::_m_velocity = (Actuator::_m_position - old_position) / time_since_last;      // velocity = (current position - last position) / secs between two measurements
  Actuator::_m_acceleration = (Actuator::_m_velocity - last_velocity) / time_since_last; // acceleration = (current velocity - last velocity) / secs between two measurements
  Actuator::_m_jerk = (Actuator::_m_acceleration - last_acceleration) / time_since_last; // jerk = (current acceleration - last acceleration) / secs between two measurements

  if (((Actuator::joint_position_limits[0] <= Actuator::_m_position) && (Actuator::_m_position <= Actuator::joint_position_limits[1])) && (Actuator::_m_velocity <= Actuator::joint_velocity_limit) && (Actuator::_m_acceleration <= Actuator::joint_acceleraton_limit) && (Actuator::_m_jerk <= Actuator::joint_jerk_limit))
  {
    Actuator::should_run = true;
  }
  else
  {
    Actuator::should_run = false;
  }
}

void Actuator::Kinematics_PID_Calc(float unparsed_angle_input)
{
    //Serial.println("kin-pid");

  Actuator::calculate_joint_kinematics(unparsed_angle_input);
  if ((Actuator::control_mode == 0) && (Actuator::joint_hold == true) && (Actuator::should_run = true))
  {
    float PID_output = Actuator::PID_object->step(Actuator::angle_setpoint, Actuator::_m_position);
    Actuator::stepper_object->move(PID_output * Actuator::_m_steps_rev * Actuator::_m_reduction_ratio);
  }
}

void Actuator::update_PID_params(double new_PID_params[3])
{
  Actuator::PID_object->setCoefficients(new_PID_params[0], new_PID_params[1], new_PID_params[2], Actuator::_m_PID_frequency);
}

void Actuator::update_max_velocity(float new_speed)
{
  Actuator::stepper_object->setMaxSpeed(abs((new_speed)*_m_steps_rev * _m_reduction_ratio));
  Actuator::joint_velocity_limit = new_speed;
}

void Actuator::update_max_acceleration(float new_accel)
{
  Actuator::stepper_object->setAcceleration(abs((new_accel - 1) * _m_steps_rev * _m_reduction_ratio));

  Actuator::joint_acceleraton_limit = new_accel;
}