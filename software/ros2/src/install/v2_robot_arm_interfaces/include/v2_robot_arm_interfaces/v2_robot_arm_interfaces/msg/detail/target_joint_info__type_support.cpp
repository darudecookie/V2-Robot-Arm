// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2_robot_arm_interfaces:msg/TargetJointInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2_robot_arm_interfaces/msg/detail/target_joint_info__functions.h"
#include "v2_robot_arm_interfaces/msg/detail/target_joint_info__struct.hpp"
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

void TargetJointInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2_robot_arm_interfaces::msg::TargetJointInfo(_init);
}

void TargetJointInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2_robot_arm_interfaces::msg::TargetJointInfo *>(message_memory);
  typed_message->~TargetJointInfo();
}

size_t size_function__TargetJointInfo__target_joint_positions(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__TargetJointInfo__target_joint_positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__TargetJointInfo__target_joint_positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__TargetJointInfo__target_joint_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TargetJointInfo__target_joint_positions(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TargetJointInfo__target_joint_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TargetJointInfo__target_joint_positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__TargetJointInfo__target_joint_velocities(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__TargetJointInfo__target_joint_velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__TargetJointInfo__target_joint_velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__TargetJointInfo__target_joint_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TargetJointInfo__target_joint_velocities(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TargetJointInfo__target_joint_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TargetJointInfo__target_joint_velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__TargetJointInfo__target_joint_torques(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__TargetJointInfo__target_joint_torques(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__TargetJointInfo__target_joint_torques(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__TargetJointInfo__target_joint_torques(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TargetJointInfo__target_joint_torques(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TargetJointInfo__target_joint_torques(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TargetJointInfo__target_joint_torques(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TargetJointInfo_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::TargetJointInfo, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "param_to_control",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::TargetJointInfo, param_to_control),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_joint_positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::TargetJointInfo, target_joint_positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__TargetJointInfo__target_joint_positions,  // size() function pointer
    get_const_function__TargetJointInfo__target_joint_positions,  // get_const(index) function pointer
    get_function__TargetJointInfo__target_joint_positions,  // get(index) function pointer
    fetch_function__TargetJointInfo__target_joint_positions,  // fetch(index, &value) function pointer
    assign_function__TargetJointInfo__target_joint_positions,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_joint_velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::TargetJointInfo, target_joint_velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__TargetJointInfo__target_joint_velocities,  // size() function pointer
    get_const_function__TargetJointInfo__target_joint_velocities,  // get_const(index) function pointer
    get_function__TargetJointInfo__target_joint_velocities,  // get(index) function pointer
    fetch_function__TargetJointInfo__target_joint_velocities,  // fetch(index, &value) function pointer
    assign_function__TargetJointInfo__target_joint_velocities,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_joint_torques",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::msg::TargetJointInfo, target_joint_torques),  // bytes offset in struct
    nullptr,  // default value
    size_function__TargetJointInfo__target_joint_torques,  // size() function pointer
    get_const_function__TargetJointInfo__target_joint_torques,  // get_const(index) function pointer
    get_function__TargetJointInfo__target_joint_torques,  // get(index) function pointer
    fetch_function__TargetJointInfo__target_joint_torques,  // fetch(index, &value) function pointer
    assign_function__TargetJointInfo__target_joint_torques,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TargetJointInfo_message_members = {
  "v2_robot_arm_interfaces::msg",  // message namespace
  "TargetJointInfo",  // message name
  5,  // number of fields
  sizeof(v2_robot_arm_interfaces::msg::TargetJointInfo),
  false,  // has_any_key_member_
  TargetJointInfo_message_member_array,  // message members
  TargetJointInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  TargetJointInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TargetJointInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TargetJointInfo_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__msg__TargetJointInfo__get_type_hash,
  &v2_robot_arm_interfaces__msg__TargetJointInfo__get_type_description,
  &v2_robot_arm_interfaces__msg__TargetJointInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace v2_robot_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::msg::TargetJointInfo>()
{
  return &::v2_robot_arm_interfaces::msg::rosidl_typesupport_introspection_cpp::TargetJointInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, msg, TargetJointInfo)() {
  return &::v2_robot_arm_interfaces::msg::rosidl_typesupport_introspection_cpp::TargetJointInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif