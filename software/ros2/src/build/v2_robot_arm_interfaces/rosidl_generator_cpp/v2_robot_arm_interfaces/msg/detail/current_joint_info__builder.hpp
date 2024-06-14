// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2_robot_arm_interfaces:msg/CurrentJointInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/current_joint_info.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CURRENT_JOINT_INFO__BUILDER_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CURRENT_JOINT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2_robot_arm_interfaces/msg/detail/current_joint_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2_robot_arm_interfaces
{

namespace msg
{

namespace builder
{

class Init_CurrentJointInfo_current_joint_torques
{
public:
  explicit Init_CurrentJointInfo_current_joint_torques(::v2_robot_arm_interfaces::msg::CurrentJointInfo & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::msg::CurrentJointInfo current_joint_torques(::v2_robot_arm_interfaces::msg::CurrentJointInfo::_current_joint_torques_type arg)
  {
    msg_.current_joint_torques = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::CurrentJointInfo msg_;
};

class Init_CurrentJointInfo_current_joint_jerks
{
public:
  explicit Init_CurrentJointInfo_current_joint_jerks(::v2_robot_arm_interfaces::msg::CurrentJointInfo & msg)
  : msg_(msg)
  {}
  Init_CurrentJointInfo_current_joint_torques current_joint_jerks(::v2_robot_arm_interfaces::msg::CurrentJointInfo::_current_joint_jerks_type arg)
  {
    msg_.current_joint_jerks = std::move(arg);
    return Init_CurrentJointInfo_current_joint_torques(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::CurrentJointInfo msg_;
};

class Init_CurrentJointInfo_current_joint_acceleration
{
public:
  explicit Init_CurrentJointInfo_current_joint_acceleration(::v2_robot_arm_interfaces::msg::CurrentJointInfo & msg)
  : msg_(msg)
  {}
  Init_CurrentJointInfo_current_joint_jerks current_joint_acceleration(::v2_robot_arm_interfaces::msg::CurrentJointInfo::_current_joint_acceleration_type arg)
  {
    msg_.current_joint_acceleration = std::move(arg);
    return Init_CurrentJointInfo_current_joint_jerks(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::CurrentJointInfo msg_;
};

class Init_CurrentJointInfo_current_joint_velocity
{
public:
  explicit Init_CurrentJointInfo_current_joint_velocity(::v2_robot_arm_interfaces::msg::CurrentJointInfo & msg)
  : msg_(msg)
  {}
  Init_CurrentJointInfo_current_joint_acceleration current_joint_velocity(::v2_robot_arm_interfaces::msg::CurrentJointInfo::_current_joint_velocity_type arg)
  {
    msg_.current_joint_velocity = std::move(arg);
    return Init_CurrentJointInfo_current_joint_acceleration(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::CurrentJointInfo msg_;
};

class Init_CurrentJointInfo_current_joint_positions
{
public:
  explicit Init_CurrentJointInfo_current_joint_positions(::v2_robot_arm_interfaces::msg::CurrentJointInfo & msg)
  : msg_(msg)
  {}
  Init_CurrentJointInfo_current_joint_velocity current_joint_positions(::v2_robot_arm_interfaces::msg::CurrentJointInfo::_current_joint_positions_type arg)
  {
    msg_.current_joint_positions = std::move(arg);
    return Init_CurrentJointInfo_current_joint_velocity(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::CurrentJointInfo msg_;
};

class Init_CurrentJointInfo_header
{
public:
  Init_CurrentJointInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CurrentJointInfo_current_joint_positions header(::v2_robot_arm_interfaces::msg::CurrentJointInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CurrentJointInfo_current_joint_positions(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::CurrentJointInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::msg::CurrentJointInfo>()
{
  return v2_robot_arm_interfaces::msg::builder::Init_CurrentJointInfo_header();
}

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CURRENT_JOINT_INFO__BUILDER_HPP_
