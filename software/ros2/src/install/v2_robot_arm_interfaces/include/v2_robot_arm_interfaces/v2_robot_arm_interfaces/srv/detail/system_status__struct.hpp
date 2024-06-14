// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2_robot_arm_interfaces:srv/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/system_status.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2_robot_arm_interfaces__srv__SystemStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__srv__SystemStatus_Request __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SystemStatus_Request_
{
  using Type = SystemStatus_Request_<ContainerAllocator>;

  explicit SystemStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->estop = 0;
      this->jointhold = 0;
      this->move_home = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->estop = 0;
      this->jointhold = 0;
      this->move_home = 0;
    }
  }

  explicit SystemStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->estop = 0;
      this->jointhold = 0;
      this->move_home = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->estop = 0;
      this->jointhold = 0;
      this->move_home = 0;
    }
  }

  // field types and members
  using _estop_type =
    int8_t;
  _estop_type estop;
  using _jointhold_type =
    int8_t;
  _jointhold_type jointhold;
  using _move_home_type =
    int8_t;
  _move_home_type move_home;

  // setters for named parameter idiom
  Type & set__estop(
    const int8_t & _arg)
  {
    this->estop = _arg;
    return *this;
  }
  Type & set__jointhold(
    const int8_t & _arg)
  {
    this->jointhold = _arg;
    return *this;
  }
  Type & set__move_home(
    const int8_t & _arg)
  {
    this->move_home = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__SystemStatus_Request
    std::shared_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__SystemStatus_Request
    std::shared_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemStatus_Request_ & other) const
  {
    if (this->estop != other.estop) {
      return false;
    }
    if (this->jointhold != other.jointhold) {
      return false;
    }
    if (this->move_home != other.move_home) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemStatus_Request_

// alias to use template instance with default allocator
using SystemStatus_Request =
  v2_robot_arm_interfaces::srv::SystemStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace v2_robot_arm_interfaces


#ifndef _WIN32
# define DEPRECATED__v2_robot_arm_interfaces__srv__SystemStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__srv__SystemStatus_Response __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SystemStatus_Response_
{
  using Type = SystemStatus_Response_<ContainerAllocator>;

  explicit SystemStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->returnsuccess = 0;
    }
  }

  explicit SystemStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->returnsuccess = 0;
    }
  }

  // field types and members
  using _returnsuccess_type =
    int8_t;
  _returnsuccess_type returnsuccess;

  // setters for named parameter idiom
  Type & set__returnsuccess(
    const int8_t & _arg)
  {
    this->returnsuccess = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__SystemStatus_Response
    std::shared_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__SystemStatus_Response
    std::shared_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemStatus_Response_ & other) const
  {
    if (this->returnsuccess != other.returnsuccess) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemStatus_Response_

// alias to use template instance with default allocator
using SystemStatus_Response =
  v2_robot_arm_interfaces::srv::SystemStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace v2_robot_arm_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2_robot_arm_interfaces__srv__SystemStatus_Event __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__srv__SystemStatus_Event __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SystemStatus_Event_
{
  using Type = SystemStatus_Event_<ContainerAllocator>;

  explicit SystemStatus_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SystemStatus_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2_robot_arm_interfaces::srv::SystemStatus_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2_robot_arm_interfaces::srv::SystemStatus_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::srv::SystemStatus_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::srv::SystemStatus_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::SystemStatus_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::SystemStatus_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__SystemStatus_Event
    std::shared_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__SystemStatus_Event
    std::shared_ptr<v2_robot_arm_interfaces::srv::SystemStatus_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemStatus_Event_ & other) const
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
  bool operator!=(const SystemStatus_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemStatus_Event_

// alias to use template instance with default allocator
using SystemStatus_Event =
  v2_robot_arm_interfaces::srv::SystemStatus_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace v2_robot_arm_interfaces
{

namespace srv
{

struct SystemStatus
{
  using Request = v2_robot_arm_interfaces::srv::SystemStatus_Request;
  using Response = v2_robot_arm_interfaces::srv::SystemStatus_Response;
  using Event = v2_robot_arm_interfaces::srv::SystemStatus_Event;
};

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
