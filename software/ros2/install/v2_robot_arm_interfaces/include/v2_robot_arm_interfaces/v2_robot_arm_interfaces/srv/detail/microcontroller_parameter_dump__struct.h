// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2_robot_arm_interfaces:srv/MicrocontrollerParameterDump.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/microcontroller_parameter_dump.h"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__STRUCT_H_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MicrocontrollerParameterDump in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request
{
  int16_t joint_position_limit_update_target;
  float joint_position_limit_update_params[2];
  int16_t joint_velocity_limit_update_target;
  float joint_velocity_limit_update_params[2];
  int16_t joint_torque_limit_update_target;
  float joint_torque_limit_update_params[2];
  int16_t joint_acceleration_limit_update_target;
  float joint_acceleration_limit_update_params[2];
  int16_t joint_jerk_limit_update_target;
  float joint_jerk_limit_update_params[2];
  float x_workspace_bounds[2];
  float y_workspace_bounds[2];
  float z_workspace_bounds[2];
  int16_t pid_update_target;
  float pid_update_params[3];
  float joint_home_positions[7];
} v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request;

// Struct for a sequence of v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request.
typedef struct v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/MicrocontrollerParameterDump in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response
{
  int8_t returnsuccess;
} v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response;

// Struct for a sequence of v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response.
typedef struct v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__request__MAX_SIZE = 1
};
// response
enum
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MicrocontrollerParameterDump in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event
{
  service_msgs__msg__ServiceEventInfo info;
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence request;
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence response;
} v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event;

// Struct for a sequence of v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event.
typedef struct v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__STRUCT_H_
