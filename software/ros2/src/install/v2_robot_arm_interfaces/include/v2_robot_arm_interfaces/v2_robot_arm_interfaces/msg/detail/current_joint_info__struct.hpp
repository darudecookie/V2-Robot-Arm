// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2_robot_arm_interfaces:msg/CurrentJointInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/current_joint_info.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CURRENT_JOINT_INFO__STRUCT_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CURRENT_JOINT_INFO__STRUCT_HPP_

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
# define DEPRECATED__v2_robot_arm_interfaces__msg__CurrentJointInfo __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__msg__CurrentJointInfo __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CurrentJointInfo_
{
  using Type = CurrentJointInfo_<ContainerAllocator>;

  explicit CurrentJointInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 7>::iterator, float>(this->current_joint_positions.begin(), this->current_joint_positions.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->current_joint_velocity.begin(), this->current_joint_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->current_joint_acceleration.begin(), this->current_joint_acceleration.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->current_joint_jerks.begin(), this->current_joint_jerks.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->current_joint_torques.begin(), this->current_joint_torques.end(), 0.0f);
    }
  }

  explicit CurrentJointInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    current_joint_positions(_alloc),
    current_joint_velocity(_alloc),
    current_joint_acceleration(_alloc),
    current_joint_jerks(_alloc),
    current_joint_torques(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 7>::iterator, float>(this->current_joint_positions.begin(), this->current_joint_positions.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->current_joint_velocity.begin(), this->current_joint_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->current_joint_acceleration.begin(), this->current_joint_acceleration.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->current_joint_jerks.begin(), this->current_joint_jerks.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->current_joint_torques.begin(), this->current_joint_torques.end(), 0.0f);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _current_joint_positions_type =
    std::array<float, 7>;
  _current_joint_positions_type current_joint_positions;
  using _current_joint_velocity_type =
    std::array<float, 7>;
  _current_joint_velocity_type current_joint_velocity;
  using _current_joint_acceleration_type =
    std::array<float, 7>;
  _current_joint_acceleration_type current_joint_acceleration;
  using _current_joint_jerks_type =
    std::array<float, 7>;
  _current_joint_jerks_type current_joint_jerks;
  using _current_joint_torques_type =
    std::array<float, 7>;
  _current_joint_torques_type current_joint_torques;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__current_joint_positions(
    const std::array<float, 7> & _arg)
  {
    this->current_joint_positions = _arg;
    return *this;
  }
  Type & set__current_joint_velocity(
    const std::array<float, 7> & _arg)
  {
    this->current_joint_velocity = _arg;
    return *this;
  }
  Type & set__current_joint_acceleration(
    const std::array<float, 7> & _arg)
  {
    this->current_joint_acceleration = _arg;
    return *this;
  }
  Type & set__current_joint_jerks(
    const std::array<float, 7> & _arg)
  {
    this->current_joint_jerks = _arg;
    return *this;
  }
  Type & set__current_joint_torques(
    const std::array<float, 7> & _arg)
  {
    this->current_joint_torques = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::msg::CurrentJointInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::msg::CurrentJointInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::msg::CurrentJointInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::msg::CurrentJointInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::msg::CurrentJointInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::msg::CurrentJointInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::msg::CurrentJointInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::msg::CurrentJointInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::msg::CurrentJointInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::msg::CurrentJointInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__msg__CurrentJointInfo
    std::shared_ptr<v2_robot_arm_interfaces::msg::CurrentJointInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__msg__CurrentJointInfo
    std::shared_ptr<v2_robot_arm_interfaces::msg::CurrentJointInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CurrentJointInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->current_joint_positions != other.current_joint_positions) {
      return false;
    }
    if (this->current_joint_velocity != other.current_joint_velocity) {
      return false;
    }
    if (this->current_joint_acceleration != other.current_joint_acceleration) {
      return false;
    }
    if (this->current_joint_jerks != other.current_joint_jerks) {
      return false;
    }
    if (this->current_joint_torques != other.current_joint_torques) {
      return false;
    }
    return true;
  }
  bool operator!=(const CurrentJointInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CurrentJointInfo_

// alias to use template instance with default allocator
using CurrentJointInfo =
  v2_robot_arm_interfaces::msg::CurrentJointInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CURRENT_JOINT_INFO__STRUCT_HPP_
