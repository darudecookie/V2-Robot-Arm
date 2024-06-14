// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2_robot_arm_interfaces:srv/TargetEEState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/target_ee_state.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__TARGET_EE_STATE__TRAITS_HPP_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__TARGET_EE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2_robot_arm_interfaces/srv/detail/target_ee_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2_robot_arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TargetEEState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_end_effector_value
  {
    out << "target_end_effector_value: ";
    rosidl_generator_traits::value_to_yaml(msg.target_end_effector_value, out);
    out << ", ";
  }

  // member: target_end_effector_bool
  {
    out << "target_end_effector_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.target_end_effector_bool, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetEEState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_end_effector_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_end_effector_value: ";
    rosidl_generator_traits::value_to_yaml(msg.target_end_effector_value, out);
    out << "\n";
  }

  // member: target_end_effector_bool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_end_effector_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.target_end_effector_bool, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetEEState_Request & msg, bool use_flow_style = false)
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
  const v2_robot_arm_interfaces::srv::TargetEEState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::srv::TargetEEState_Request & msg)
{
  return v2_robot_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::srv::TargetEEState_Request>()
{
  return "v2_robot_arm_interfaces::srv::TargetEEState_Request";
}

template<>
inline const char * name<v2_robot_arm_interfaces::srv::TargetEEState_Request>()
{
  return "v2_robot_arm_interfaces/srv/TargetEEState_Request";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::srv::TargetEEState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::srv::TargetEEState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2_robot_arm_interfaces::srv::TargetEEState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace v2_robot_arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TargetEEState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_end_effector_value
  {
    out << "current_end_effector_value: ";
    rosidl_generator_traits::value_to_yaml(msg.current_end_effector_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetEEState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_end_effector_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_end_effector_value: ";
    rosidl_generator_traits::value_to_yaml(msg.current_end_effector_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetEEState_Response & msg, bool use_flow_style = false)
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
  const v2_robot_arm_interfaces::srv::TargetEEState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::srv::TargetEEState_Response & msg)
{
  return v2_robot_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::srv::TargetEEState_Response>()
{
  return "v2_robot_arm_interfaces::srv::TargetEEState_Response";
}

template<>
inline const char * name<v2_robot_arm_interfaces::srv::TargetEEState_Response>()
{
  return "v2_robot_arm_interfaces/srv/TargetEEState_Response";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::srv::TargetEEState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::srv::TargetEEState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2_robot_arm_interfaces::srv::TargetEEState_Response>
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
  const TargetEEState_Event & msg,
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
  const TargetEEState_Event & msg,
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

inline std::string to_yaml(const TargetEEState_Event & msg, bool use_flow_style = false)
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
  const v2_robot_arm_interfaces::srv::TargetEEState_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::srv::TargetEEState_Event & msg)
{
  return v2_robot_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::srv::TargetEEState_Event>()
{
  return "v2_robot_arm_interfaces::srv::TargetEEState_Event";
}

template<>
inline const char * name<v2_robot_arm_interfaces::srv::TargetEEState_Event>()
{
  return "v2_robot_arm_interfaces/srv/TargetEEState_Event";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::srv::TargetEEState_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::srv::TargetEEState_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<v2_robot_arm_interfaces::srv::TargetEEState_Request>::value && has_bounded_size<v2_robot_arm_interfaces::srv::TargetEEState_Response>::value> {};

template<>
struct is_message<v2_robot_arm_interfaces::srv::TargetEEState_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<v2_robot_arm_interfaces::srv::TargetEEState>()
{
  return "v2_robot_arm_interfaces::srv::TargetEEState";
}

template<>
inline const char * name<v2_robot_arm_interfaces::srv::TargetEEState>()
{
  return "v2_robot_arm_interfaces/srv/TargetEEState";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::srv::TargetEEState>
  : std::integral_constant<
    bool,
    has_fixed_size<v2_robot_arm_interfaces::srv::TargetEEState_Request>::value &&
    has_fixed_size<v2_robot_arm_interfaces::srv::TargetEEState_Response>::value
  >
{
};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::srv::TargetEEState>
  : std::integral_constant<
    bool,
    has_bounded_size<v2_robot_arm_interfaces::srv::TargetEEState_Request>::value &&
    has_bounded_size<v2_robot_arm_interfaces::srv::TargetEEState_Response>::value
  >
{
};

template<>
struct is_service<v2_robot_arm_interfaces::srv::TargetEEState>
  : std::true_type
{
};

template<>
struct is_service_request<v2_robot_arm_interfaces::srv::TargetEEState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<v2_robot_arm_interfaces::srv::TargetEEState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__TARGET_EE_STATE__TRAITS_HPP_
