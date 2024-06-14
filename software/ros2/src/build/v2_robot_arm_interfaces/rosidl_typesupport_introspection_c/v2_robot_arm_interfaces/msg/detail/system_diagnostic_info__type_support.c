// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2_robot_arm_interfaces:msg/SystemDiagnosticInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2_robot_arm_interfaces/msg/detail/system_diagnostic_info__rosidl_typesupport_introspection_c.h"
#include "v2_robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2_robot_arm_interfaces/msg/detail/system_diagnostic_info__functions.h"
#include "v2_robot_arm_interfaces/msg/detail/system_diagnostic_info__struct.h"


// Include directives for member types
// Member `temperatures`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__SystemDiagnosticInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__init(message_memory);
}

void v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__SystemDiagnosticInfo_fini_function(void * message_memory)
{
  v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__fini(message_memory);
}

size_t v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__size_function__SystemDiagnosticInfo__temperatures(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__get_const_function__SystemDiagnosticInfo__temperatures(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__get_function__SystemDiagnosticInfo__temperatures(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__fetch_function__SystemDiagnosticInfo__temperatures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__get_const_function__SystemDiagnosticInfo__temperatures(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__assign_function__SystemDiagnosticInfo__temperatures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__get_function__SystemDiagnosticInfo__temperatures(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__resize_function__SystemDiagnosticInfo__temperatures(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__SystemDiagnosticInfo_message_member_array[3] = {
  {
    "estop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo, estop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "jointhold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo, jointhold),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperatures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo, temperatures),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__size_function__SystemDiagnosticInfo__temperatures,  // size() function pointer
    v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__get_const_function__SystemDiagnosticInfo__temperatures,  // get_const(index) function pointer
    v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__get_function__SystemDiagnosticInfo__temperatures,  // get(index) function pointer
    v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__fetch_function__SystemDiagnosticInfo__temperatures,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__assign_function__SystemDiagnosticInfo__temperatures,  // assign(index, value) function pointer
    v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__resize_function__SystemDiagnosticInfo__temperatures  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__SystemDiagnosticInfo_message_members = {
  "v2_robot_arm_interfaces__msg",  // message namespace
  "SystemDiagnosticInfo",  // message name
  3,  // number of fields
  sizeof(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo),
  false,  // has_any_key_member_
  v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__SystemDiagnosticInfo_message_member_array,  // message members
  v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__SystemDiagnosticInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__SystemDiagnosticInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__SystemDiagnosticInfo_message_type_support_handle = {
  0,
  &v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__SystemDiagnosticInfo_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__get_type_hash,
  &v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__get_type_description,
  &v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, msg, SystemDiagnosticInfo)() {
  if (!v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__SystemDiagnosticInfo_message_type_support_handle.typesupport_identifier) {
    v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__SystemDiagnosticInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__rosidl_typesupport_introspection_c__SystemDiagnosticInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
