// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2_robot_arm_interfaces:msg/CurrentJointInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/current_joint_info.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CURRENT_JOINT_INFO__TRAITS_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CURRENT_JOINT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2_robot_arm_interfaces/msg/detail/current_joint_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace v2_robot_arm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CurrentJointInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: current_joint_positions
  {
    if (msg.current_joint_positions.size() == 0) {
      out << "current_joint_positions: []";
    } else {
      out << "current_joint_positions: [";
      size_t pending_items = msg.current_joint_positions.size();
      for (auto item : msg.current_joint_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_joint_velocity
  {
    if (msg.current_joint_velocity.size() == 0) {
      out << "current_joint_velocity: []";
    } else {
      out << "current_joint_velocity: [";
      size_t pending_items = msg.current_joint_velocity.size();
      for (auto item : msg.current_joint_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_joint_acceleration
  {
    if (msg.current_joint_acceleration.size() == 0) {
      out << "current_joint_acceleration: []";
    } else {
      out << "current_joint_acceleration: [";
      size_t pending_items = msg.current_joint_acceleration.size();
      for (auto item : msg.current_joint_acceleration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_joint_jerks
  {
    if (msg.current_joint_jerks.size() == 0) {
      out << "current_joint_jerks: []";
    } else {
      out << "current_joint_jerks: [";
      size_t pending_items = msg.current_joint_jerks.size();
      for (auto item : msg.current_joint_jerks) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_joint_torques
  {
    if (msg.current_joint_torques.size() == 0) {
      out << "current_joint_torques: []";
    } else {
      out << "current_joint_torques: [";
      size_t pending_items = msg.current_joint_torques.size();
      for (auto item : msg.current_joint_torques) {
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
  const CurrentJointInfo & msg,
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

  // member: current_joint_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_joint_positions.size() == 0) {
      out << "current_joint_positions: []\n";
    } else {
      out << "current_joint_positions:\n";
      for (auto item : msg.current_joint_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_joint_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_joint_velocity.size() == 0) {
      out << "current_joint_velocity: []\n";
    } else {
      out << "current_joint_velocity:\n";
      for (auto item : msg.current_joint_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_joint_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_joint_acceleration.size() == 0) {
      out << "current_joint_acceleration: []\n";
    } else {
      out << "current_joint_acceleration:\n";
      for (auto item : msg.current_joint_acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_joint_jerks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_joint_jerks.size() == 0) {
      out << "current_joint_jerks: []\n";
    } else {
      out << "current_joint_jerks:\n";
      for (auto item : msg.current_joint_jerks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_joint_torques
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_joint_torques.size() == 0) {
      out << "current_joint_torques: []\n";
    } else {
      out << "current_joint_torques:\n";
      for (auto item : msg.current_joint_torques) {
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

inline std::string to_yaml(const CurrentJointInfo & msg, bool use_flow_style = false)
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
  const v2_robot_arm_interfaces::msg::CurrentJointInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::msg::CurrentJointInfo & msg)
{
  return v2_robot_arm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::msg::CurrentJointInfo>()
{
  return "v2_robot_arm_interfaces::msg::CurrentJointInfo";
}

template<>
inline const char * name<v2_robot_arm_interfaces::msg::CurrentJointInfo>()
{
  return "v2_robot_arm_interfaces/msg/CurrentJointInfo";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::msg::CurrentJointInfo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::msg::CurrentJointInfo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<v2_robot_arm_interfaces::msg::CurrentJointInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CURRENT_JOINT_INFO__TRAITS_HPP_
