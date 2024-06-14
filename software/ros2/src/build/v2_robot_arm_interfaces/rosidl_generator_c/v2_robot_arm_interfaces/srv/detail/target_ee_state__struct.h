// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2_robot_arm_interfaces:srv/TargetEEState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/target_ee_state.h"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__TARGET_EE_STATE__STRUCT_H_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__TARGET_EE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TargetEEState in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__srv__TargetEEState_Request
{
  float target_end_effector_value;
  int8_t target_end_effector_bool;
} v2_robot_arm_interfaces__srv__TargetEEState_Request;

// Struct for a sequence of v2_robot_arm_interfaces__srv__TargetEEState_Request.
typedef struct v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence
{
  v2_robot_arm_interfaces__srv__TargetEEState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/TargetEEState in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__srv__TargetEEState_Response
{
  float current_end_effector_value;
} v2_robot_arm_interfaces__srv__TargetEEState_Response;

// Struct for a sequence of v2_robot_arm_interfaces__srv__TargetEEState_Response.
typedef struct v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence
{
  v2_robot_arm_interfaces__srv__TargetEEState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  v2_robot_arm_interfaces__srv__TargetEEState_Event__request__MAX_SIZE = 1
};
// response
enum
{
  v2_robot_arm_interfaces__srv__TargetEEState_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TargetEEState in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__srv__TargetEEState_Event
{
  service_msgs__msg__ServiceEventInfo info;
  v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence request;
  v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence response;
} v2_robot_arm_interfaces__srv__TargetEEState_Event;

// Struct for a sequence of v2_robot_arm_interfaces__srv__TargetEEState_Event.
typedef struct v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence
{
  v2_robot_arm_interfaces__srv__TargetEEState_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__TARGET_EE_STATE__STRUCT_H_
