// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2_robot_arm_interfaces:srv/MicrocontrollerParameterDump.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/microcontroller_parameter_dump.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__BUILDER_HPP_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_MicrocontrollerParameterDump_Request_joint_home_positions
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_joint_home_positions(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request joint_home_positions(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_joint_home_positions_type arg)
  {
    msg_.joint_home_positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_pid_update_params
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_pid_update_params(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_joint_home_positions pid_update_params(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_pid_update_params_type arg)
  {
    msg_.pid_update_params = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_joint_home_positions(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_pid_update_target
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_pid_update_target(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_pid_update_params pid_update_target(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_pid_update_target_type arg)
  {
    msg_.pid_update_target = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_pid_update_params(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_z_workspace_bounds
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_z_workspace_bounds(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_pid_update_target z_workspace_bounds(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_z_workspace_bounds_type arg)
  {
    msg_.z_workspace_bounds = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_pid_update_target(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_y_workspace_bounds
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_y_workspace_bounds(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_z_workspace_bounds y_workspace_bounds(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_y_workspace_bounds_type arg)
  {
    msg_.y_workspace_bounds = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_z_workspace_bounds(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_x_workspace_bounds
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_x_workspace_bounds(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_y_workspace_bounds x_workspace_bounds(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_x_workspace_bounds_type arg)
  {
    msg_.x_workspace_bounds = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_y_workspace_bounds(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_joint_jerk_limit_update_params
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_joint_jerk_limit_update_params(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_x_workspace_bounds joint_jerk_limit_update_params(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_joint_jerk_limit_update_params_type arg)
  {
    msg_.joint_jerk_limit_update_params = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_x_workspace_bounds(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_joint_jerk_limit_update_target
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_joint_jerk_limit_update_target(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_joint_jerk_limit_update_params joint_jerk_limit_update_target(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_joint_jerk_limit_update_target_type arg)
  {
    msg_.joint_jerk_limit_update_target = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_joint_jerk_limit_update_params(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_joint_acceleration_limit_update_params
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_joint_acceleration_limit_update_params(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_joint_jerk_limit_update_target joint_acceleration_limit_update_params(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_joint_acceleration_limit_update_params_type arg)
  {
    msg_.joint_acceleration_limit_update_params = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_joint_jerk_limit_update_target(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_joint_acceleration_limit_update_target
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_joint_acceleration_limit_update_target(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_joint_acceleration_limit_update_params joint_acceleration_limit_update_target(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_joint_acceleration_limit_update_target_type arg)
  {
    msg_.joint_acceleration_limit_update_target = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_joint_acceleration_limit_update_params(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_joint_torque_limit_update_params
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_joint_torque_limit_update_params(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_joint_acceleration_limit_update_target joint_torque_limit_update_params(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_joint_torque_limit_update_params_type arg)
  {
    msg_.joint_torque_limit_update_params = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_joint_acceleration_limit_update_target(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_joint_torque_limit_update_target
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_joint_torque_limit_update_target(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_joint_torque_limit_update_params joint_torque_limit_update_target(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_joint_torque_limit_update_target_type arg)
  {
    msg_.joint_torque_limit_update_target = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_joint_torque_limit_update_params(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_joint_velocity_limit_update_params
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_joint_velocity_limit_update_params(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_joint_torque_limit_update_target joint_velocity_limit_update_params(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_joint_velocity_limit_update_params_type arg)
  {
    msg_.joint_velocity_limit_update_params = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_joint_torque_limit_update_target(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_joint_velocity_limit_update_target
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_joint_velocity_limit_update_target(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_joint_velocity_limit_update_params joint_velocity_limit_update_target(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_joint_velocity_limit_update_target_type arg)
  {
    msg_.joint_velocity_limit_update_target = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_joint_velocity_limit_update_params(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_joint_position_limit_update_params
{
public:
  explicit Init_MicrocontrollerParameterDump_Request_joint_position_limit_update_params(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Request_joint_velocity_limit_update_target joint_position_limit_update_params(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_joint_position_limit_update_params_type arg)
  {
    msg_.joint_position_limit_update_params = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_joint_velocity_limit_update_target(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

class Init_MicrocontrollerParameterDump_Request_joint_position_limit_update_target
{
public:
  Init_MicrocontrollerParameterDump_Request_joint_position_limit_update_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MicrocontrollerParameterDump_Request_joint_position_limit_update_params joint_position_limit_update_target(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request::_joint_position_limit_update_target_type arg)
  {
    msg_.joint_position_limit_update_target = std::move(arg);
    return Init_MicrocontrollerParameterDump_Request_joint_position_limit_update_params(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>()
{
  return v2_robot_arm_interfaces::srv::builder::Init_MicrocontrollerParameterDump_Request_joint_position_limit_update_target();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_MicrocontrollerParameterDump_Response_returnsuccess
{
public:
  Init_MicrocontrollerParameterDump_Response_returnsuccess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response returnsuccess(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response::_returnsuccess_type arg)
  {
    msg_.returnsuccess = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>()
{
  return v2_robot_arm_interfaces::srv::builder::Init_MicrocontrollerParameterDump_Response_returnsuccess();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_MicrocontrollerParameterDump_Event_response
{
public:
  explicit Init_MicrocontrollerParameterDump_Event_response(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event response(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event msg_;
};

class Init_MicrocontrollerParameterDump_Event_request
{
public:
  explicit Init_MicrocontrollerParameterDump_Event_request(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event & msg)
  : msg_(msg)
  {}
  Init_MicrocontrollerParameterDump_Event_response request(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MicrocontrollerParameterDump_Event_response(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event msg_;
};

class Init_MicrocontrollerParameterDump_Event_info
{
public:
  Init_MicrocontrollerParameterDump_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MicrocontrollerParameterDump_Event_request info(::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MicrocontrollerParameterDump_Event_request(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event>()
{
  return v2_robot_arm_interfaces::srv::builder::Init_MicrocontrollerParameterDump_Event_info();
}

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__BUILDER_HPP_
