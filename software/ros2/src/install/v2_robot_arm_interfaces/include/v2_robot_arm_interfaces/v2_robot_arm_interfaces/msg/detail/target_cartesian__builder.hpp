// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2_robot_arm_interfaces:msg/TargetCartesian.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/target_cartesian.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_CARTESIAN__BUILDER_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_CARTESIAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2_robot_arm_interfaces/msg/detail/target_cartesian__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2_robot_arm_interfaces
{

namespace msg
{

namespace builder
{

class Init_TargetCartesian_rotation
{
public:
  explicit Init_TargetCartesian_rotation(::v2_robot_arm_interfaces::msg::TargetCartesian & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::msg::TargetCartesian rotation(::v2_robot_arm_interfaces::msg::TargetCartesian::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::TargetCartesian msg_;
};

class Init_TargetCartesian_position
{
public:
  explicit Init_TargetCartesian_position(::v2_robot_arm_interfaces::msg::TargetCartesian & msg)
  : msg_(msg)
  {}
  Init_TargetCartesian_rotation position(::v2_robot_arm_interfaces::msg::TargetCartesian::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TargetCartesian_rotation(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::TargetCartesian msg_;
};

class Init_TargetCartesian_header
{
public:
  Init_TargetCartesian_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetCartesian_position header(::v2_robot_arm_interfaces::msg::TargetCartesian::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TargetCartesian_position(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::TargetCartesian msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::msg::TargetCartesian>()
{
  return v2_robot_arm_interfaces::msg::builder::Init_TargetCartesian_header();
}

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_CARTESIAN__BUILDER_HPP_
