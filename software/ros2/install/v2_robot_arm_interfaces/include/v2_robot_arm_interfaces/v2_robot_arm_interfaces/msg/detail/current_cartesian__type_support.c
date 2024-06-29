// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2_robot_arm_interfaces:msg/CurrentCartesian.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2_robot_arm_interfaces/msg/detail/current_cartesian__rosidl_typesupport_introspection_c.h"
#include "v2_robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2_robot_arm_interfaces/msg/detail/current_cartesian__functions.h"
#include "v2_robot_arm_interfaces/msg/detail/current_cartesian__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__CurrentCartesian_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2_robot_arm_interfaces__msg__CurrentCartesian__init(message_memory);
}

void v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__CurrentCartesian_fini_function(void * message_memory)
{
  v2_robot_arm_interfaces__msg__CurrentCartesian__fini(message_memory);
}

size_t v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__size_function__CurrentCartesian__position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__get_const_function__CurrentCartesian__position(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__get_function__CurrentCartesian__position(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__fetch_function__CurrentCartesian__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__get_const_function__CurrentCartesian__position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__assign_function__CurrentCartesian__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__get_function__CurrentCartesian__position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__size_function__CurrentCartesian__rotation(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__get_const_function__CurrentCartesian__rotation(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__get_function__CurrentCartesian__rotation(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__fetch_function__CurrentCartesian__rotation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__get_const_function__CurrentCartesian__rotation(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__assign_function__CurrentCartesian__rotation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__get_function__CurrentCartesian__rotation(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__CurrentCartesian_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__msg__CurrentCartesian, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__msg__CurrentCartesian, position),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__size_function__CurrentCartesian__position,  // size() function pointer
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__get_const_function__CurrentCartesian__position,  // get_const(index) function pointer
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__get_function__CurrentCartesian__position,  // get(index) function pointer
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__fetch_function__CurrentCartesian__position,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__assign_function__CurrentCartesian__position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__msg__CurrentCartesian, rotation),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__size_function__CurrentCartesian__rotation,  // size() function pointer
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__get_const_function__CurrentCartesian__rotation,  // get_const(index) function pointer
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__get_function__CurrentCartesian__rotation,  // get(index) function pointer
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__fetch_function__CurrentCartesian__rotation,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__assign_function__CurrentCartesian__rotation,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__CurrentCartesian_message_members = {
  "v2_robot_arm_interfaces__msg",  // message namespace
  "CurrentCartesian",  // message name
  3,  // number of fields
  sizeof(v2_robot_arm_interfaces__msg__CurrentCartesian),
  false,  // has_any_key_member_
  v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__CurrentCartesian_message_member_array,  // message members
  v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__CurrentCartesian_init_function,  // function to initialize message memory (memory has to be allocated)
  v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__CurrentCartesian_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__CurrentCartesian_message_type_support_handle = {
  0,
  &v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__CurrentCartesian_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__msg__CurrentCartesian__get_type_hash,
  &v2_robot_arm_interfaces__msg__CurrentCartesian__get_type_description,
  &v2_robot_arm_interfaces__msg__CurrentCartesian__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, msg, CurrentCartesian)() {
  v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__CurrentCartesian_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__CurrentCartesian_message_type_support_handle.typesupport_identifier) {
    v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__CurrentCartesian_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2_robot_arm_interfaces__msg__CurrentCartesian__rosidl_typesupport_introspection_c__CurrentCartesian_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
