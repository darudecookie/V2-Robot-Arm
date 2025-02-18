#ifndef MAIN_HPP
#define MAIN_HPP

#include <stdint.h>
#include <ActuatorController.hpp>

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

const char MCU_val_array[][30] = {
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
const byte start_byte = static_cast<uint8_t>(254);
const byte stop_byte = static_cast<uint8_t>(255);

const int max_serial_input = 25;
volatile uint16_t current_cmd = 255;
volatile byte current_arg[max_serial_input];
volatile bool command_flag = false;

struct to_send_msg
{
    byte msg[max_serial_input + 5];
};
Deque<to_send_msg> to_send_queue = Deque<to_send_msg>(50);

volatile bool global_jointhold_flag = true; // flag

volatile bool global_estop_flag = false;      // is estop turned on globally
const uint8_t stepper_driver_enable_pin = 21; // pin that all of the driver enable pins are connected to
const uint8_t estop_normally_HIGH_pin = 23;   // pins that read from button, these are normally high/low instead of NO/NC bc I haven't figured out how I'm gonna wire up the estop circuit
const uint8_t estop_normally_LOW_pin = 22;
const uint8_t estop_led_pin1 = LED_BUILTIN; // light to be turned on when the estop is on
// const uint8_t estop_led_pin2 = LED_BUILTIN; // light to be turned on when the estop is on

Actuator *Actuator_Array[7];
const uint8_t step_dir_pins[7][2] = {{1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}};
const int microsteps[7] = {16, 16, 16, 256, 256, 256, 256};
const float reduction_ratio[7] = {20, 20, 20, 20, 20, 20, 20};
const float angle_modifiers[7][2] = {{0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}};

float joint_home_positions[7] = {0, 0, 0, 0, 0, 0, 0};

const float arm_DH_params[7][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

float workspace_bounds[3][2] = {{0, -0}, {0, -0}, {0, -0}};

float target_end_effector = 0;
float current_end_effector = 0;

// float current_temps[7] = { 0, 0, 0, 0, 0, 0, 0 };

// these are all of the periods that different functions refresh/are run at
//  units are in the name
const int serial_print_interval_micro = 250;
const int serial_input_interval_micro = 100;
const int serial_decode_interval_micro = 350;

const int estop_check_interval_milli = 2; // interval to check the estop pins and call functions

const int kinematics_PID_recalc_joint_interval_milli = 75; // recalculates joint PID values, maybe should shoot for a value closer to 1KHz
const int joint_kinematics_report_interval_micro = 250;    // publishes joint position, velocity, acceleration, jerk, and torque. note that it takes 5 cycles to publish a message with all joint info, so in ros the system will publish joint info at 1/5 this rate

#endif