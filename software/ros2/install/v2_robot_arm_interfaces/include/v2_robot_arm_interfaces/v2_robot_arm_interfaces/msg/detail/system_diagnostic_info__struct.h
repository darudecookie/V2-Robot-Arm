// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2_robot_arm_interfaces:msg/SystemDiagnosticInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/system_diagnostic_info.h"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__SYSTEM_DIAGNOSTIC_INFO__STRUCT_H_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__SYSTEM_DIAGNOSTIC_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'temperatures'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SystemDiagnosticInfo in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__msg__SystemDiagnosticInfo
{
  int8_t estop;
  int8_t jointhold;
  rosidl_runtime_c__float__Sequence temperatures;
} v2_robot_arm_interfaces__msg__SystemDiagnosticInfo;

// Struct for a sequence of v2_robot_arm_interfaces__msg__SystemDiagnosticInfo.
typedef struct v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence
{
  v2_robot_arm_interfaces__msg__SystemDiagnosticInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__SYSTEM_DIAGNOSTIC_INFO__STRUCT_H_
