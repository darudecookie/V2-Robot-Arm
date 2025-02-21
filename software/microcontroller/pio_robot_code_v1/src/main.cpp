
#include "Arduino.h"

#include "ActuatorController.hpp"
#include "ArduinoSerialWrapper.hpp"
// #include "FK_Solver.h"

#include <TimerInterrupt_Generic.h>
// #include "Deque.h"

#include "main.hpp"

// loop functions
void Estop_from_serial(volatile uint8_t arg);
void control_jointhold(volatile byte arg);
void move_home();

void update_target_joint_positions();
void update_target_joint_velocities();
void update_target_joint_torques();

void update_kinematic_limits(int limit_type, volatile byte arg[max_serial_input]);
void update_workspace_limits(volatile uint8_t axis_OI, volatile byte arg[max_serial_input]);
void update_joint_PID(volatile byte arg[max_serial_input]);
void update_home_position(volatile byte arg[max_serial_input]);
void update_ee_value(byte arg1, byte arg2, byte arg3);
void report_Estop();
void report_current_joint_info();
void report_ee_value();

void setup()
{
  Serial.begin(115200);

  pinMode(stepper_driver_enable_pin, OUTPUT);
  pinMode(estop_led_pin1, OUTPUT);
  // pinMode(estop_led_pin2, OUTPUT);

  pinMode(estop_normally_HIGH_pin, INPUT);
  pinMode(estop_normally_LOW_pin, INPUT);

  for (uint8_t i = 0; i < 7; i++)
  {
    Actuator_Array[i] = new Actuator(step_dir_pins[i][0], step_dir_pins[i][1], 200, microsteps[i], reduction_ratio[i], 1000, angle_modifiers[i]);
  }

  // EVERYTHING ABOVE HERE CANNOT CONTAIN ANY SERIAL INIT/SETUP STUFF OR SHIT GETS FUCKED
  while (!Serial)
  {
    delay(10);
  }

  Serial.println(MCU_init_phrase);

  // Timer3.attachInterrupt(run_motors);
  // Timer3.initialize(100);
}

void loop()
{
  static long last_estop_check = 0;
  /*
  if ((millis() - last_estop_check > estop_check_interval_milli))
  {
    if (!global_estop_flag)
    {
      if (digitalRead(estop_normally_HIGH_pin) == LOW || digitalRead(estop_normally_LOW_pin) == HIGH)
      {
        Estop_on();
        report_Estop();
      }
    }
    last_estop_check = millis();
  }
  static long last_serial_print = 0;
  if (micros() - last_serial_print > serial_print_interval_micro)
  {
    send_bytes_to_serial();
    last_serial_print = micros();
  }

  static long last_serial_read = 0;
  if (micros() - last_serial_read > serial_input_interval_micro)
  {
    get_string_from_serial();
    last_serial_read = micros();
  }

  static long serial_input_decode_micro = 0;
  if (micros() - serial_input_decode_micro > serial_decode_interval_micro)
  {
    decode_data_from_serial();
    serial_input_decode_micro = micros();
  }
*/
  static long last_joint_PID = 0;
  if (millis() - last_joint_PID > kinematics_PID_recalc_joint_interval_milli)
  {
    for (uint8_t i = 0; i < 7; i++)
    {
      (i == 3) ? Actuator_Array[i]->Kinematics_PID_Calc(check_I2C_encoder(i)) : Actuator_Array[i]->Kinematics_PID_Calc(check_offbore_encoder());
    }
    last_joint_PID = millis();
  }

  static long last_joint_kinematic_report = 0;
  if (micros() - last_joint_kinematic_report > joint_kinematics_report_interval_micro)
  {
    report_current_joint_info();
    last_joint_kinematic_report = micros();
  }
}

