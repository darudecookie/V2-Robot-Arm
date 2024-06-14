// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2_robot_arm_interfaces:msg/SystemDiagnosticInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/system_diagnostic_info.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__SYSTEM_DIAGNOSTIC_INFO__BUILDER_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__SYSTEM_DIAGNOSTIC_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2_robot_arm_interfaces/msg/detail/system_diagnostic_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2_robot_arm_interfaces
{

namespace msg
{

namespace builder
{

class Init_SystemDiagnosticInfo_temperatures
{
public:
  explicit Init_SystemDiagnosticInfo_temperatures(::v2_robot_arm_interfaces::msg::SystemDiagnosticInfo & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::msg::SystemDiagnosticInfo temperatures(::v2_robot_arm_interfaces::msg::SystemDiagnosticInfo::_temperatures_type arg)
  {
    msg_.temperatures = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::SystemDiagnosticInfo msg_;
};

class Init_SystemDiagnosticInfo_jointhold
{
public:
  explicit Init_SystemDiagnosticInfo_jointhold(::v2_robot_arm_interfaces::msg::SystemDiagnosticInfo & msg)
  : msg_(msg)
  {}
  Init_SystemDiagnosticInfo_temperatures jointhold(::v2_robot_arm_interfaces::msg::SystemDiagnosticInfo::_jointhold_type arg)
  {
    msg_.jointhold = std::move(arg);
    return Init_SystemDiagnosticInfo_temperatures(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::SystemDiagnosticInfo msg_;
};

class Init_SystemDiagnosticInfo_estop
{
public:
  Init_SystemDiagnosticInfo_estop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemDiagnosticInfo_jointhold estop(::v2_robot_arm_interfaces::msg::SystemDiagnosticInfo::_estop_type arg)
  {
    msg_.estop = std::move(arg);
    return Init_SystemDiagnosticInfo_jointhold(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::SystemDiagnosticInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::msg::SystemDiagnosticInfo>()
{
  return v2_robot_arm_interfaces::msg::builder::Init_SystemDiagnosticInfo_estop();
}

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__SYSTEM_DIAGNOSTIC_INFO__BUILDER_HPP_
