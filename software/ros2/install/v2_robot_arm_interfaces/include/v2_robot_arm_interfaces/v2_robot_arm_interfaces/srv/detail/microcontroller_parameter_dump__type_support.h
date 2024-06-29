// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from v2_robot_arm_interfaces:srv/MicrocontrollerParameterDump.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/microcontroller_parameter_dump.h"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__TYPE_SUPPORT_H_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "v2_robot_arm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  v2_robot_arm_interfaces,
  srv,
  MicrocontrollerParameterDump_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  v2_robot_arm_interfaces,
  srv,
  MicrocontrollerParameterDump_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  v2_robot_arm_interfaces,
  srv,
  MicrocontrollerParameterDump_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  v2_robot_arm_interfaces,
  srv,
  MicrocontrollerParameterDump
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  v2_robot_arm_interfaces,
  srv,
  MicrocontrollerParameterDump
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  v2_robot_arm_interfaces,
  srv,
  MicrocontrollerParameterDump
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__TYPE_SUPPORT_H_
