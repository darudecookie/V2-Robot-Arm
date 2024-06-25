#include "Arduino.h"

#include "AccelStepper.h"

map<int, string> MCU_arguments = {
    {0, "Estop"},
    {1, "JointHold"},
    {2, "Move_Home"},

    {10, "Set_Joint_Positions"},
    {11, "Set_Joint_Velocities"},
    {12, "Set_Joint_Torques"},

    {20, "Get_Joint_Positions"},
    {21, "Get_Joint_Velocities"},
    {22, "Get_Joint_Torques"},
    {23, "Get_Joint_Accelerations"},
    {24, "Get_Joint_Jerks"},

    {30, "Set_Joint_Position_Limits"},
    {31, "Set_Joint_Velocity_Limits"},
    {32, "Set_Joint_Torque_Limits"},
    {33, "Set_Joint_Acceleration_Limits"},
    {34, "Set_Joint_Jerk_Limits"},
    {35, "Set_X_Workspace_Limit"},
    {36, "Set_Y_Workspace_Limit"},
    {37, "Set_Z_Workspace_Limit"},

    {40, "Set_Target_Joint_PID_Params"},
    {41, "Set_Home_Joint_Positions"},

    {50, "Get_EE_Float"},
    {51, "Set_EE_Float"},

    {60, "Get_Temperatures"},
}

void
setup()
{
}

void main()
{
}