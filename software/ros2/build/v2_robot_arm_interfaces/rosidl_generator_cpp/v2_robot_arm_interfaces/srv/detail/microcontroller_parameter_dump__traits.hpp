// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2_robot_arm_interfaces:srv/MicrocontrollerParameterDump.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/microcontroller_parameter_dump.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__TRAITS_HPP_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2_robot_arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MicrocontrollerParameterDump_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_position_limit_update_target
  {
    out << "joint_position_limit_update_target: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_position_limit_update_target, out);
    out << ", ";
  }

  // member: joint_position_limit_update_params
  {
    if (msg.joint_position_limit_update_params.size() == 0) {
      out << "joint_position_limit_update_params: []";
    } else {
      out << "joint_position_limit_update_params: [";
      size_t pending_items = msg.joint_position_limit_update_params.size();
      for (auto item : msg.joint_position_limit_update_params) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_velocity_limit_update_target
  {
    out << "joint_velocity_limit_update_target: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_velocity_limit_update_target, out);
    out << ", ";
  }

  // member: joint_velocity_limit_update_params
  {
    if (msg.joint_velocity_limit_update_params.size() == 0) {
      out << "joint_velocity_limit_update_params: []";
    } else {
      out << "joint_velocity_limit_update_params: [";
      size_t pending_items = msg.joint_velocity_limit_update_params.size();
      for (auto item : msg.joint_velocity_limit_update_params) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_torque_limit_update_target
  {
    out << "joint_torque_limit_update_target: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_torque_limit_update_target, out);
    out << ", ";
  }

  // member: joint_torque_limit_update_params
  {
    if (msg.joint_torque_limit_update_params.size() == 0) {
      out << "joint_torque_limit_update_params: []";
    } else {
      out << "joint_torque_limit_update_params: [";
      size_t pending_items = msg.joint_torque_limit_update_params.size();
      for (auto item : msg.joint_torque_limit_update_params) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_acceleration_limit_update_target
  {
    out << "joint_acceleration_limit_update_target: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_acceleration_limit_update_target, out);
    out << ", ";
  }

  // member: joint_acceleration_limit_update_params
  {
    if (msg.joint_acceleration_limit_update_params.size() == 0) {
      out << "joint_acceleration_limit_update_params: []";
    } else {
      out << "joint_acceleration_limit_update_params: [";
      size_t pending_items = msg.joint_acceleration_limit_update_params.size();
      for (auto item : msg.joint_acceleration_limit_update_params) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_jerk_limit_update_target
  {
    out << "joint_jerk_limit_update_target: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_jerk_limit_update_target, out);
    out << ", ";
  }

  // member: joint_jerk_limit_update_params
  {
    if (msg.joint_jerk_limit_update_params.size() == 0) {
      out << "joint_jerk_limit_update_params: []";
    } else {
      out << "joint_jerk_limit_update_params: [";
      size_t pending_items = msg.joint_jerk_limit_update_params.size();
      for (auto item : msg.joint_jerk_limit_update_params) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x_workspace_bounds
  {
    if (msg.x_workspace_bounds.size() == 0) {
      out << "x_workspace_bounds: []";
    } else {
      out << "x_workspace_bounds: [";
      size_t pending_items = msg.x_workspace_bounds.size();
      for (auto item : msg.x_workspace_bounds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y_workspace_bounds
  {
    if (msg.y_workspace_bounds.size() == 0) {
      out << "y_workspace_bounds: []";
    } else {
      out << "y_workspace_bounds: [";
      size_t pending_items = msg.y_workspace_bounds.size();
      for (auto item : msg.y_workspace_bounds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: z_workspace_bounds
  {
    if (msg.z_workspace_bounds.size() == 0) {
      out << "z_workspace_bounds: []";
    } else {
      out << "z_workspace_bounds: [";
      size_t pending_items = msg.z_workspace_bounds.size();
      for (auto item : msg.z_workspace_bounds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pid_update_target
  {
    out << "pid_update_target: ";
    rosidl_generator_traits::value_to_yaml(msg.pid_update_target, out);
    out << ", ";
  }

  // member: pid_update_params
  {
    if (msg.pid_update_params.size() == 0) {
      out << "pid_update_params: []";
    } else {
      out << "pid_update_params: [";
      size_t pending_items = msg.pid_update_params.size();
      for (auto item : msg.pid_update_params) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_home_positions
  {
    if (msg.joint_home_positions.size() == 0) {
      out << "joint_home_positions: []";
    } else {
      out << "joint_home_positions: [";
      size_t pending_items = msg.joint_home_positions.size();
      for (auto item : msg.joint_home_positions) {
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
  const MicrocontrollerParameterDump_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_position_limit_update_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_position_limit_update_target: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_position_limit_update_target, out);
    out << "\n";
  }

  // member: joint_position_limit_update_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_position_limit_update_params.size() == 0) {
      out << "joint_position_limit_update_params: []\n";
    } else {
      out << "joint_position_limit_update_params:\n";
      for (auto item : msg.joint_position_limit_update_params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_velocity_limit_update_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_velocity_limit_update_target: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_velocity_limit_update_target, out);
    out << "\n";
  }

  // member: joint_velocity_limit_update_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_velocity_limit_update_params.size() == 0) {
      out << "joint_velocity_limit_update_params: []\n";
    } else {
      out << "joint_velocity_limit_update_params:\n";
      for (auto item : msg.joint_velocity_limit_update_params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_torque_limit_update_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_torque_limit_update_target: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_torque_limit_update_target, out);
    out << "\n";
  }

  // member: joint_torque_limit_update_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_torque_limit_update_params.size() == 0) {
      out << "joint_torque_limit_update_params: []\n";
    } else {
      out << "joint_torque_limit_update_params:\n";
      for (auto item : msg.joint_torque_limit_update_params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_acceleration_limit_update_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_acceleration_limit_update_target: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_acceleration_limit_update_target, out);
    out << "\n";
  }

  // member: joint_acceleration_limit_update_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_acceleration_limit_update_params.size() == 0) {
      out << "joint_acceleration_limit_update_params: []\n";
    } else {
      out << "joint_acceleration_limit_update_params:\n";
      for (auto item : msg.joint_acceleration_limit_update_params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_jerk_limit_update_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_jerk_limit_update_target: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_jerk_limit_update_target, out);
    out << "\n";
  }

  // member: joint_jerk_limit_update_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_jerk_limit_update_params.size() == 0) {
      out << "joint_jerk_limit_update_params: []\n";
    } else {
      out << "joint_jerk_limit_update_params:\n";
      for (auto item : msg.joint_jerk_limit_update_params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: x_workspace_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x_workspace_bounds.size() == 0) {
      out << "x_workspace_bounds: []\n";
    } else {
      out << "x_workspace_bounds:\n";
      for (auto item : msg.x_workspace_bounds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y_workspace_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y_workspace_bounds.size() == 0) {
      out << "y_workspace_bounds: []\n";
    } else {
      out << "y_workspace_bounds:\n";
      for (auto item : msg.y_workspace_bounds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: z_workspace_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.z_workspace_bounds.size() == 0) {
      out << "z_workspace_bounds: []\n";
    } else {
      out << "z_workspace_bounds:\n";
      for (auto item : msg.z_workspace_bounds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pid_update_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_update_target: ";
    rosidl_generator_traits::value_to_yaml(msg.pid_update_target, out);
    out << "\n";
  }

  // member: pid_update_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pid_update_params.size() == 0) {
      out << "pid_update_params: []\n";
    } else {
      out << "pid_update_params:\n";
      for (auto item : msg.pid_update_params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_home_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_home_positions.size() == 0) {
      out << "joint_home_positions: []\n";
    } else {
      out << "joint_home_positions:\n";
      for (auto item : msg.joint_home_positions) {
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

inline std::string to_yaml(const MicrocontrollerParameterDump_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use v2_robot_arm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
{
  return v2_robot_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>()
{
  return "v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request";
}

template<>
inline const char * name<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>()
{
  return "v2_robot_arm_interfaces/srv/MicrocontrollerParameterDump_Request";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace v2_robot_arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MicrocontrollerParameterDump_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: returnsuccess
  {
    out << "returnsuccess: ";
    rosidl_generator_traits::value_to_yaml(msg.returnsuccess, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MicrocontrollerParameterDump_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: returnsuccess
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "returnsuccess: ";
    rosidl_generator_traits::value_to_yaml(msg.returnsuccess, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MicrocontrollerParameterDump_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use v2_robot_arm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response & msg)
{
  return v2_robot_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>()
{
  return "v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response";
}

template<>
inline const char * name<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>()
{
  return "v2_robot_arm_interfaces/srv/MicrocontrollerParameterDump_Response";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace v2_robot_arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MicrocontrollerParameterDump_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const MicrocontrollerParameterDump_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MicrocontrollerParameterDump_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use v2_robot_arm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event & msg)
{
  return v2_robot_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event>()
{
  return "v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event";
}

template<>
inline const char * name<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event>()
{
  return "v2_robot_arm_interfaces/srv/MicrocontrollerParameterDump_Event";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>::value && has_bounded_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>::value> {};

template<>
struct is_message<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump>()
{
  return "v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump";
}

template<>
inline const char * name<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump>()
{
  return "v2_robot_arm_interfaces/srv/MicrocontrollerParameterDump";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump>
  : std::integral_constant<
    bool,
    has_fixed_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>::value &&
    has_fixed_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>::value
  >
{
};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump>
  : std::integral_constant<
    bool,
    has_bounded_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>::value &&
    has_bounded_size<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>::value
  >
{
};

template<>
struct is_service<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump>
  : std::true_type
{
};

template<>
struct is_service_request<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>
  : std::true_type
{
};

template<>
struct is_service_response<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__TRAITS_HPP_
