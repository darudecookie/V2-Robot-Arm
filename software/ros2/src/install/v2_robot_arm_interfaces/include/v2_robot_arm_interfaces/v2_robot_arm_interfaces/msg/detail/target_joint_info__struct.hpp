// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2_robot_arm_interfaces:msg/TargetJointInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/target_joint_info.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_JOINT_INFO__STRUCT_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_JOINT_INFO__STRUCT_HPP_

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
# define DEPRECATED__v2_robot_arm_interfaces__msg__TargetJointInfo __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__msg__TargetJointInfo __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetJointInfo_
{
  using Type = TargetJointInfo_<ContainerAllocator>;

  explicit TargetJointInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->param_to_control = 0;
      std::fill<typename std::array<float, 7>::iterator, float>(this->target_joint_positions.begin(), this->target_joint_positions.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->target_joint_velocities.begin(), this->target_joint_velocities.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->target_joint_torques.begin(), this->target_joint_torques.end(), 0.0f);
    }
  }

  explicit TargetJointInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    target_joint_positions(_alloc),
    target_joint_velocities(_alloc),
    target_joint_torques(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->param_to_control = 0;
      std::fill<typename std::array<float, 7>::iterator, float>(this->target_joint_positions.begin(), this->target_joint_positions.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->target_joint_velocities.begin(), this->target_joint_velocities.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->target_joint_torques.begin(), this->target_joint_torques.end(), 0.0f);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _param_to_control_type =
    int16_t;
  _param_to_control_type param_to_control;
  using _target_joint_positions_type =
    std::array<float, 7>;
  _target_joint_positions_type target_joint_positions;
  using _target_joint_velocities_type =
    std::array<float, 7>;
  _target_joint_velocities_type target_joint_velocities;
  using _target_joint_torques_type =
    std::array<float, 7>;
  _target_joint_torques_type target_joint_torques;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__param_to_control(
    const int16_t & _arg)
  {
    this->param_to_control = _arg;
    return *this;
  }
  Type & set__target_joint_positions(
    const std::array<float, 7> & _arg)
  {
    this->target_joint_positions = _arg;
    return *this;
  }
  Type & set__target_joint_velocities(
    const std::array<float, 7> & _arg)
  {
    this->target_joint_velocities = _arg;
    return *this;
  }
  Type & set__target_joint_torques(
    const std::array<float, 7> & _arg)
  {
    this->target_joint_torques = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::msg::TargetJointInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::msg::TargetJointInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::msg::TargetJointInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::msg::TargetJointInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::msg::TargetJointInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::msg::TargetJointInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::msg::TargetJointInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::msg::TargetJointInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::msg::TargetJointInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::msg::TargetJointInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__msg__TargetJointInfo
    std::shared_ptr<v2_robot_arm_interfaces::msg::TargetJointInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__msg__TargetJointInfo
    std::shared_ptr<v2_robot_arm_interfaces::msg::TargetJointInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetJointInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->param_to_control != other.param_to_control) {
      return false;
    }
    if (this->target_joint_positions != other.target_joint_positions) {
      return false;
    }
    if (this->target_joint_velocities != other.target_joint_velocities) {
      return false;
    }
    if (this->target_joint_torques != other.target_joint_torques) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetJointInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetJointInfo_

// alias to use template instance with default allocator
using TargetJointInfo =
  v2_robot_arm_interfaces::msg::TargetJointInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_JOINT_INFO__STRUCT_HPP_
