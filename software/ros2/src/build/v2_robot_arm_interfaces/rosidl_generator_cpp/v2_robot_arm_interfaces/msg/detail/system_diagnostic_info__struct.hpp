// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2_robot_arm_interfaces:msg/SystemDiagnosticInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/system_diagnostic_info.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__SYSTEM_DIAGNOSTIC_INFO__STRUCT_HPP_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__SYSTEM_DIAGNOSTIC_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2_robot_arm_interfaces__msg__SystemDiagnosticInfo __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__msg__SystemDiagnosticInfo __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemDiagnosticInfo_
{
  using Type = SystemDiagnosticInfo_<ContainerAllocator>;

  explicit SystemDiagnosticInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->estop = 0;
      this->jointhold = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->estop = 0;
      this->jointhold = 0;
    }
  }

  explicit SystemDiagnosticInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->estop = 0;
      this->jointhold = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->estop = 0;
      this->jointhold = 0;
    }
  }

  // field types and members
  using _estop_type =
    int8_t;
  _estop_type estop;
  using _jointhold_type =
    int8_t;
  _jointhold_type jointhold;
  using _temperatures_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _temperatures_type temperatures;

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
  Type & set__temperatures(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->temperatures = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::msg::SystemDiagnosticInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::msg::SystemDiagnosticInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::msg::SystemDiagnosticInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::msg::SystemDiagnosticInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__msg__SystemDiagnosticInfo
    std::shared_ptr<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__msg__SystemDiagnosticInfo
    std::shared_ptr<v2_robot_arm_interfaces::msg::SystemDiagnosticInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemDiagnosticInfo_ & other) const
  {
    if (this->estop != other.estop) {
      return false;
    }
    if (this->jointhold != other.jointhold) {
      return false;
    }
    if (this->temperatures != other.temperatures) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemDiagnosticInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemDiagnosticInfo_

// alias to use template instance with default allocator
using SystemDiagnosticInfo =
  v2_robot_arm_interfaces::msg::SystemDiagnosticInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__SYSTEM_DIAGNOSTIC_INFO__STRUCT_HPP_
