// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2_robot_arm_interfaces:msg/PeripheralSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/peripheral_speed.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__PERIPHERAL_SPEED__STRUCT_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__PERIPHERAL_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2_robot_arm_interfaces__msg__PeripheralSpeed __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__msg__PeripheralSpeed __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PeripheralSpeed_
{
  using Type = PeripheralSpeed_<ContainerAllocator>;

  explicit PeripheralSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->translation_speed = 10.0f;
      this->rotation_speed = 0.523599f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->translation_speed = 0.0f;
      this->rotation_speed = 0.0f;
    }
  }

  explicit PeripheralSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->translation_speed = 10.0f;
      this->rotation_speed = 0.523599f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->translation_speed = 0.0f;
      this->rotation_speed = 0.0f;
    }
  }

  // field types and members
  using _translation_speed_type =
    float;
  _translation_speed_type translation_speed;
  using _rotation_speed_type =
    float;
  _rotation_speed_type rotation_speed;

  // setters for named parameter idiom
  Type & set__translation_speed(
    const float & _arg)
  {
    this->translation_speed = _arg;
    return *this;
  }
  Type & set__rotation_speed(
    const float & _arg)
  {
    this->rotation_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::msg::PeripheralSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::msg::PeripheralSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::msg::PeripheralSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::msg::PeripheralSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::msg::PeripheralSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::msg::PeripheralSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::msg::PeripheralSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::msg::PeripheralSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::msg::PeripheralSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::msg::PeripheralSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__msg__PeripheralSpeed
    std::shared_ptr<v2_robot_arm_interfaces::msg::PeripheralSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__msg__PeripheralSpeed
    std::shared_ptr<v2_robot_arm_interfaces::msg::PeripheralSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PeripheralSpeed_ & other) const
  {
    if (this->translation_speed != other.translation_speed) {
      return false;
    }
    if (this->rotation_speed != other.rotation_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const PeripheralSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PeripheralSpeed_

// alias to use template instance with default allocator
using PeripheralSpeed =
  v2_robot_arm_interfaces::msg::PeripheralSpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__PERIPHERAL_SPEED__STRUCT_HPP_
