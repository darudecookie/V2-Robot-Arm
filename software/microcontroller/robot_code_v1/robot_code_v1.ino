
#include "Arduino.h"

#include "ActuatorController.h"
#include "SerialCommunicationFuncs.h"
#include <TimerThree.h>
#include <Deque.h>

const int8_t MCU_key_array[] = {
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
};

const String MCU_val_array[] = {
    "Estop",
    "JointHold",
    "Move_Home",

    "Set_Joint_Positions",
    "Set_Joint_Velocities",
    "Set_Joint_Torques",
    "Get_Joint_Accelerations",
    "Get_Joint_Jerks",

    "Set_Joint_Position_Limits",
    "Set_Joint_Velocity_Limits",
    "Set_Joint_Torque_Limits",
    "Set_Joint_Acceleration_Limits",
    "Set_Joint_Jerk_Limits",
    "Set_X_Workspace_Limit",
    "Set_Y_Workspace_Limit",
    "Set_Z_Workspace_Limit",

    "Set_Target_Joint_PID_Params",
    "Set_Home_Joint_Positions",

    "Get_EE_Float",
    "Set_EE_Float",

    "Get_Temperatures",
};

const char MCU_init_phrase[] = "<MCU_init>\n";
const char start_char = '<';
const char stop_char = '>';

const int max_serial_input = 21;
volatile uint16_t current_cmd = 255;
volatile byte current_arg[max_serial_input];
volatile bool command_flag = false;

struct to_send_msg
{
  byte msg[max_serial_input + 2];
};
Deque<to_send_msg> to_send_queue = Deque<to_send_msg>(50);

volatile bool global_jointhold = true;

volatile bool global_estop = false;
const int8_t stepper_driver_enable_pin = 22;
const int8_t estop_NO_button_pin = 20;
const int8_t estop_NC_button_pin = 21;

Actuator *Actuator_Array[7];
const uint8_t step_dir_pins[7][2] = {{1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}};
const int microsteps[7] = {16, 16, 16, 256, 256, 256, 256};
const float reduction_ratio[7] = {20, 20, 20, 20, 20, 20, 20};
const int default_PID[3] = {1, 0, 0};

float home_joint_angles[7] = {0, 0, 0, 0, 0, 0, 0};

const float arm_DH_params[7][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

const float workspace_bounds[3][2] = {{0, -0}, {0, -0}, {0, -0}};

float target_end_effector = 0;

float current_temps[7] = {0, 0, 0, 0, 0, 0, 0};

void setup()
{
  Serial.begin(115200);

  attachInterrupt(digitalPinToInterrupt(estop_NC_button_pin), Estop_on, FALLING);
  attachInterrupt(digitalPinToInterrupt(estop_NO_button_pin), Estop_on, RISING);
  pinMode(stepper_driver_enable_pin, OUTPUT);

  for (uint8_t i = 0; i < 7; i++)
  {
    Actuator_Array[i] = new Actuator(step_dir_pins[i][0], step_dir_pins[i][1], 200, microsteps[i], reduction_ratio[i], 1000);
  }

  Timer3.attachInterrupt(get_string_from_serial);
  Timer3.initialize(1000);

  Serial.println(MCU_init_phrase);
  pinMode(8, OUTPUT);
}

void loop()
{
  report_Estop_on();
  static long last_send = 0;
  if (micros() - last_send > 7500)
  {
    send_bytes_to_serial();
    last_send = micros();
  }

  static long last_get = 0;
  if (micros() - last_get > 7500)
  {
    decode_data_from_serial();
    last_get = micros();
  }


}

//--------------------SERIAL READING FUNCTIONS--------------------//
// higher frequency timer interrupt that just grabs a string from serial
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
}

const String val_from_key(const int8_t key)
{
  for (int i = 0; i < sizeof(MCU_key_array) / sizeof(MCU_key_array[0]); i++)
  {
    if (key == MCU_key_array[i])
    {
      return MCU_val_array[i];
    }
  }
}

const int8_t key_from_val(const String val)
{
  for (int i = 0; i < sizeof(MCU_key_array) / sizeof(MCU_key_array[0]); i++)
  {
    if (val == MCU_val_array[i])
    {
      return MCU_key_array[i];
    }
  }
}

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
      read_Estop_from_serial(current_arg[0]);
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

      break;
    case 12: // Set_Joint_Torques

      break;

    case 30: // Set_Joint_Position_Limits

      break;
    case 31: // Set_Joint_Velocity_Limits

      break;
    case 32: // Set_Joint_Torque_Limits

      break;
    case 33: // Set_Joint_Acceleration_Limits

      break;
    case 34: // Set_Joint_Jerk_Limits

      break;
    case 35: // Set_X_Workspace_Limit

      break;
    case 36: // Set_Y_Workspace_Limit

      break;
    case 37: // Set_Z_Workspace_Limit

      break;

    case 40: // Set_Target_Joint_PID_Params

      break;
    case 41: // Set_Home_Joint_Positions

      break;

    case 51: // Set_EE_Float

      break;
    }

    command_flag = false;
  }
}

void read_Estop_from_serial(uint8_t arg)
{
  if (arg == false)
  {
    global_estop = false;
    digitalWrite(stepper_driver_enable_pin, LOW);
          digitalWrite(8, LOW);

  }
  else
  {

    Estop_on();
    global_estop = false;
  }
}

void Estop_on()
{
  global_estop = true;
  digitalWrite(stepper_driver_enable_pin, HIGH);
        digitalWrite(8, HIGH);

}

void report_Estop_on()
{
  if (global_estop)
  {
    const uint8_t estop_cmd = key_from_val("Estop");

    to_send_msg val;
    val.msg[0] = estop_cmd;
    val.msg[1] = static_cast<byte>(1);
    val.msg[2] = stop_char;
    to_send_queue.push_front(val);
    global_estop = false;
  }
}
void control_jointhold(int8_t arg)
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
    Actuator_Array[i]->set_position(home_joint_angles[i]);
  }
}

void update_target_joint_positions()
{
  byte _internal_current_arg[21];
  memcpy(_internal_current_arg, current_arg, 21);

  uint8_t float_position = 0;

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

// void update_parameter(int8_t command, byte arg[max_serial_input - 1]) {}

void update_ee_value(byte arg[3]) {}

//--------------------SERIAL WRITING/REPORTING FUNCTIONS--------------------//
void report_estop_jointhold() {}

void report_current_joint_info() {}

void report_ee_value() {}

void report_temperatures() {}
