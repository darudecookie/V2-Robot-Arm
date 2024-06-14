// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2_robot_arm_interfaces:msg/TargetEEInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2_robot_arm_interfaces/msg/detail/target_ee_info__rosidl_typesupport_introspection_c.h"
#include "v2_robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2_robot_arm_interfaces/msg/detail/target_ee_info__functions.h"
#include "v2_robot_arm_interfaces/msg/detail/target_ee_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2_robot_arm_interfaces__msg__TargetEEInfo__rosidl_typesupport_introspection_c__TargetEEInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2_robot_arm_interfaces__msg__TargetEEInfo__init(message_memory);
}

void v2_robot_arm_interfaces__msg__TargetEEInfo__rosidl_typesupport_introspection_c__TargetEEInfo_fini_function(void * message_memory)
{
  v2_robot_arm_interfaces__msg__TargetEEInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2_robot_arm_interfaces__msg__TargetEEInfo__rosidl_typesupport_introspection_c__TargetEEInfo_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__msg__TargetEEInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_end_effector_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__msg__TargetEEInfo, current_end_effector_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_end_effector_bool",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__msg__TargetEEInfo, current_end_effector_bool),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2_robot_arm_interfaces__msg__TargetEEInfo__rosidl_typesupport_introspection_c__TargetEEInfo_message_members = {
  "v2_robot_arm_interfaces__msg",  // message namespace
  "TargetEEInfo",  // message name
  3,  // number of fields
  sizeof(v2_robot_arm_interfaces__msg__TargetEEInfo),
  false,  // has_any_key_member_
  v2_robot_arm_interfaces__msg__TargetEEInfo__rosidl_typesupport_introspection_c__TargetEEInfo_message_member_array,  // message members
  v2_robot_arm_interfaces__msg__TargetEEInfo__rosidl_typesupport_introspection_c__TargetEEInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  v2_robot_arm_interfaces__msg__TargetEEInfo__rosidl_typesupport_introspection_c__TargetEEInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2_robot_arm_interfaces__msg__TargetEEInfo__rosidl_typesupport_introspection_c__TargetEEInfo_message_type_support_handle = {
  0,
  &v2_robot_arm_interfaces__msg__TargetEEInfo__rosidl_typesupport_introspection_c__TargetEEInfo_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__msg__TargetEEInfo__get_type_hash,
  &v2_robot_arm_interfaces__msg__TargetEEInfo__get_type_description,
  &v2_robot_arm_interfaces__msg__TargetEEInfo__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, msg, TargetEEInfo)() {
  v2_robot_arm_interfaces__msg__TargetEEInfo__rosidl_typesupport_introspection_c__TargetEEInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!v2_robot_arm_interfaces__msg__TargetEEInfo__rosidl_typesupport_introspection_c__TargetEEInfo_message_type_support_handle.typesupport_identifier) {
    v2_robot_arm_interfaces__msg__TargetEEInfo__rosidl_typesupport_introspection_c__TargetEEInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2_robot_arm_interfaces__msg__TargetEEInfo__rosidl_typesupport_introspection_c__TargetEEInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
