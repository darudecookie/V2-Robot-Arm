// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2_robot_arm_interfaces:srv/TargetEEState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/target_ee_state.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__TARGET_EE_STATE__BUILDER_HPP_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__TARGET_EE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2_robot_arm_interfaces/srv/detail/target_ee_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_TargetEEState_Request_target_end_effector_bool
{
public:
  explicit Init_TargetEEState_Request_target_end_effector_bool(::v2_robot_arm_interfaces::srv::TargetEEState_Request & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::srv::TargetEEState_Request target_end_effector_bool(::v2_robot_arm_interfaces::srv::TargetEEState_Request::_target_end_effector_bool_type arg)
  {
    msg_.target_end_effector_bool = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::TargetEEState_Request msg_;
};

class Init_TargetEEState_Request_target_end_effector_value
{
public:
  Init_TargetEEState_Request_target_end_effector_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetEEState_Request_target_end_effector_bool target_end_effector_value(::v2_robot_arm_interfaces::srv::TargetEEState_Request::_target_end_effector_value_type arg)
  {
    msg_.target_end_effector_value = std::move(arg);
    return Init_TargetEEState_Request_target_end_effector_bool(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::TargetEEState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::srv::TargetEEState_Request>()
{
  return v2_robot_arm_interfaces::srv::builder::Init_TargetEEState_Request_target_end_effector_value();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_TargetEEState_Response_current_end_effector_value
{
public:
  Init_TargetEEState_Response_current_end_effector_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2_robot_arm_interfaces::srv::TargetEEState_Response current_end_effector_value(::v2_robot_arm_interfaces::srv::TargetEEState_Response::_current_end_effector_value_type arg)
  {
    msg_.current_end_effector_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::TargetEEState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::srv::TargetEEState_Response>()
{
  return v2_robot_arm_interfaces::srv::builder::Init_TargetEEState_Response_current_end_effector_value();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_TargetEEState_Event_response
{
public:
  explicit Init_TargetEEState_Event_response(::v2_robot_arm_interfaces::srv::TargetEEState_Event & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::srv::TargetEEState_Event response(::v2_robot_arm_interfaces::srv::TargetEEState_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::TargetEEState_Event msg_;
};

class Init_TargetEEState_Event_request
{
public:
  explicit Init_TargetEEState_Event_request(::v2_robot_arm_interfaces::srv::TargetEEState_Event & msg)
  : msg_(msg)
  {}
  Init_TargetEEState_Event_response request(::v2_robot_arm_interfaces::srv::TargetEEState_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TargetEEState_Event_response(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::TargetEEState_Event msg_;
};

class Init_TargetEEState_Event_info
{
public:
  Init_TargetEEState_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetEEState_Event_request info(::v2_robot_arm_interfaces::srv::TargetEEState_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TargetEEState_Event_request(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::TargetEEState_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::srv::TargetEEState_Event>()
{
  return v2_robot_arm_interfaces::srv::builder::Init_TargetEEState_Event_info();
}

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__TARGET_EE_STATE__BUILDER_HPP_
