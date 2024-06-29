// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2_robot_arm_interfaces:msg/CurrentCartesian.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2_robot_arm_interfaces/msg/detail/current_cartesian__functions.h"
#include "v2_robot_arm_interfaces/msg/detail/current_cartesian__struct.hpp"
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

void CurrentCartesian_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2_robot_arm_interfaces::msg::CurrentCartesian(_init);
}

void CurrentCartesian_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2_robot_arm_interfaces::msg::CurrentCartesian *>(message_memory);
  typed_message->~CurrentCartesian();
}

size_t size_function__CurrentCartesian__position(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__CurrentCartesian__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__CurrentCartesian__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__CurrentCartesian__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__CurrentCartesian__position(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__CurrentCartesian__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__CurrentCartesian__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__CurrentCartesian__rotation(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__CurrentCartesian__rotation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__CurrentCartesian__rotation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__CurrentCartesian__rotation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__CurrentCartesian__rotation(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__CurrentCartesian__rotation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__CurrentCartesian__rotation(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CurrentCartesian_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::CurrentCartesian, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::CurrentCartesian, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__CurrentCartesian__position,  // size() function pointer
    get_const_function__CurrentCartesian__position,  // get_const(index) function pointer
    get_function__CurrentCartesian__position,  // get(index) function pointer
    fetch_function__CurrentCartesian__position,  // fetch(index, &value) function pointer
    assign_function__CurrentCartesian__position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rotation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::CurrentCartesian, rotation),  // bytes offset in struct
    nullptr,  // default value
    size_function__CurrentCartesian__rotation,  // size() function pointer
    get_const_function__CurrentCartesian__rotation,  // get_const(index) function pointer
    get_function__CurrentCartesian__rotation,  // get(index) function pointer
    fetch_function__CurrentCartesian__rotation,  // fetch(index, &value) function pointer
    assign_function__CurrentCartesian__rotation,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CurrentCartesian_message_members = {
  "v2_robot_arm_interfaces::msg",  // message namespace
  "CurrentCartesian",  // message name
  3,  // number of fields
  sizeof(v2_robot_arm_interfaces::msg::CurrentCartesian),
  false,  // has_any_key_member_
  CurrentCartesian_message_member_array,  // message members
  CurrentCartesian_init_function,  // function to initialize message memory (memory has to be allocated)
  CurrentCartesian_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CurrentCartesian_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CurrentCartesian_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__msg__CurrentCartesian__get_type_hash,
  &v2_robot_arm_interfaces__msg__CurrentCartesian__get_type_description,
  &v2_robot_arm_interfaces__msg__CurrentCartesian__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace v2_robot_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::msg::CurrentCartesian>()
{
  return &::v2_robot_arm_interfaces::msg::rosidl_typesupport_introspection_cpp::CurrentCartesian_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, msg, CurrentCartesian)() {
  return &::v2_robot_arm_interfaces::msg::rosidl_typesupport_introspection_cpp::CurrentCartesian_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
