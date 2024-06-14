// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2_robot_arm_interfaces:msg/SystemDiagnosticInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2_robot_arm_interfaces/msg/detail/system_diagnostic_info__functions.h"
#include "v2_robot_arm_interfaces/msg/detail/system_diagnostic_info__struct.hpp"
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

void SystemDiagnosticInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2_robot_arm_interfaces::msg::SystemDiagnosticInfo(_init);
}

void SystemDiagnosticInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo *>(message_memory);
  typed_message->~SystemDiagnosticInfo();
}

size_t size_function__SystemDiagnosticInfo__temperatures(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemDiagnosticInfo__temperatures(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemDiagnosticInfo__temperatures(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemDiagnosticInfo__temperatures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SystemDiagnosticInfo__temperatures(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SystemDiagnosticInfo__temperatures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SystemDiagnosticInfo__temperatures(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SystemDiagnosticInfo__temperatures(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SystemDiagnosticInfo_message_member_array[3] = {
  {
    "estop",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::SystemDiagnosticInfo, estop),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "jointhold",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::SystemDiagnosticInfo, jointhold),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "temperatures",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::SystemDiagnosticInfo, temperatures),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemDiagnosticInfo__temperatures,  // size() function pointer
    get_const_function__SystemDiagnosticInfo__temperatures,  // get_const(index) function pointer
    get_function__SystemDiagnosticInfo__temperatures,  // get(index) function pointer
    fetch_function__SystemDiagnosticInfo__temperatures,  // fetch(index, &value) function pointer
    assign_function__SystemDiagnosticInfo__temperatures,  // assign(index, value) function pointer
    resize_function__SystemDiagnosticInfo__temperatures  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SystemDiagnosticInfo_message_members = {
  "v2_robot_arm_interfaces::msg",  // message namespace
  "SystemDiagnosticInfo",  // message name
  3,  // number of fields
  sizeof(v2_robot_arm_interfaces::msg::SystemDiagnosticInfo),
  false,  // has_any_key_member_
  SystemDiagnosticInfo_message_member_array,  // message members
  SystemDiagnosticInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  SystemDiagnosticInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SystemDiagnosticInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SystemDiagnosticInfo_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__get_type_hash,
  &v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__get_type_description,
  &v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace v2_robot_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo>()
{
  return &::v2_robot_arm_interfaces::msg::rosidl_typesupport_introspection_cpp::SystemDiagnosticInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, msg, SystemDiagnosticInfo)() {
  return &::v2_robot_arm_interfaces::msg::rosidl_typesupport_introspection_cpp::SystemDiagnosticInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
