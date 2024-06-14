// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2_robot_arm_interfaces:msg/CurrentEEInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/current_ee_info.h"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CURRENT_EE_INFO__STRUCT_H_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CURRENT_EE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/CurrentEEInfo in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__msg__CurrentEEInfo
{
  std_msgs__msg__Header header;
  float current_end_effector_value;
  int8_t current_end_effector_bool;
} v2_robot_arm_interfaces__msg__CurrentEEInfo;

// Struct for a sequence of v2_robot_arm_interfaces__msg__CurrentEEInfo.
typedef struct v2_robot_arm_interfaces__msg__CurrentEEInfo__Sequence
{
  v2_robot_arm_interfaces__msg__CurrentEEInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__msg__CurrentEEInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CURRENT_EE_INFO__STRUCT_H_