//--------------------SERIAL INTERPRETATION FUNCTION--------------------//
void decode_data_from_serial()
{
  if (command_flag)
  {
    switch (current_cmd)
    {
    case 0:
      Estop_from_serial(current_arg[0]);
      break;
    case 1: // JointHold
      control_jointhold(current_arg[0]);
      break;
    case 2: // Move_Home
      move_home();
      break;

    case 10: // Set_Joint_Positions
      update_target_joint_positions();
      break;
    case 11: // Set_Joint_Velocities
      update_target_joint_velocities();
      break;
    case 12: // Set_Joint_Torques
      update_target_joint_torques();
      break;

    case 30: // Set_Joint_Position_Limits
      update_kinematic_limits(0, current_arg);
      break;
    case 31: // Set_Joint_Velocity_Limits
      update_kinematic_limits(1, current_arg);
      break;
    case 32: // Set_Joint_Torque_Limits
      update_kinematic_limits(2, current_arg);
      break;
    case 33: // Set_Joint_Acceleration_Limits
      update_kinematic_limits(3, current_arg);
      break;
    case 34: // Set_Joint_Jerk_Limits
      update_kinematic_limits(4, current_arg);
      break;

    case 35: // Set_X_Workspace_Limit
      update_workspace_limits(0, current_arg);
      break;
    case 36: // Set_Y_Workspace_Limit
      update_workspace_limits(1, current_arg);
      break;
    case 37: // Set_Z_Workspace_Limit
      update_workspace_limits(2, current_arg);
      break;

    case 40: // Set_Target_Joint_PID_Params
      update_joint_PID(current_arg);
      break;
    case 41: // Set_Home_Joint_Positions
      update_home_position(current_arg);
      break;

    case 51: // Set_EE_Float
      update_ee_value(current_arg[0], current_arg[1], current_arg[2]);
      break;
    }

    command_flag = false;
  }
}

//--------------------DOING STUFF WITH DATA--------------------//
void Estop_from_serial(volatile uint8_t arg)
{
  // this function takes the estop val from serial and does stuff w/ it
  if (arg == 0) // estop off
  {
    // the reason turning the estop off is only here versus its own separate function is because the estop is only turned off from software, but it can be turned on from hardware or software, so it needs multiple access points
    global_estop_flag = false;                        // set flag
    digitalWriteFast(stepper_driver_enable_pin, LOW); // enable steppers
    digitalWriteFast(estop_led_pin1, LOW);            // turn light(s) off
    // digitalWriteFast(estop_led_pin2, LOW);
  }
  else if (arg == 1)
  {
    Estop_on();
  }
  /*
  else
  {
    Serial.println(arg);
    Serial.println("estop serial parse error");
    delay(10000000);
  }*/
}

void control_jointhold(volatile byte arg)
{
  global_jointhold_flag = static_cast<bool>(arg);

  for (uint8_t i = 0; i < 7; i++)
  {
    Actuator_Array[i]->joint_hold = static_cast<bool>(arg);
  }
}

void move_home()
{
  for (uint8_t i = 0; i < 7; i++)
  {
    Actuator_Array[i]->set_position(joint_home_positions[i]);
  }
}

void update_target_joint_positions()
{
  // byte _internal_current_arg[21];
  // memcpy(_internal_current_arg, current_arg, 21);

  float positions[7];
  // decode_7_floats(positions, _internal_current_arg);
  decode_7_floats(positions, current_arg);

  for (uint8_t i = 0; i < 7; i++)
  {
    Actuator_Array[i]->set_position(positions[i]);
  }
}
void update_target_joint_velocities()
{
  // byte _internal_current_arg[21];
  // memcpy(_internal_current_arg, current_arg, 21);

  float velocities[7];
  // decode_7_floats(velocities, _internal_current_arg);
  decode_7_floats(velocities, current_arg);

  for (uint8_t i = 0; i < 7; i++)
  {
    Actuator_Array[i]->set_velocity(velocities[i]);
  }
}
void update_target_joint_torques()
{
  // byte _internal_current_arg[21];
  // memcpy(_internal_current_arg, current_arg, 21);

  float torques[7];
  // decode_7_floats(torques, _internal_current_arg);
  decode_7_floats(torques, current_arg);

  for (uint8_t i = 0; i < 7; i++)
  {
    Actuator_Array[i]->set_torque(torques[i]);
  }
}

void update_kinematic_limits(int limit_type, volatile byte arg[max_serial_input])
{
  uint8_t target_joint = static_cast<uint8_t>(arg[0]);
  if (0 <= target_joint && target_joint <= 6)
  {
    byte limit_bytes[3];

    memcpy(limit_bytes, arg[1], sizeof(limit_bytes));
    float kinematic_limit1 = decode_1_float(limit_bytes);

    switch (limit_type)
    {
    case 0:
      Actuator_Array[target_joint]->joint_position_limits[0] = kinematic_limit1;

      // because the position limit is the only value with an upper and a lower, we need to take the next three bytes and turn them into a float for our value
      memcpy(limit_bytes, arg[4], sizeof(limit_bytes));
      kinematic_limit1 = decode_1_float(limit_bytes);
      Actuator_Array[target_joint]->joint_position_limits[1] = kinematic_limit1;
      break;
    case 1:
      Actuator_Array[target_joint]->update_max_velocity(kinematic_limit1);
      break;
    case 2:
      Actuator_Array[target_joint]->update_max_acceleration(kinematic_limit1);
      break;
    case 3:
      Actuator_Array[target_joint]->joint_jerk_limit = kinematic_limit1;
      break;
    case 4:
      Actuator_Array[target_joint]->joint_torque_limit = kinematic_limit1;
      break;
    }
  }
}

void update_workspace_limits(volatile uint8_t axis_OI, volatile byte arg[max_serial_input])
{
  byte limit_bytes[3];

  memcpy(limit_bytes, arg[0], sizeof(limit_bytes));
  workspace_bounds[axis_OI][0] = decode_1_float(limit_bytes);

  memcpy(limit_bytes, arg[3], sizeof(limit_bytes));
  workspace_bounds[axis_OI][1] = decode_1_float(limit_bytes);
}

void update_joint_PID(volatile byte arg[max_serial_input])
{
  uint8_t target_joint = static_cast<uint8_t>(arg[0]);
  if (0 <= target_joint && target_joint <= 6)
  {
    byte PID_bytes[3];
    double new_PID_params[3];

    for (uint8_t i = 0; i < 3; i++)
    {
      memcpy(PID_bytes, arg[(i * 3) + 1], sizeof(PID_bytes));
      new_PID_params[i] = decode_1_float(PID_bytes);
    }
    Actuator_Array[target_joint]->update_PID_params(new_PID_params);
  }
}

void update_home_position(volatile byte arg[max_serial_input])
{

  byte home_bytes[3];

  for (uint8_t i = 0; i < 7; i++)
  {
    memcpy(home_bytes, arg[i * 3], sizeof(home_bytes));

    joint_home_positions[i] = decode_1_float(home_bytes);
  }

  // memcpy(joint_home_positions, decode_7_floats(arg), sizeof(joint_home_positions));
}

void update_ee_value(byte arg1, byte arg2, byte arg3)
{
  byte ee_bytes[3] = {arg1, arg2, arg3};
  target_end_effector = decode_1_float(ee_bytes);
}

//--------------------SERIAL WRITING FUNCTIONS--------------------//
void report_Estop()
{

  // this func reports an estop to serial/ros system if an estop is triggered and the estop originates from serial and the estop hasn't yet been reported
  const byte estop_cmd = key_from_val("Estop"); // key val of estop

  to_send_msg estop;
  estop.msg[0] = estop_cmd;
  estop.msg[1] = 1;
  estop.msg[2] = stop_byte;

  to_send_queue.push_front(estop);
  digitalWriteFast(estop_led_pin1, HIGH); // turn light(s) on
  // digitalWriteFast(estop_led_pin2, HIGH);
}

