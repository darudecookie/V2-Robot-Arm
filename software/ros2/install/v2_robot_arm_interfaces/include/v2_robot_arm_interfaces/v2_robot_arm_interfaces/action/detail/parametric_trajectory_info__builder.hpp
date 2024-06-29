// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2_robot_arm_interfaces:action/ParametricTrajectoryInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/action/parametric_trajectory_info.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__ACTION__DETAIL__PARAMETRIC_TRAJECTORY_INFO__BUILDER_HPP_
#define V2_ROBOT_ARM_INTERFACES__ACTION__DETAIL__PARAMETRIC_TRAJECTORY_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2_robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_ParametricTrajectoryInfo_Goal_parametric_equation
{
public:
  explicit Init_ParametricTrajectoryInfo_Goal_parametric_equation(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Goal & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Goal parametric_equation(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Goal::_parametric_equation_type arg)
  {
    msg_.parametric_equation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Goal msg_;
};

class Init_ParametricTrajectoryInfo_Goal_t_speed
{
public:
  explicit Init_ParametricTrajectoryInfo_Goal_t_speed(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Goal & msg)
  : msg_(msg)
  {}
  Init_ParametricTrajectoryInfo_Goal_parametric_equation t_speed(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Goal::_t_speed_type arg)
  {
    msg_.t_speed = std::move(arg);
    return Init_ParametricTrajectoryInfo_Goal_parametric_equation(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Goal msg_;
};

class Init_ParametricTrajectoryInfo_Goal_t_range
{
public:
  Init_ParametricTrajectoryInfo_Goal_t_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParametricTrajectoryInfo_Goal_t_speed t_range(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Goal::_t_range_type arg)
  {
    msg_.t_range = std::move(arg);
    return Init_ParametricTrajectoryInfo_Goal_t_speed(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Goal>()
{
  return v2_robot_arm_interfaces::action::builder::Init_ParametricTrajectoryInfo_Goal_t_range();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_ParametricTrajectoryInfo_Result_returnsuccess
{
public:
  Init_ParametricTrajectoryInfo_Result_returnsuccess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Result returnsuccess(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Result::_returnsuccess_type arg)
  {
    msg_.returnsuccess = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Result>()
{
  return v2_robot_arm_interfaces::action::builder::Init_ParametricTrajectoryInfo_Result_returnsuccess();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_ParametricTrajectoryInfo_Feedback_current_t
{
public:
  Init_ParametricTrajectoryInfo_Feedback_current_t()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Feedback current_t(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Feedback::_current_t_type arg)
  {
    msg_.current_t = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Feedback>()
{
  return v2_robot_arm_interfaces::action::builder::Init_ParametricTrajectoryInfo_Feedback_current_t();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_ParametricTrajectoryInfo_SendGoal_Request_goal
{
public:
  explicit Init_ParametricTrajectoryInfo_SendGoal_Request_goal(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Request goal(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Request msg_;
};

class Init_ParametricTrajectoryInfo_SendGoal_Request_goal_id
{
public:
  Init_ParametricTrajectoryInfo_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParametricTrajectoryInfo_SendGoal_Request_goal goal_id(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ParametricTrajectoryInfo_SendGoal_Request_goal(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Request>()
{
  return v2_robot_arm_interfaces::action::builder::Init_ParametricTrajectoryInfo_SendGoal_Request_goal_id();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_ParametricTrajectoryInfo_SendGoal_Response_stamp
{
public:
  explicit Init_ParametricTrajectoryInfo_SendGoal_Response_stamp(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Response stamp(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Response msg_;
};

class Init_ParametricTrajectoryInfo_SendGoal_Response_accepted
{
public:
  Init_ParametricTrajectoryInfo_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParametricTrajectoryInfo_SendGoal_Response_stamp accepted(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ParametricTrajectoryInfo_SendGoal_Response_stamp(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Response>()
{
  return v2_robot_arm_interfaces::action::builder::Init_ParametricTrajectoryInfo_SendGoal_Response_accepted();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_ParametricTrajectoryInfo_SendGoal_Event_response
{
public:
  explicit Init_ParametricTrajectoryInfo_SendGoal_Event_response(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Event response(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Event msg_;
};

class Init_ParametricTrajectoryInfo_SendGoal_Event_request
{
public:
  explicit Init_ParametricTrajectoryInfo_SendGoal_Event_request(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ParametricTrajectoryInfo_SendGoal_Event_response request(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ParametricTrajectoryInfo_SendGoal_Event_response(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Event msg_;
};

class Init_ParametricTrajectoryInfo_SendGoal_Event_info
{
public:
  Init_ParametricTrajectoryInfo_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParametricTrajectoryInfo_SendGoal_Event_request info(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ParametricTrajectoryInfo_SendGoal_Event_request(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Event>()
{
  return v2_robot_arm_interfaces::action::builder::Init_ParametricTrajectoryInfo_SendGoal_Event_info();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_ParametricTrajectoryInfo_GetResult_Request_goal_id
{
public:
  Init_ParametricTrajectoryInfo_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Request goal_id(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Request>()
{
  return v2_robot_arm_interfaces::action::builder::Init_ParametricTrajectoryInfo_GetResult_Request_goal_id();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_ParametricTrajectoryInfo_GetResult_Response_result
{
public:
  explicit Init_ParametricTrajectoryInfo_GetResult_Response_result(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Response result(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Response msg_;
};

class Init_ParametricTrajectoryInfo_GetResult_Response_status
{
public:
  Init_ParametricTrajectoryInfo_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParametricTrajectoryInfo_GetResult_Response_result status(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ParametricTrajectoryInfo_GetResult_Response_result(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Response>()
{
  return v2_robot_arm_interfaces::action::builder::Init_ParametricTrajectoryInfo_GetResult_Response_status();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_ParametricTrajectoryInfo_GetResult_Event_response
{
public:
  explicit Init_ParametricTrajectoryInfo_GetResult_Event_response(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Event response(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Event msg_;
};

class Init_ParametricTrajectoryInfo_GetResult_Event_request
{
public:
  explicit Init_ParametricTrajectoryInfo_GetResult_Event_request(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ParametricTrajectoryInfo_GetResult_Event_response request(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ParametricTrajectoryInfo_GetResult_Event_response(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Event msg_;
};

class Init_ParametricTrajectoryInfo_GetResult_Event_info
{
public:
  Init_ParametricTrajectoryInfo_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParametricTrajectoryInfo_GetResult_Event_request info(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ParametricTrajectoryInfo_GetResult_Event_request(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Event>()
{
  return v2_robot_arm_interfaces::action::builder::Init_ParametricTrajectoryInfo_GetResult_Event_info();
}

}  // namespace v2_robot_arm_interfaces


namespace v2_robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_ParametricTrajectoryInfo_FeedbackMessage_feedback
{
public:
  explicit Init_ParametricTrajectoryInfo_FeedbackMessage_feedback(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_FeedbackMessage feedback(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_FeedbackMessage msg_;
};

class Init_ParametricTrajectoryInfo_FeedbackMessage_goal_id
{
public:
  Init_ParametricTrajectoryInfo_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParametricTrajectoryInfo_FeedbackMessage_feedback goal_id(::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ParametricTrajectoryInfo_FeedbackMessage_feedback(msg_);
  }

private:
  ::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_FeedbackMessage>()
{
  return v2_robot_arm_interfaces::action::builder::Init_ParametricTrajectoryInfo_FeedbackMessage_goal_id();
}

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__ACTION__DETAIL__PARAMETRIC_TRAJECTORY_INFO__BUILDER_HPP_
