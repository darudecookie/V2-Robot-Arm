// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2_robot_arm_interfaces:msg/SystemDiagnosticInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/system_diagnostic_info.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__SYSTEM_DIAGNOSTIC_INFO__TRAITS_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__SYSTEM_DIAGNOSTIC_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2_robot_arm_interfaces/msg/detail/system_diagnostic_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2_robot_arm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemDiagnosticInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: estop
  {
    out << "estop: ";
    rosidl_generator_traits::value_to_yaml(msg.estop, out);
    out << ", ";
  }

  // member: jointhold
  {
    out << "jointhold: ";
    rosidl_generator_traits::value_to_yaml(msg.jointhold, out);
    out << ", ";
  }

  // member: temperatures
  {
    if (msg.temperatures.size() == 0) {
      out << "temperatures: []";
    } else {
      out << "temperatures: [";
      size_t pending_items = msg.temperatures.size();
      for (auto item : msg.temperatures) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemDiagnosticInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: estop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop: ";
    rosidl_generator_traits::value_to_yaml(msg.estop, out);
    out << "\n";
  }

  // member: jointhold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jointhold: ";
    rosidl_generator_traits::value_to_yaml(msg.jointhold, out);
    out << "\n";
  }

  // member: temperatures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperatures.size() == 0) {
      out << "temperatures: []\n";
    } else {
      out << "temperatures:\n";
      for (auto item : msg.temperatures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemDiagnosticInfo & msg, bool use_flow_style = false)
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
  const v2_robot_arm_interfaces::msg::SystemDiagnosticInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::msg::SystemDiagnosticInfo & msg)
{
  return v2_robot_arm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo>()
{
  return "v2_robot_arm_interfaces::msg::SystemDiagnosticInfo";
}

template<>
inline const char * name<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo>()
{
  return "v2_robot_arm_interfaces/msg/SystemDiagnosticInfo";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__SYSTEM_DIAGNOSTIC_INFO__TRAITS_HPP_
