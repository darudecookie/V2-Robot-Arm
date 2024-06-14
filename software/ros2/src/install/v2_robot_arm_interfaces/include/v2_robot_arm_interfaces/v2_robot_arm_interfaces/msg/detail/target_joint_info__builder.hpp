// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2_robot_arm_interfaces:msg/TargetJointInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/target_joint_info.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_JOINT_INFO__BUILDER_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_JOINT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2_robot_arm_interfaces/msg/detail/target_joint_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2_robot_arm_interfaces
{

namespace msg
{

namespace builder
{

class Init_TargetJointInfo_target_joint_torques
{
public:
  explicit Init_TargetJointInfo_target_joint_torques(::v2_robot_arm_interfaces::msg::TargetJointInfo & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::msg::TargetJointInfo target_joint_torques(::v2_robot_arm_interfaces::msg::TargetJointInfo::_target_joint_torques_type arg)
  {
    msg_.target_joint_torques = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::TargetJointInfo msg_;
};

class Init_TargetJointInfo_target_joint_velocities
{
public:
  explicit Init_TargetJointInfo_target_joint_velocities(::v2_robot_arm_interfaces::msg::TargetJointInfo & msg)
  : msg_(msg)
  {}
  Init_TargetJointInfo_target_joint_torques target_joint_velocities(::v2_robot_arm_interfaces::msg::TargetJointInfo::_target_joint_velocities_type arg)
  {
    msg_.target_joint_velocities = std::move(arg);
    return Init_TargetJointInfo_target_joint_torques(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::TargetJointInfo msg_;
};

class Init_TargetJointInfo_target_joint_positions
{
public:
  explicit Init_TargetJointInfo_target_joint_positions(::v2_robot_arm_interfaces::msg::TargetJointInfo & msg)
  : msg_(msg)
  {}
  Init_TargetJointInfo_target_joint_velocities target_joint_positions(::v2_robot_arm_interfaces::msg::TargetJointInfo::_target_joint_positions_type arg)
  {
    msg_.target_joint_positions = std::move(arg);
    return Init_TargetJointInfo_target_joint_velocities(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::TargetJointInfo msg_;
};

class Init_TargetJointInfo_param_to_control
{
public:
  explicit Init_TargetJointInfo_param_to_control(::v2_robot_arm_interfaces::msg::TargetJointInfo & msg)
  : msg_(msg)
  {}
  Init_TargetJointInfo_target_joint_positions param_to_control(::v2_robot_arm_interfaces::msg::TargetJointInfo::_param_to_control_type arg)
  {
    msg_.param_to_control = std::move(arg);
    return Init_TargetJointInfo_target_joint_positions(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::TargetJointInfo msg_;
};

class Init_TargetJointInfo_header
{
public:
  Init_TargetJointInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetJointInfo_param_to_control header(::v2_robot_arm_interfaces::msg::TargetJointInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TargetJointInfo_param_to_control(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::TargetJointInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::msg::TargetJointInfo>()
{
  return v2_robot_arm_interfaces::msg::builder::Init_TargetJointInfo_header();
}

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_JOINT_INFO__BUILDER_HPP_
