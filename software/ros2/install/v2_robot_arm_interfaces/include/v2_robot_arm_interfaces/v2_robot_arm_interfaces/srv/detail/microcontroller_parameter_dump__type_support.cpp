// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2_robot_arm_interfaces:srv/MicrocontrollerParameterDump.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__functions.h"
#include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void MicrocontrollerParameterDump_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request(_init);
}

void MicrocontrollerParameterDump_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request *>(message_memory);
  typed_message->~MicrocontrollerParameterDump_Request();
}

size_t size_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MicrocontrollerParameterDump_Request__pid_update_params(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MicrocontrollerParameterDump_Request__pid_update_params(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MicrocontrollerParameterDump_Request__pid_update_params(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MicrocontrollerParameterDump_Request__pid_update_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MicrocontrollerParameterDump_Request__pid_update_params(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MicrocontrollerParameterDump_Request__pid_update_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MicrocontrollerParameterDump_Request__pid_update_params(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MicrocontrollerParameterDump_Request__joint_home_positions(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__MicrocontrollerParameterDump_Request__joint_home_positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__MicrocontrollerParameterDump_Request__joint_home_positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__MicrocontrollerParameterDump_Request__joint_home_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MicrocontrollerParameterDump_Request__joint_home_positions(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MicrocontrollerParameterDump_Request__joint_home_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MicrocontrollerParameterDump_Request__joint_home_positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MicrocontrollerParameterDump_Request_message_member_array[16] = {
  {
    "joint_position_limit_update_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, joint_position_limit_update_target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_position_limit_update_params",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, joint_position_limit_update_params),  // bytes offset in struct
    nullptr,  // default value
    size_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params,  // size() function pointer
    get_const_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params,  // get_const(index) function pointer
    get_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params,  // get(index) function pointer
    fetch_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params,  // fetch(index, &value) function pointer
    assign_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_velocity_limit_update_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, joint_velocity_limit_update_target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_velocity_limit_update_params",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, joint_velocity_limit_update_params),  // bytes offset in struct
    nullptr,  // default value
    size_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params,  // size() function pointer
    get_const_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params,  // get_const(index) function pointer
    get_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params,  // get(index) function pointer
    fetch_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params,  // fetch(index, &value) function pointer
    assign_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_torque_limit_update_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, joint_torque_limit_update_target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_torque_limit_update_params",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, joint_torque_limit_update_params),  // bytes offset in struct
    nullptr,  // default value
    size_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params,  // size() function pointer
    get_const_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params,  // get_const(index) function pointer
    get_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params,  // get(index) function pointer
    fetch_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params,  // fetch(index, &value) function pointer
    assign_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_acceleration_limit_update_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, joint_acceleration_limit_update_target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_acceleration_limit_update_params",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, joint_acceleration_limit_update_params),  // bytes offset in struct
    nullptr,  // default value
    size_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params,  // size() function pointer
    get_const_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params,  // get_const(index) function pointer
    get_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params,  // get(index) function pointer
    fetch_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params,  // fetch(index, &value) function pointer
    assign_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_jerk_limit_update_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, joint_jerk_limit_update_target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_jerk_limit_update_params",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, joint_jerk_limit_update_params),  // bytes offset in struct
    nullptr,  // default value
    size_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params,  // size() function pointer
    get_const_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params,  // get_const(index) function pointer
    get_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params,  // get(index) function pointer
    fetch_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params,  // fetch(index, &value) function pointer
    assign_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x_workspace_bounds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, x_workspace_bounds),  // bytes offset in struct
    nullptr,  // default value
    size_function__MicrocontrollerParameterDump_Request__x_workspace_bounds,  // size() function pointer
    get_const_function__MicrocontrollerParameterDump_Request__x_workspace_bounds,  // get_const(index) function pointer
    get_function__MicrocontrollerParameterDump_Request__x_workspace_bounds,  // get(index) function pointer
    fetch_function__MicrocontrollerParameterDump_Request__x_workspace_bounds,  // fetch(index, &value) function pointer
    assign_function__MicrocontrollerParameterDump_Request__x_workspace_bounds,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y_workspace_bounds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, y_workspace_bounds),  // bytes offset in struct
    nullptr,  // default value
    size_function__MicrocontrollerParameterDump_Request__y_workspace_bounds,  // size() function pointer
    get_const_function__MicrocontrollerParameterDump_Request__y_workspace_bounds,  // get_const(index) function pointer
    get_function__MicrocontrollerParameterDump_Request__y_workspace_bounds,  // get(index) function pointer
    fetch_function__MicrocontrollerParameterDump_Request__y_workspace_bounds,  // fetch(index, &value) function pointer
    assign_function__MicrocontrollerParameterDump_Request__y_workspace_bounds,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z_workspace_bounds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, z_workspace_bounds),  // bytes offset in struct
    nullptr,  // default value
    size_function__MicrocontrollerParameterDump_Request__z_workspace_bounds,  // size() function pointer
    get_const_function__MicrocontrollerParameterDump_Request__z_workspace_bounds,  // get_const(index) function pointer
    get_function__MicrocontrollerParameterDump_Request__z_workspace_bounds,  // get(index) function pointer
    fetch_function__MicrocontrollerParameterDump_Request__z_workspace_bounds,  // fetch(index, &value) function pointer
    assign_function__MicrocontrollerParameterDump_Request__z_workspace_bounds,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pid_update_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, pid_update_target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pid_update_params",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, pid_update_params),  // bytes offset in struct
    nullptr,  // default value
    size_function__MicrocontrollerParameterDump_Request__pid_update_params,  // size() function pointer
    get_const_function__MicrocontrollerParameterDump_Request__pid_update_params,  // get_const(index) function pointer
    get_function__MicrocontrollerParameterDump_Request__pid_update_params,  // get(index) function pointer
    fetch_function__MicrocontrollerParameterDump_Request__pid_update_params,  // fetch(index, &value) function pointer
    assign_function__MicrocontrollerParameterDump_Request__pid_update_params,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_home_positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request, joint_home_positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__MicrocontrollerParameterDump_Request__joint_home_positions,  // size() function pointer
    get_const_function__MicrocontrollerParameterDump_Request__joint_home_positions,  // get_const(index) function pointer
    get_function__MicrocontrollerParameterDump_Request__joint_home_positions,  // get(index) function pointer
    fetch_function__MicrocontrollerParameterDump_Request__joint_home_positions,  // fetch(index, &value) function pointer
    assign_function__MicrocontrollerParameterDump_Request__joint_home_positions,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MicrocontrollerParameterDump_Request_message_members = {
  "v2_robot_arm_interfaces::srv",  // message namespace
  "MicrocontrollerParameterDump_Request",  // message name
  16,  // number of fields
  sizeof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request),
  false,  // has_any_key_member_
  MicrocontrollerParameterDump_Request_message_member_array,  // message members
  MicrocontrollerParameterDump_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MicrocontrollerParameterDump_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MicrocontrollerParameterDump_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MicrocontrollerParameterDump_Request_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_hash,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_description,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace v2_robot_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>()
{
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_introspection_cpp::MicrocontrollerParameterDump_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Request)() {
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_introspection_cpp::MicrocontrollerParameterDump_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void MicrocontrollerParameterDump_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response(_init);
}

void MicrocontrollerParameterDump_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response *>(message_memory);
  typed_message->~MicrocontrollerParameterDump_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MicrocontrollerParameterDump_Response_message_member_array[1] = {
  {
    "returnsuccess",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response, returnsuccess),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MicrocontrollerParameterDump_Response_message_members = {
  "v2_robot_arm_interfaces::srv",  // message namespace
  "MicrocontrollerParameterDump_Response",  // message name
  1,  // number of fields
  sizeof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response),
  false,  // has_any_key_member_
  MicrocontrollerParameterDump_Response_message_member_array,  // message members
  MicrocontrollerParameterDump_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MicrocontrollerParameterDump_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MicrocontrollerParameterDump_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MicrocontrollerParameterDump_Response_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_hash,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_description,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace v2_robot_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>()
{
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_introspection_cpp::MicrocontrollerParameterDump_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Response)() {
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_introspection_cpp::MicrocontrollerParameterDump_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void MicrocontrollerParameterDump_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event(_init);
}

void MicrocontrollerParameterDump_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event *>(message_memory);
  typed_message->~MicrocontrollerParameterDump_Event();
}

size_t size_function__MicrocontrollerParameterDump_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MicrocontrollerParameterDump_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__MicrocontrollerParameterDump_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__MicrocontrollerParameterDump_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request *>(
    get_const_function__MicrocontrollerParameterDump_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request *>(untyped_value);
  value = item;
}

void assign_function__MicrocontrollerParameterDump_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request *>(
    get_function__MicrocontrollerParameterDump_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request *>(untyped_value);
  item = value;
}

void resize_function__MicrocontrollerParameterDump_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MicrocontrollerParameterDump_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MicrocontrollerParameterDump_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__MicrocontrollerParameterDump_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__MicrocontrollerParameterDump_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response *>(
    get_const_function__MicrocontrollerParameterDump_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response *>(untyped_value);
  value = item;
}

void assign_function__MicrocontrollerParameterDump_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response *>(
    get_function__MicrocontrollerParameterDump_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response *>(untyped_value);
  item = value;
}

void resize_function__MicrocontrollerParameterDump_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MicrocontrollerParameterDump_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__MicrocontrollerParameterDump_Event__request,  // size() function pointer
    get_const_function__MicrocontrollerParameterDump_Event__request,  // get_const(index) function pointer
    get_function__MicrocontrollerParameterDump_Event__request,  // get(index) function pointer
    fetch_function__MicrocontrollerParameterDump_Event__request,  // fetch(index, &value) function pointer
    assign_function__MicrocontrollerParameterDump_Event__request,  // assign(index, value) function pointer
    resize_function__MicrocontrollerParameterDump_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__MicrocontrollerParameterDump_Event__response,  // size() function pointer
    get_const_function__MicrocontrollerParameterDump_Event__response,  // get_const(index) function pointer
    get_function__MicrocontrollerParameterDump_Event__response,  // get(index) function pointer
    fetch_function__MicrocontrollerParameterDump_Event__response,  // fetch(index, &value) function pointer
    assign_function__MicrocontrollerParameterDump_Event__response,  // assign(index, value) function pointer
    resize_function__MicrocontrollerParameterDump_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MicrocontrollerParameterDump_Event_message_members = {
  "v2_robot_arm_interfaces::srv",  // message namespace
  "MicrocontrollerParameterDump_Event",  // message name
  3,  // number of fields
  sizeof(v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event),
  false,  // has_any_key_member_
  MicrocontrollerParameterDump_Event_message_member_array,  // message members
  MicrocontrollerParameterDump_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  MicrocontrollerParameterDump_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MicrocontrollerParameterDump_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MicrocontrollerParameterDump_Event_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_type_hash,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_type_description,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace v2_robot_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event>()
{
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_introspection_cpp::MicrocontrollerParameterDump_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Event)() {
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_introspection_cpp::MicrocontrollerParameterDump_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers MicrocontrollerParameterDump_service_members = {
  "v2_robot_arm_interfaces::srv",  // service namespace
  "MicrocontrollerParameterDump",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t MicrocontrollerParameterDump_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MicrocontrollerParameterDump_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump>,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_type_hash,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_type_description,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace v2_robot_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::v2_robot_arm_interfaces::srv::rosidl_typesupport_introspection_cpp::MicrocontrollerParameterDump_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump>();
}

#ifdef __cplusplus
}
#endif
