
#include "Arduino.h"

#include "ActuatorController.h"
#include "SerialCommunicationFuncs.h"
// #include "FK_Solver.h"
#include "TimerThree.h"
#include "Deque.h"

const uint8_t MCU_key_array[] = {
    0,
    1,
    2,

    10,
    11,
    12,

    20,
    21,
    22,
    23,
    24,

    30,
    31,
    32,
    33,
    34,
    35,
    36,
    37,

    40,
    41,

    50,
    51,

    60,

    254,
    255};

const String MCU_val_array[] = {
    "Estop",     //
    "JointHold", //
    "Move_Home", //

    "Set_Joint_Positions",  //
    "Set_Joint_Velocities", //
    "Set_Joint_Torques",    //

    "Get_Joint_Positions",     //
    "Get_Joint_Velocities",    //
    "Get_Joint_Torques",       //
    "Get_Joint_Accelerations", //
    "Get_Joint_Jerks",         //

    "Set_Joint_Position_Limits",     //
    "Set_Joint_Velocity_Limits",     //
    "Set_Joint_Torque_Limits",       //
    "Set_Joint_Acceleration_Limits", //
    "Set_Joint_Jerk_Limits",         //
    "Set_X_Workspace_Limit",         //
    "Set_Y_Workspace_Limit",         //
    "Set_Z_Workspace_Limit",         //

    "Set_Target_Joint_PID_Params", //
    "Set_Home_Joint_Positions",    //

    "Get_EE_Float",
    "Set_EE_Float", //

    "Get_Temperatures",

    "RESERVED",
    "RESERVED"};

const char MCU_init_phrase[] = "<MCU_init>\n";
const char start_char = '<';
const char stop_char = '>';

const int max_serial_input = 25;
volatile uint16_t current_cmd = 255;
volatile byte current_arg[max_serial_input];
volatile bool command_flag = false;

struct to_send_msg
{
  byte msg[max_serial_input + 5];
};
Deque<to_send_msg> to_send_queue = Deque<to_send_msg>(50);

volatile bool global_jointhold = true;

volatile bool global_estop = false;              // is estop turned on globally
volatile bool unreported_hardware_estop = false; // has
const uint8_t stepper_driver_enable_pin = 22;
const uint8_t estop_NO_button_pin = 32;
const uint8_t estop_NC_button_pin = 31;
const uint8_t estop_led_pin = LED_BUILTIN;

Actuator *Actuator_Array[7];
const uint8_t step_dir_pins[7][2] = {{1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}};
const int microsteps[7] = {16, 16, 16, 256, 256, 256, 256};
const float reduction_ratio[7] = {20, 20, 20, 20, 20, 20, 20};
const float angle_modifiers[7][2] = {{0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}};
const int default_PID[3] = {1, 0, 0};

float joint_home_positions[7] = {0, 0, 0, 0, 0, 0, 0};

