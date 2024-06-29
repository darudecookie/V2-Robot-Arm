// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2_robot_arm_interfaces:srv/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/system_status.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2_robot_arm_interfaces/srv/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SystemStatus_Request_move_home
{
public:
  explicit Init_SystemStatus_Request_move_home(::v2_robot_arm_interfaces::srv::SystemStatus_Request & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::srv::SystemStatus_Request move_home(::v2_robot_arm_interfaces::srv::SystemStatus_Request::_move_home_type arg)
  {
    msg_.move_home = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::SystemStatus_Request msg_;
};

class Init_SystemStatus_Request_jointhold
{
public:
  explicit Init_SystemStatus_Request_jointhold(::v2_robot_arm_interfaces::srv::SystemStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_Request_move_home jointhold(::v2_robot_arm_interfaces::srv::SystemStatus_Request::_jointhold_type arg)
  {
    msg_.jointhold = std::move(arg);
    return Init_SystemStatus_Request_move_home(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::SystemStatus_Request msg_;
};

class Init_SystemStatus_Request_estop
{
public:
  Init_SystemStatus_Request_estop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemStatus_Request_jointhold estop(::v2_robot_arm_interfaces::srv::SystemStatus_Request::_estop_type arg)
  {
    msg_.estop = std::move(arg);
    return Init_SystemStatus_Request_jointhold(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::SystemStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::srv::SystemStatus_Request>()
{
  return v2_robot_arm_interfaces::srv::builder::Init_SystemStatus_Request_estop();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SystemStatus_Response_returnsuccess
{
public:
  Init_SystemStatus_Response_returnsuccess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2_robot_arm_interfaces::srv::SystemStatus_Response returnsuccess(::v2_robot_arm_interfaces::srv::SystemStatus_Response::_returnsuccess_type arg)
  {
    msg_.returnsuccess = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::SystemStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::srv::SystemStatus_Response>()
{
  return v2_robot_arm_interfaces::srv::builder::Init_SystemStatus_Response_returnsuccess();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SystemStatus_Event_response
{
public:
  explicit Init_SystemStatus_Event_response(::v2_robot_arm_interfaces::srv::SystemStatus_Event & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::srv::SystemStatus_Event response(::v2_robot_arm_interfaces::srv::SystemStatus_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::SystemStatus_Event msg_;
};

class Init_SystemStatus_Event_request
{
public:
  explicit Init_SystemStatus_Event_request(::v2_robot_arm_interfaces::srv::SystemStatus_Event & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_Event_response request(::v2_robot_arm_interfaces::srv::SystemStatus_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SystemStatus_Event_response(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::SystemStatus_Event msg_;
};

class Init_SystemStatus_Event_info
{
public:
  Init_SystemStatus_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemStatus_Event_request info(::v2_robot_arm_interfaces::srv::SystemStatus_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SystemStatus_Event_request(msg_);
  }

private:
  ::v2_robot_arm_interfaces::srv::SystemStatus_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::srv::SystemStatus_Event>()
{
  return v2_robot_arm_interfaces::srv::builder::Init_SystemStatus_Event_info();
}

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
