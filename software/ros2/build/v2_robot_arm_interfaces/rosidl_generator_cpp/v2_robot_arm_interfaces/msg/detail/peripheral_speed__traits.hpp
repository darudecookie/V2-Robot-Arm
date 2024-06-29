// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2_robot_arm_interfaces:msg/PeripheralSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/peripheral_speed.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__PERIPHERAL_SPEED__TRAITS_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__PERIPHERAL_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2_robot_arm_interfaces/msg/detail/peripheral_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2_robot_arm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PeripheralSpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: translation_speed
  {
    out << "translation_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.translation_speed, out);
    out << ", ";
  }

  // member: rotation_speed
  {
    out << "rotation_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PeripheralSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: translation_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translation_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.translation_speed, out);
    out << "\n";
  }

  // member: rotation_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PeripheralSpeed & msg, bool use_flow_style = false)
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
  const v2_robot_arm_interfaces::msg::PeripheralSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::msg::PeripheralSpeed & msg)
{
  return v2_robot_arm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::msg::PeripheralSpeed>()
{
  return "v2_robot_arm_interfaces::msg::PeripheralSpeed";
}

template<>
inline const char * name<v2_robot_arm_interfaces::msg::PeripheralSpeed>()
{
  return "v2_robot_arm_interfaces/msg/PeripheralSpeed";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::msg::PeripheralSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::msg::PeripheralSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2_robot_arm_interfaces::msg::PeripheralSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__PERIPHERAL_SPEED__TRAITS_HPP_
