// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2_robot_arm_interfaces:msg/PeripheralSpeed.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2_robot_arm_interfaces/msg/detail/peripheral_speed__functions.h"
#include "v2_robot_arm_interfaces/msg/detail/peripheral_speed__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2_robot_arm_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PeripheralSpeed_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2_robot_arm_interfaces::msg::PeripheralSpeed(_init);
}

void PeripheralSpeed_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2_robot_arm_interfaces::msg::PeripheralSpeed *>(message_memory);
  typed_message->~PeripheralSpeed();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PeripheralSpeed_message_member_array[2] = {
  {
    "translation_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::PeripheralSpeed, translation_speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rotation_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::PeripheralSpeed, rotation_speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PeripheralSpeed_message_members = {
  "v2_robot_arm_interfaces::msg",  // message namespace
  "PeripheralSpeed",  // message name
  2,  // number of fields
  sizeof(v2_robot_arm_interfaces::msg::PeripheralSpeed),
  false,  // has_any_key_member_
  PeripheralSpeed_message_member_array,  // message members
  PeripheralSpeed_init_function,  // function to initialize message memory (memory has to be allocated)
  PeripheralSpeed_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PeripheralSpeed_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PeripheralSpeed_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__msg__PeripheralSpeed__get_type_hash,
  &v2_robot_arm_interfaces__msg__PeripheralSpeed__get_type_description,
  &v2_robot_arm_interfaces__msg__PeripheralSpeed__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace v2_robot_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::msg::PeripheralSpeed>()
{
  return &::v2_robot_arm_interfaces::msg::rosidl_typesupport_introspection_cpp::PeripheralSpeed_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, msg, PeripheralSpeed)() {
  return &::v2_robot_arm_interfaces::msg::rosidl_typesupport_introspection_cpp::PeripheralSpeed_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
