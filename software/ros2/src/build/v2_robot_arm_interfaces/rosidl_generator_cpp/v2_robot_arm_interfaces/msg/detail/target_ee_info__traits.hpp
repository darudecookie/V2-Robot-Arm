// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2_robot_arm_interfaces:msg/TargetEEInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/target_ee_info.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_EE_INFO__TRAITS_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_EE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2_robot_arm_interfaces/msg/detail/target_ee_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace v2_robot_arm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetEEInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: current_end_effector_value
  {
    out << "current_end_effector_value: ";
    rosidl_generator_traits::value_to_yaml(msg.current_end_effector_value, out);
    out << ", ";
  }

  // member: current_end_effector_bool
  {
    out << "current_end_effector_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.current_end_effector_bool, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetEEInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: current_end_effector_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_end_effector_value: ";
    rosidl_generator_traits::value_to_yaml(msg.current_end_effector_value, out);
    out << "\n";
  }

  // member: current_end_effector_bool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_end_effector_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.current_end_effector_bool, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetEEInfo & msg, bool use_flow_style = false)
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
  const v2_robot_arm_interfaces::msg::TargetEEInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::msg::TargetEEInfo & msg)
{
  return v2_robot_arm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::msg::TargetEEInfo>()
{
  return "v2_robot_arm_interfaces::msg::TargetEEInfo";
}

template<>
inline const char * name<v2_robot_arm_interfaces::msg::TargetEEInfo>()
{
  return "v2_robot_arm_interfaces/msg/TargetEEInfo";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::msg::TargetEEInfo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::msg::TargetEEInfo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<v2_robot_arm_interfaces::msg::TargetEEInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_EE_INFO__TRAITS_HPP_
