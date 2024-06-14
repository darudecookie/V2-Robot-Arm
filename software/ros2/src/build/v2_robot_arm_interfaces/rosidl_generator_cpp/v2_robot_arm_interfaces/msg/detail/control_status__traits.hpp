// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2_robot_arm_interfaces:msg/ControlStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/control_status.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CONTROL_STATUS__TRAITS_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CONTROL_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2_robot_arm_interfaces/msg/detail/control_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2_robot_arm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: trajectory_controller
  {
    out << "trajectory_controller: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_controller, out);
    out << ", ";
  }

  // member: ik_solver
  {
    out << "ik_solver: ";
    rosidl_generator_traits::value_to_yaml(msg.ik_solver, out);
    out << ", ";
  }

  // member: peripheral_interface
  {
    out << "peripheral_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.peripheral_interface, out);
    out << ", ";
  }

  // member: master_controller
  {
    out << "master_controller: ";
    rosidl_generator_traits::value_to_yaml(msg.master_controller, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectory_controller
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_controller: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_controller, out);
    out << "\n";
  }

  // member: ik_solver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ik_solver: ";
    rosidl_generator_traits::value_to_yaml(msg.ik_solver, out);
    out << "\n";
  }

  // member: peripheral_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "peripheral_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.peripheral_interface, out);
    out << "\n";
  }

  // member: master_controller
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "master_controller: ";
    rosidl_generator_traits::value_to_yaml(msg.master_controller, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace v2_robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use v2_robot_arm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2_robot_arm_interfaces::msg::ControlStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::msg::ControlStatus & msg)
{
  return v2_robot_arm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::msg::ControlStatus>()
{
  return "v2_robot_arm_interfaces::msg::ControlStatus";
}

template<>
inline const char * name<v2_robot_arm_interfaces::msg::ControlStatus>()
{
  return "v2_robot_arm_interfaces/msg/ControlStatus";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::msg::ControlStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::msg::ControlStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2_robot_arm_interfaces::msg::ControlStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CONTROL_STATUS__TRAITS_HPP_
