// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2_robot_arm_interfaces:msg/CurrentEEInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2_robot_arm_interfaces/msg/detail/current_ee_info__functions.h"
#include "v2_robot_arm_interfaces/msg/detail/current_ee_info__struct.hpp"
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

void CurrentEEInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2_robot_arm_interfaces::msg::CurrentEEInfo(_init);
}

void CurrentEEInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2_robot_arm_interfaces::msg::CurrentEEInfo *>(message_memory);
  typed_message->~CurrentEEInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CurrentEEInfo_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::CurrentEEInfo, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_end_effector_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::CurrentEEInfo, current_end_effector_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_end_effector_bool",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::CurrentEEInfo, current_end_effector_bool),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CurrentEEInfo_message_members = {
  "v2_robot_arm_interfaces::msg",  // message namespace
  "CurrentEEInfo",  // message name
  3,  // number of fields
  sizeof(v2_robot_arm_interfaces::msg::CurrentEEInfo),
  false,  // has_any_key_member_
  CurrentEEInfo_message_member_array,  // message members
  CurrentEEInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  CurrentEEInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CurrentEEInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CurrentEEInfo_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__msg__CurrentEEInfo__get_type_hash,
  &v2_robot_arm_interfaces__msg__CurrentEEInfo__get_type_description,
  &v2_robot_arm_interfaces__msg__CurrentEEInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace v2_robot_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::msg::CurrentEEInfo>()
{
  return &::v2_robot_arm_interfaces::msg::rosidl_typesupport_introspection_cpp::CurrentEEInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, msg, CurrentEEInfo)() {
  return &::v2_robot_arm_interfaces::msg::rosidl_typesupport_introspection_cpp::CurrentEEInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
