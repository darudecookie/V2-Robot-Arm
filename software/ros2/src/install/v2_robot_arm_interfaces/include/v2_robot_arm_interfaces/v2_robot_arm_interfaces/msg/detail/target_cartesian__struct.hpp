// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2_robot_arm_interfaces:msg/TargetCartesian.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/target_cartesian.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_CARTESIAN__STRUCT_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_CARTESIAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2_robot_arm_interfaces__msg__TargetCartesian __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__msg__TargetCartesian __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetCartesian_
{
  using Type = TargetCartesian_<ContainerAllocator>;

  explicit TargetCartesian_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->rotation.begin(), this->rotation.end(), 0.0f);
    }
  }

  explicit TargetCartesian_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc),
    rotation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->rotation.begin(), this->rotation.end(), 0.0f);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    std::array<float, 3>;
  _position_type position;
  using _rotation_type =
    std::array<float, 3>;
  _rotation_type rotation;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const std::array<float, 3> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__rotation(
    const std::array<float, 3> & _arg)
  {
    this->rotation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::msg::TargetCartesian_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::msg::TargetCartesian_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::msg::TargetCartesian_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::msg::TargetCartesian_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::msg::TargetCartesian_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::msg::TargetCartesian_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::msg::TargetCartesian_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::msg::TargetCartesian_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::msg::TargetCartesian_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::msg::TargetCartesian_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__msg__TargetCartesian
    std::shared_ptr<v2_robot_arm_interfaces::msg::TargetCartesian_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__msg__TargetCartesian
    std::shared_ptr<v2_robot_arm_interfaces::msg::TargetCartesian_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetCartesian_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetCartesian_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetCartesian_

// alias to use template instance with default allocator
using TargetCartesian =
  v2_robot_arm_interfaces::msg::TargetCartesian_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_CARTESIAN__STRUCT_HPP_
