// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2_robot_arm_interfaces:msg/TargetEEInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/target_ee_info.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_EE_INFO__BUILDER_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_EE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2_robot_arm_interfaces/msg/detail/target_ee_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2_robot_arm_interfaces
{

namespace msg
{

namespace builder
{

class Init_TargetEEInfo_current_end_effector_value
{
public:
  explicit Init_TargetEEInfo_current_end_effector_value(::v2_robot_arm_interfaces::msg::TargetEEInfo & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::msg::TargetEEInfo current_end_effector_value(::v2_robot_arm_interfaces::msg::TargetEEInfo::_current_end_effector_value_type arg)
  {
    msg_.current_end_effector_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::TargetEEInfo msg_;
};

class Init_TargetEEInfo_header
{
public:
  Init_TargetEEInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetEEInfo_current_end_effector_value header(::v2_robot_arm_interfaces::msg::TargetEEInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TargetEEInfo_current_end_effector_value(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::TargetEEInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::msg::TargetEEInfo>()
{
  return v2_robot_arm_interfaces::msg::builder::Init_TargetEEInfo_header();
}

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_EE_INFO__BUILDER_HPP_
