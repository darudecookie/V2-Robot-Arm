// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2_robot_arm_interfaces:msg/ControlStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/control_status.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CONTROL_STATUS__BUILDER_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CONTROL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2_robot_arm_interfaces/msg/detail/control_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2_robot_arm_interfaces
{

namespace msg
{

namespace builder
{

class Init_ControlStatus_master_controller
{
public:
  explicit Init_ControlStatus_master_controller(::v2_robot_arm_interfaces::msg::ControlStatus & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::msg::ControlStatus master_controller(::v2_robot_arm_interfaces::msg::ControlStatus::_master_controller_type arg)
  {
    msg_.master_controller = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::ControlStatus msg_;
};

class Init_ControlStatus_peripheral_interface
{
public:
  explicit Init_ControlStatus_peripheral_interface(::v2_robot_arm_interfaces::msg::ControlStatus & msg)
  : msg_(msg)
  {}
  Init_ControlStatus_master_controller peripheral_interface(::v2_robot_arm_interfaces::msg::ControlStatus::_peripheral_interface_type arg)
  {
    msg_.peripheral_interface = std::move(arg);
    return Init_ControlStatus_master_controller(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::ControlStatus msg_;
};

class Init_ControlStatus_ik_solver
{
public:
  explicit Init_ControlStatus_ik_solver(::v2_robot_arm_interfaces::msg::ControlStatus & msg)
  : msg_(msg)
  {}
  Init_ControlStatus_peripheral_interface ik_solver(::v2_robot_arm_interfaces::msg::ControlStatus::_ik_solver_type arg)
  {
    msg_.ik_solver = std::move(arg);
    return Init_ControlStatus_peripheral_interface(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::ControlStatus msg_;
};

class Init_ControlStatus_trajectory_controller
{
public:
  Init_ControlStatus_trajectory_controller()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlStatus_ik_solver trajectory_controller(::v2_robot_arm_interfaces::msg::ControlStatus::_trajectory_controller_type arg)
  {
    msg_.trajectory_controller = std::move(arg);
    return Init_ControlStatus_ik_solver(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::ControlStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::msg::ControlStatus>()
{
  return v2_robot_arm_interfaces::msg::builder::Init_ControlStatus_trajectory_controller();
}

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CONTROL_STATUS__BUILDER_HPP_
