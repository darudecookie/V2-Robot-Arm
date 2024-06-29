// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2_robot_arm_interfaces:msg/TargetJointInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/target_joint_info.h"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_JOINT_INFO__STRUCT_H_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_JOINT_INFO__STRUCT_H_

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

/// Struct defined in msg/TargetJointInfo in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__msg__TargetJointInfo
{
  std_msgs__msg__Header header;
  int16_t param_to_control;
  float target_joint_positions[7];
  float target_joint_velocities[7];
  float target_joint_torques[7];
} v2_robot_arm_interfaces__msg__TargetJointInfo;

// Struct for a sequence of v2_robot_arm_interfaces__msg__TargetJointInfo.
typedef struct v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence
{
  v2_robot_arm_interfaces__msg__TargetJointInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_JOINT_INFO__STRUCT_H_
