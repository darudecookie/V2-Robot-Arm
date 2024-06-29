// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2_robot_arm_interfaces:srv/TargetEEState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/target_ee_state.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__TARGET_EE_STATE__STRUCT_HPP_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__TARGET_EE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2_robot_arm_interfaces__srv__TargetEEState_Request __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__srv__TargetEEState_Request __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TargetEEState_Request_
{
  using Type = TargetEEState_Request_<ContainerAllocator>;

  explicit TargetEEState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_end_effector_value = 0.0f;
    }
  }

  explicit TargetEEState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_end_effector_value = 0.0f;
    }
  }

  // field types and members
  using _target_end_effector_value_type =
    float;
  _target_end_effector_value_type target_end_effector_value;

  // setters for named parameter idiom
  Type & set__target_end_effector_value(
    const float & _arg)
  {
    this->target_end_effector_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__TargetEEState_Request
    std::shared_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__TargetEEState_Request
    std::shared_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetEEState_Request_ & other) const
  {
    if (this->target_end_effector_value != other.target_end_effector_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetEEState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetEEState_Request_

// alias to use template instance with default allocator
using TargetEEState_Request =
  v2_robot_arm_interfaces::srv::TargetEEState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace v2_robot_arm_interfaces


#ifndef _WIN32
# define DEPRECATED__v2_robot_arm_interfaces__srv__TargetEEState_Response __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__srv__TargetEEState_Response __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TargetEEState_Response_
{
  using Type = TargetEEState_Response_<ContainerAllocator>;

  explicit TargetEEState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_end_effector_value = 0.0f;
    }
  }

  explicit TargetEEState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_end_effector_value = 0.0f;
    }
  }

  // field types and members
  using _current_end_effector_value_type =
    float;
  _current_end_effector_value_type current_end_effector_value;

  // setters for named parameter idiom
  Type & set__current_end_effector_value(
    const float & _arg)
  {
    this->current_end_effector_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__TargetEEState_Response
    std::shared_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__TargetEEState_Response
    std::shared_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetEEState_Response_ & other) const
  {
    if (this->current_end_effector_value != other.current_end_effector_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetEEState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetEEState_Response_

// alias to use template instance with default allocator
using TargetEEState_Response =
  v2_robot_arm_interfaces::srv::TargetEEState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace v2_robot_arm_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2_robot_arm_interfaces__srv__TargetEEState_Event __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__srv__TargetEEState_Event __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TargetEEState_Event_
{
  using Type = TargetEEState_Event_<ContainerAllocator>;

  explicit TargetEEState_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit TargetEEState_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2_robot_arm_interfaces::srv::TargetEEState_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2_robot_arm_interfaces::srv::TargetEEState_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::srv::TargetEEState_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::srv::TargetEEState_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::TargetEEState_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::TargetEEState_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__TargetEEState_Event
    std::shared_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__TargetEEState_Event
    std::shared_ptr<v2_robot_arm_interfaces::srv::TargetEEState_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetEEState_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetEEState_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetEEState_Event_

// alias to use template instance with default allocator
using TargetEEState_Event =
  v2_robot_arm_interfaces::srv::TargetEEState_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace v2_robot_arm_interfaces
{

namespace srv
{

struct TargetEEState
{
  using Request = v2_robot_arm_interfaces::srv::TargetEEState_Request;
  using Response = v2_robot_arm_interfaces::srv::TargetEEState_Response;
  using Event = v2_robot_arm_interfaces::srv::TargetEEState_Event;
};

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__TARGET_EE_STATE__STRUCT_HPP_
