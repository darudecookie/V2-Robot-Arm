// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2_robot_arm_interfaces:msg/TargetCartesian.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/target_cartesian.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_CARTESIAN__TRAITS_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_CARTESIAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2_robot_arm_interfaces/msg/detail/target_cartesian__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace v2_robot_arm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetCartesian & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rotation
  {
    if (msg.rotation.size() == 0) {
      out << "rotation: []";
    } else {
      out << "rotation: [";
      size_t pending_items = msg.rotation.size();
      for (auto item : msg.rotation) {
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
  const TargetCartesian & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rotation.size() == 0) {
      out << "rotation: []\n";
    } else {
      out << "rotation:\n";
      for (auto item : msg.rotation) {
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

inline std::string to_yaml(const TargetCartesian & msg, bool use_flow_style = false)
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
  const v2_robot_arm_interfaces::msg::TargetCartesian & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::msg::TargetCartesian & msg)
{
  return v2_robot_arm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::msg::TargetCartesian>()
{
  return "v2_robot_arm_interfaces::msg::TargetCartesian";
}

template<>
inline const char * name<v2_robot_arm_interfaces::msg::TargetCartesian>()
{
  return "v2_robot_arm_interfaces/msg/TargetCartesian";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::msg::TargetCartesian>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::msg::TargetCartesian>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<v2_robot_arm_interfaces::msg::TargetCartesian>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_CARTESIAN__TRAITS_HPP_
