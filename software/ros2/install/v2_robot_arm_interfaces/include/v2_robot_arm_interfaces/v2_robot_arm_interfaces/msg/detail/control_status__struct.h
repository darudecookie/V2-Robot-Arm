// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2_robot_arm_interfaces:msg/ControlStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/control_status.h"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CONTROL_STATUS__STRUCT_H_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CONTROL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ControlStatus in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__msg__ControlStatus
{
  int8_t trajectory_controller;
  int8_t ik_solver;
  int8_t peripheral_interface;
  int8_t main_controller;
} v2_robot_arm_interfaces__msg__ControlStatus;

// Struct for a sequence of v2_robot_arm_interfaces__msg__ControlStatus.
typedef struct v2_robot_arm_interfaces__msg__ControlStatus__Sequence
{
  v2_robot_arm_interfaces__msg__ControlStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__msg__ControlStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CONTROL_STATUS__STRUCT_H_