void report_current_joint_info()
{
  static int info_to_be_reported = 0;
  to_send_msg current_joint_info;

  switch (info_to_be_reported)
  {
  case 0:
    current_joint_info.msg[0] = key_from_val("Get_Joint_Positions");
    break;
  case 1:
    current_joint_info.msg[0] = key_from_val("Get_Joint_Velocities");
    break;
  case 2:
    current_joint_info.msg[0] = key_from_val("Get_Joint_Torques");
    break;
  case 3:
    current_joint_info.msg[0] = key_from_val("Get_Joint_Accelerations");
    break;
  case 4:
    current_joint_info.msg[0] = key_from_val("Get_Joint_Jerks");
    break;
  }
  for (int i = 0; i < 7; i++)
  {
    byte joint_info_float[3];
    switch (info_to_be_reported)
    {
    case 0:
      encode_1_float(Actuator_Array[i]->_m_position, joint_info_float);
      current_joint_info.msg[0] = key_from_val("Get_Joint_Positions");
      break;
    case 1:
      encode_1_float(Actuator_Array[i]->_m_velocity, joint_info_float);
      current_joint_info.msg[0] = key_from_val("Get_Joint_Velocities");
      break;
    case 2:
      encode_1_float(Actuator_Array[i]->_m_torque, joint_info_float);
      current_joint_info.msg[0] = key_from_val("Get_Joint_Torques");
      break;
    case 3:
      encode_1_float(Actuator_Array[i]->_m_acceleration, joint_info_float);
      current_joint_info.msg[0] = key_from_val("Get_Joint_Accelerations");
      break;
    case 4:
      encode_1_float(Actuator_Array[i]->_m_jerk, joint_info_float);
      current_joint_info.msg[0] = key_from_val("Get_Joint_Jerks");
      break;
    }

    for (int j = 0; j < 3; j++)
    {
      current_joint_info.msg[(i * 3) + j + 1] = joint_info_float[j];
    }
  }

  current_joint_info.msg[22] = stop_byte;

  to_send_queue.push_back(current_joint_info);

  (info_to_be_reported == 4) ? info_to_be_reported = 0 : info_to_be_reported++;
}

void report_ee_value()
{
  to_send_msg current_ee_msg;

  byte current_ee_bytes[3];
  encode_1_float(current_end_effector, current_ee_bytes);
  memcpy(current_ee_msg.msg[0], current_ee_bytes[0], sizeof(current_ee_bytes));

  current_ee_msg.msg[3] = stop_byte;

  to_send_queue.push_back(current_ee_msg);
}

void report_temperatures() {}

//--------------------HARDWARE/ACTUATOR INTERFACE STUFF--------------------//
void Estop_on()
{
  global_estop_flag = true;                          // global flag
  digitalWriteFast(stepper_driver_enable_pin, HIGH); // the stepper enable pin turns stepper off when highl
  digitalWriteFast(estop_led_pin1, HIGH);
  // digitalWriteFast(estop_led_pin2, HIGH);
}

float check_I2C_encoder(uint8_t encoder_num)
{
  return 0.1;
}
float check_offbore_encoder()
{
  return 0.2;
}

void run_motors()
{
  for (uint8_t i = 0; i < 7; i++)
  {
    Actuator_Array[i]->conditional_run();
  }
}

void update_end_effector()
{
  current_end_effector = 0;
}
//--------------------RANDOM UTILITY FUNCS--------------------//
const String val_from_key(const uint8_t key)
{
  for (uint8_t i = 0; i < sizeof(MCU_key_array) / sizeof(MCU_key_array[0]); i++)
  {
    if (key == MCU_key_array[i])
    {
      return MCU_val_array[i];
    }
  }
  return "";
}

const uint8_t key_from_val(const String val)
{
  for (uint8_t i = 0; i < sizeof(MCU_key_array) / sizeof(MCU_key_array[0]); i++)
  {
    if (val == MCU_val_array[i])
    {
      return MCU_key_array[i];
    }
  }
  return 255;
}