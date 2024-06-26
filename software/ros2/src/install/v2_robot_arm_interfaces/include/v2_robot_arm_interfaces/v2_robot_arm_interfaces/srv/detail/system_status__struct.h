// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2_robot_arm_interfaces:srv/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/system_status.h"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__STRUCT_H_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SystemStatus in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__srv__SystemStatus_Request
{
  int8_t estop;
  int8_t jointhold;
  int8_t move_home;
} v2_robot_arm_interfaces__srv__SystemStatus_Request;

// Struct for a sequence of v2_robot_arm_interfaces__srv__SystemStatus_Request.
typedef struct v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence
{
  v2_robot_arm_interfaces__srv__SystemStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SystemStatus in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__srv__SystemStatus_Response
{
  int8_t returnsuccess;
} v2_robot_arm_interfaces__srv__SystemStatus_Response;

// Struct for a sequence of v2_robot_arm_interfaces__srv__SystemStatus_Response.
typedef struct v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence
{
  v2_robot_arm_interfaces__srv__SystemStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  v2_robot_arm_interfaces__srv__SystemStatus_Event__request__MAX_SIZE = 1
};
// response
enum
{
  v2_robot_arm_interfaces__srv__SystemStatus_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SystemStatus in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__srv__SystemStatus_Event
{
  service_msgs__msg__ServiceEventInfo info;
  v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence request;
  v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence response;
} v2_robot_arm_interfaces__srv__SystemStatus_Event;

// Struct for a sequence of v2_robot_arm_interfaces__srv__SystemStatus_Event.
typedef struct v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence
{
  v2_robot_arm_interfaces__srv__SystemStatus_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__STRUCT_H_