const float arm_DH_params[7][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

float workspace_bounds[3][2] = {{0, -0}, {0, -0}, {0, -0}};

float target_end_effector = 0;
float current_end_effector = 0;

// float current_temps[7] = { 0, 0, 0, 0, 0, 0, 0 };

const int serial_print_inverval_micro = 250;
const int serial_input_interval_micro = 250;

const int estop_interval_interval_milli = 2;

const int kinematics_PID_recalc_joint_interval_milli = 75;
const int joint_kinematics_report_interval_micro = 250; // note that it takes 5 cycles to publish a message with all joint info, so in ros the system will publish joint info at 1/5 this rate

const int serial_check_interval_milli = 1000;

void setup()
{
  Serial.begin(115200);

  pinMode(stepper_driver_enable_pin, OUTPUT);
  pinMode(estop_led_pin, OUTPUT);

  pinMode(estop_NO_button_pin, INPUT);
  pinMode(estop_NC_button_pin, INPUT);

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

  Timer3.attachInterrupt(run_motors);
  Timer3.initialize(100);
}

void loop()
{
  static long last_estop_check = 0;
  if ((millis() - last_estop_check > estop_interval_interval_milli))
  {
    if (digitalRead(estop_NO_button_pin) == HIGH && !global_estop)
    {
      Estop_on();
      report_Estop_if_on();
      last_estop_check = millis();
    } //    else if (digitalRead(estop_NC_button_pin) == HIGH && !global_estop){Estop_on();report_Estop_if_on();last_estop_check = millis();}
  }

  static long last_serial_print = 0;
  if (micros() - last_serial_print > serial_print_inverval_micro)
  {
    send_bytes_to_serial();
    last_serial_print = micros();
  }

  static long last_serial_input = 0;
  if (micros() - last_serial_input > serial_input_interval_micro)
  {
    decode_data_from_serial();
    last_serial_input = micros();
  }

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

  static long last_serial_check = 0;
  if (millis() - last_serial_check > serial_check_interval_milli)
  {
    if (!Serial)
    {
      SCB_AIRCR = 0x05FA0004;
    }
    last_serial_check = millis();
  }
}

//--------------------SERIAL READ/WRITE FUNCTIONS--------------------//
void get_string_from_serial()
{

  static int serial_input_parse_position = 0;
  static bool should_read = false;
  static bool first_char = true;

  if (Serial.available() > 0 && command_flag == false)
  {
    char read_char = Serial.read();

    if (read_char == start_char)
    {
      should_read = true;
      serial_input_parse_position = 0;
      first_char = true;

      memset(current_arg, false, max_serial_input); // clear current arg
    }
    else if (read_char == stop_char && should_read)
    {
      should_read = false;
      command_flag = true;
    }
    else if (should_read)
    {
      if (first_char)
      {
        current_cmd = read_char;
        first_char = false;
      }
      else
      {
        current_arg[serial_input_parse_position] = read_char;
        serial_input_parse_position++;
      }
    }
  }
  else
  {
    serial_input_parse_position = 0;
    should_read = false;
  }
}

void send_bytes_to_serial()
{
  if (to_send_queue.count() > 0)
  {
    to_send_msg to_send = to_send_queue.pop_front();
    Serial.write(start_char);
    for (byte single_byte : to_send.msg)
    {
      Serial.write(single_byte);
      if (single_byte == stop_char)
      {
        return;
      }
    }
  }
  Serial.write(stop_char);
}

//--------------------SERIAL INTERPRETATION FUNCTION--------------------//
void decode_data_from_serial()
{
  if (command_flag)
  {
    /*
    Serial.print(current_cmd);
    Serial.print(" ");
    Serial.println(current_arg[0]);
    */
    switch (current_cmd)
    {
    case 0:
      update_Estop_from_serial(current_arg[0]);
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
void Estop_on()
{
  global_estop = true;              // global flag
  unreported_hardware_estop = true; // if this function is triggered just thru interrupt, this flag is set

  digitalWriteFast(stepper_driver_enable_pin, HIGH); // the stepper enable pin turns stepper off when high
}

void control_jointhold(byte arg)
{
  global_jointhold = static_cast<bool>(arg);

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
  byte _internal_current_arg[21];
  memcpy(_internal_current_arg, current_arg, 21);

  float positions[7];
  decode_7_floats(positions, _internal_current_arg);

  for (uint8_t i = 0; i < 7; i++)
  {
    Actuator_Array[i]->set_position(positions[i]);
  }
}
void update_target_joint_velocities()
{
  byte _internal_current_arg[21];
  memcpy(_internal_current_arg, current_arg, 21);

  float velocities[7];
  decode_7_floats(velocities, _internal_current_arg);

  for (uint8_t i = 0; i < 7; i++)
  {
    Actuator_Array[i]->set_velocity(velocities[i]);
  }
}
void update_target_joint_torques()
{
  byte _internal_current_arg[21];
  memcpy(_internal_current_arg, current_arg, 21);

  float torques[7];
  decode_7_floats(torques, _internal_current_arg);

  for (uint8_t i = 0; i < 7; i++)
  {
    Actuator_Array[i]->set_torque(torques[i]);
  }
}

void update_kinematic_limits(int limit_type, byte arg[max_serial_input])
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

void update_workspace_limits(uint8_t axis_OI, byte arg[max_serial_input])
{
  byte limit_bytes[3];

  memcpy(limit_bytes, arg[0], sizeof(limit_bytes));
  workspace_bounds[axis_OI][0] = decode_1_float(limit_bytes);

  memcpy(limit_bytes, arg[3], sizeof(limit_bytes));
  workspace_bounds[axis_OI][1] = decode_1_float(limit_bytes);
}

void update_joint_PID(byte arg[max_serial_input])
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

void update_home_position(byte arg[max_serial_input])
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

void update_Estop_from_serial(uint8_t arg)
{
  if (arg == false)
  {
    global_estop = false;                             // set flag
    digitalWriteFast(stepper_driver_enable_pin, LOW); // enable steppers
    digitalWriteFast(estop_led_pin, HIGH);            // turn light off
  }
  else
  {
    Estop_on();
    unreported_hardware_estop = false; // flag is set in above, and unset if func is triggered through software
  }
}

//--------------------SERIAL WRITING FUNCTIONS--------------------//
void report_Estop_if_on()
{
  // this func reports an estop to serial/ros system if an estop is triggered and the estop originates from serial and the estop hasn't yet been reported

  const uint8_t estop_cmd = key_from_val("Estop"); // key val of estop
  if (global_estop && unreported_hardware_estop)
  {

    to_send_msg val;
    val.msg[0] = estop_cmd;
    val.msg[1] = static_cast<byte>(1); // if this func is triggered then estop is on so arg is always 1/true
    val.msg[2] = stop_char;            // appened stop char so print function knows where to stop
    to_send_queue.push_front(val);
    unreported_hardware_estop = false;     // set flag
    digitalWriteFast(estop_led_pin, HIGH); // turn led on
  }
}

void report_current_joint_info()
{
  static int info_to_be_reported = 0;
  // Serial.println("start report");
  to_send_msg current_joint_info;

  // Serial.println("init vals");

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
    // memcpy(current_joint_info.msg[i], joint_position, sizeof(joint_position));
    // Serial.println("memcpy");

    // Serial.println(i);
  }

  // Serial.println("finish calc");
  current_joint_info.msg[22] = stop_char;

  to_send_queue.push_back(current_joint_info);
  // Serial.println("end report");

  (info_to_be_reported == 4) ? info_to_be_reported = 0 : info_to_be_reported++;
}

void report_ee_value()
{
  to_send_msg current_ee_msg;

  byte current_ee_bytes[3];
  encode_1_float(current_end_effector, current_ee_bytes);
  memcpy(current_ee_msg.msg[0], current_ee_bytes[0], sizeof(current_ee_bytes));

  current_ee_msg.msg[3] = stop_char;

  to_send_queue.push_back(current_ee_msg);
}

void report_temperatures() {}

//--------------------HARDWARE/ACTUATOR INTERFACE STUFF--------------------//
float check_I2C_encoder(uint8_t encoder_num)
{
  return .1;
}
float check_offbore_encoder()
{
  return 0;
}

void run_motors()
{
  for (uint8_t i = 0; i < 7; i++)
  {
    Actuator_Array[i]->conditional_run();
  }
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