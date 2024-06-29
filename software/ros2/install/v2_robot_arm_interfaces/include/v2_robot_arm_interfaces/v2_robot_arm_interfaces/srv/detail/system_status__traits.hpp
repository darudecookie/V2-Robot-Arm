// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2_robot_arm_interfaces:srv/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/system_status.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2_robot_arm_interfaces/srv/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2_robot_arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SystemStatus_Request & msg,
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

  // member: move_home
  {
    out << "move_home: ";
    rosidl_generator_traits::value_to_yaml(msg.move_home, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemStatus_Request & msg,
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

  // member: move_home
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_home: ";
    rosidl_generator_traits::value_to_yaml(msg.move_home, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemStatus_Request & msg, bool use_flow_style = false)
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
  const v2_robot_arm_interfaces::srv::SystemStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::srv::SystemStatus_Request & msg)
{
  return v2_robot_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::srv::SystemStatus_Request>()
{
  return "v2_robot_arm_interfaces::srv::SystemStatus_Request";
}

template<>
inline const char * name<v2_robot_arm_interfaces::srv::SystemStatus_Request>()
{
  return "v2_robot_arm_interfaces/srv/SystemStatus_Request";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::srv::SystemStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::srv::SystemStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2_robot_arm_interfaces::srv::SystemStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace v2_robot_arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SystemStatus_Response & msg,
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
  const SystemStatus_Response & msg,
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

inline std::string to_yaml(const SystemStatus_Response & msg, bool use_flow_style = false)
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
  const v2_robot_arm_interfaces::srv::SystemStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::srv::SystemStatus_Response & msg)
{
  return v2_robot_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::srv::SystemStatus_Response>()
{
  return "v2_robot_arm_interfaces::srv::SystemStatus_Response";
}

template<>
inline const char * name<v2_robot_arm_interfaces::srv::SystemStatus_Response>()
{
  return "v2_robot_arm_interfaces/srv/SystemStatus_Response";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::srv::SystemStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::srv::SystemStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2_robot_arm_interfaces::srv::SystemStatus_Response>
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
  const SystemStatus_Event & msg,
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
  const SystemStatus_Event & msg,
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

inline std::string to_yaml(const SystemStatus_Event & msg, bool use_flow_style = false)
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
  const v2_robot_arm_interfaces::srv::SystemStatus_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2_robot_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2_robot_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const v2_robot_arm_interfaces::srv::SystemStatus_Event & msg)
{
  return v2_robot_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<v2_robot_arm_interfaces::srv::SystemStatus_Event>()
{
  return "v2_robot_arm_interfaces::srv::SystemStatus_Event";
}

template<>
inline const char * name<v2_robot_arm_interfaces::srv::SystemStatus_Event>()
{
  return "v2_robot_arm_interfaces/srv/SystemStatus_Event";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::srv::SystemStatus_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::srv::SystemStatus_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<v2_robot_arm_interfaces::srv::SystemStatus_Request>::value && has_bounded_size<v2_robot_arm_interfaces::srv::SystemStatus_Response>::value> {};

template<>
struct is_message<v2_robot_arm_interfaces::srv::SystemStatus_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<v2_robot_arm_interfaces::srv::SystemStatus>()
{
  return "v2_robot_arm_interfaces::srv::SystemStatus";
}

template<>
inline const char * name<v2_robot_arm_interfaces::srv::SystemStatus>()
{
  return "v2_robot_arm_interfaces/srv/SystemStatus";
}

template<>
struct has_fixed_size<v2_robot_arm_interfaces::srv::SystemStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<v2_robot_arm_interfaces::srv::SystemStatus_Request>::value &&
    has_fixed_size<v2_robot_arm_interfaces::srv::SystemStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<v2_robot_arm_interfaces::srv::SystemStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<v2_robot_arm_interfaces::srv::SystemStatus_Request>::value &&
    has_bounded_size<v2_robot_arm_interfaces::srv::SystemStatus_Response>::value
  >
{
};

template<>
struct is_service<v2_robot_arm_interfaces::srv::SystemStatus>
  : std::true_type
{
};

template<>
struct is_service_request<v2_robot_arm_interfaces::srv::SystemStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<v2_robot_arm_interfaces::srv::SystemStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
