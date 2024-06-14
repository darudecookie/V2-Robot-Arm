// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2_robot_arm_interfaces:msg/ControlStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/control_status.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CONTROL_STATUS__STRUCT_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CONTROL_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2_robot_arm_interfaces__msg__ControlStatus __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__msg__ControlStatus __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlStatus_
{
  using Type = ControlStatus_<ContainerAllocator>;

  explicit ControlStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->trajectory_controller = 0;
      this->ik_solver = 1;
      this->peripheral_interface = 0;
      this->master_controller = 1;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->trajectory_controller = 0;
      this->ik_solver = 0;
      this->peripheral_interface = 0;
      this->master_controller = 0;
    }
  }

  explicit ControlStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->trajectory_controller = 0;
      this->ik_solver = 1;
      this->peripheral_interface = 0;
      this->master_controller = 1;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->trajectory_controller = 0;
      this->ik_solver = 0;
      this->peripheral_interface = 0;
      this->master_controller = 0;
    }
  }

  // field types and members
  using _trajectory_controller_type =
    int8_t;
  _trajectory_controller_type trajectory_controller;
  using _ik_solver_type =
    int8_t;
  _ik_solver_type ik_solver;
  using _peripheral_interface_type =
    int8_t;
  _peripheral_interface_type peripheral_interface;
  using _master_controller_type =
    int8_t;
  _master_controller_type master_controller;

  // setters for named parameter idiom
  Type & set__trajectory_controller(
    const int8_t & _arg)
  {
    this->trajectory_controller = _arg;
    return *this;
  }
  Type & set__ik_solver(
    const int8_t & _arg)
  {
    this->ik_solver = _arg;
    return *this;
  }
  Type & set__peripheral_interface(
    const int8_t & _arg)
  {
    this->peripheral_interface = _arg;
    return *this;
  }
  Type & set__master_controller(
    const int8_t & _arg)
  {
    this->master_controller = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::msg::ControlStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::msg::ControlStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::msg::ControlStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::msg::ControlStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::msg::ControlStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::msg::ControlStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::msg::ControlStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::msg::ControlStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::msg::ControlStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::msg::ControlStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__msg__ControlStatus
    std::shared_ptr<v2_robot_arm_interfaces::msg::ControlStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__msg__ControlStatus
    std::shared_ptr<v2_robot_arm_interfaces::msg::ControlStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlStatus_ & other) const
  {
    if (this->trajectory_controller != other.trajectory_controller) {
      return false;
    }
    if (this->ik_solver != other.ik_solver) {
      return false;
    }
    if (this->peripheral_interface != other.peripheral_interface) {
      return false;
    }
    if (this->master_controller != other.master_controller) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlStatus_

// alias to use template instance with default allocator
using ControlStatus =
  v2_robot_arm_interfaces::msg::ControlStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__CONTROL_STATUS__STRUCT_HPP_
