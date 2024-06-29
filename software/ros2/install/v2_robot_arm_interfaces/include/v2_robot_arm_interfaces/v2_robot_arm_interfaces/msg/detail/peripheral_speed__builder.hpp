// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2_robot_arm_interfaces:msg/PeripheralSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/peripheral_speed.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__PERIPHERAL_SPEED__BUILDER_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__PERIPHERAL_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2_robot_arm_interfaces/msg/detail/peripheral_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2_robot_arm_interfaces
{

namespace msg
{

namespace builder
{

class Init_PeripheralSpeed_rotation_speed
{
public:
  explicit Init_PeripheralSpeed_rotation_speed(::v2_robot_arm_interfaces::msg::PeripheralSpeed & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::msg::PeripheralSpeed rotation_speed(::v2_robot_arm_interfaces::msg::PeripheralSpeed::_rotation_speed_type arg)
  {
    msg_.rotation_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::PeripheralSpeed msg_;
};

class Init_PeripheralSpeed_translation_speed
{
public:
  Init_PeripheralSpeed_translation_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PeripheralSpeed_rotation_speed translation_speed(::v2_robot_arm_interfaces::msg::PeripheralSpeed::_translation_speed_type arg)
  {
    msg_.translation_speed = std::move(arg);
    return Init_PeripheralSpeed_rotation_speed(msg_);
  }

private:
  ::v2_robot_arm_interfaces::msg::PeripheralSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::msg::PeripheralSpeed>()
{
  return v2_robot_arm_interfaces::msg::builder::Init_PeripheralSpeed_translation_speed();
}

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__PERIPHERAL_SPEED__BUILDER_HPP_
