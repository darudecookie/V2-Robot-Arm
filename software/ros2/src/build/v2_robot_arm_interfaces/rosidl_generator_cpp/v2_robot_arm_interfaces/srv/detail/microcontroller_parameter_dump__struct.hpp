// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2_robot_arm_interfaces:srv/MicrocontrollerParameterDump.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/microcontroller_parameter_dump.hpp"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__STRUCT_HPP_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MicrocontrollerParameterDump_Request_
{
  using Type = MicrocontrollerParameterDump_Request_<ContainerAllocator>;

  explicit MicrocontrollerParameterDump_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->joint_position_limit_update_target = -10;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_position_limit_update_params.begin(), this->joint_position_limit_update_params.end(), 0.0f);
      this->joint_velocity_limit_update_target = -10;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_velocity_limit_update_params.begin(), this->joint_velocity_limit_update_params.end(), 0.0f);
      this->joint_torque_limit_update_target = -10;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_torque_limit_update_params.begin(), this->joint_torque_limit_update_params.end(), 0.0f);
      this->joint_acceleration_limit_update_target = -10;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_acceleration_limit_update_params.begin(), this->joint_acceleration_limit_update_params.end(), 0.0f);
      this->joint_jerk_limit_update_target = -10;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_jerk_limit_update_params.begin(), this->joint_jerk_limit_update_params.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->x_workspace_bounds.begin(), this->x_workspace_bounds.end(), -1.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->y_workspace_bounds.begin(), this->y_workspace_bounds.end(), -1.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->z_workspace_bounds.begin(), this->z_workspace_bounds.end(), -1.0f);
      this->pid_update_target = -10;
      std::fill<typename std::array<float, 3>::iterator, float>(this->pid_update_params.begin(), this->pid_update_params.end(), -1.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->joint_home_positions.begin(), this->joint_home_positions.end(), -100.0f);
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->joint_position_limit_update_target = 0;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_position_limit_update_params.begin(), this->joint_position_limit_update_params.end(), 0.0f);
      this->joint_velocity_limit_update_target = 0;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_velocity_limit_update_params.begin(), this->joint_velocity_limit_update_params.end(), 0.0f);
      this->joint_torque_limit_update_target = 0;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_torque_limit_update_params.begin(), this->joint_torque_limit_update_params.end(), 0.0f);
      this->joint_acceleration_limit_update_target = 0;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_acceleration_limit_update_params.begin(), this->joint_acceleration_limit_update_params.end(), 0.0f);
      this->joint_jerk_limit_update_target = 0;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_jerk_limit_update_params.begin(), this->joint_jerk_limit_update_params.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->x_workspace_bounds.begin(), this->x_workspace_bounds.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->y_workspace_bounds.begin(), this->y_workspace_bounds.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->z_workspace_bounds.begin(), this->z_workspace_bounds.end(), 0.0f);
      this->pid_update_target = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->pid_update_params.begin(), this->pid_update_params.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->joint_home_positions.begin(), this->joint_home_positions.end(), 0.0f);
    }
  }

  explicit MicrocontrollerParameterDump_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_position_limit_update_params(_alloc),
    joint_velocity_limit_update_params(_alloc),
    joint_torque_limit_update_params(_alloc),
    joint_acceleration_limit_update_params(_alloc),
    joint_jerk_limit_update_params(_alloc),
    x_workspace_bounds(_alloc),
    y_workspace_bounds(_alloc),
    z_workspace_bounds(_alloc),
    pid_update_params(_alloc),
    joint_home_positions(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->joint_position_limit_update_target = -10;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_position_limit_update_params.begin(), this->joint_position_limit_update_params.end(), 0.0f);
      this->joint_velocity_limit_update_target = -10;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_velocity_limit_update_params.begin(), this->joint_velocity_limit_update_params.end(), 0.0f);
      this->joint_torque_limit_update_target = -10;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_torque_limit_update_params.begin(), this->joint_torque_limit_update_params.end(), 0.0f);
      this->joint_acceleration_limit_update_target = -10;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_acceleration_limit_update_params.begin(), this->joint_acceleration_limit_update_params.end(), 0.0f);
      this->joint_jerk_limit_update_target = -10;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_jerk_limit_update_params.begin(), this->joint_jerk_limit_update_params.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->x_workspace_bounds.begin(), this->x_workspace_bounds.end(), -1.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->y_workspace_bounds.begin(), this->y_workspace_bounds.end(), -1.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->z_workspace_bounds.begin(), this->z_workspace_bounds.end(), -1.0f);
      this->pid_update_target = -10;
      std::fill<typename std::array<float, 3>::iterator, float>(this->pid_update_params.begin(), this->pid_update_params.end(), -1.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->joint_home_positions.begin(), this->joint_home_positions.end(), -100.0f);
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->joint_position_limit_update_target = 0;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_position_limit_update_params.begin(), this->joint_position_limit_update_params.end(), 0.0f);
      this->joint_velocity_limit_update_target = 0;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_velocity_limit_update_params.begin(), this->joint_velocity_limit_update_params.end(), 0.0f);
      this->joint_torque_limit_update_target = 0;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_torque_limit_update_params.begin(), this->joint_torque_limit_update_params.end(), 0.0f);
      this->joint_acceleration_limit_update_target = 0;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_acceleration_limit_update_params.begin(), this->joint_acceleration_limit_update_params.end(), 0.0f);
      this->joint_jerk_limit_update_target = 0;
      std::fill<typename std::array<float, 2>::iterator, float>(this->joint_jerk_limit_update_params.begin(), this->joint_jerk_limit_update_params.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->x_workspace_bounds.begin(), this->x_workspace_bounds.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->y_workspace_bounds.begin(), this->y_workspace_bounds.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->z_workspace_bounds.begin(), this->z_workspace_bounds.end(), 0.0f);
      this->pid_update_target = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->pid_update_params.begin(), this->pid_update_params.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->joint_home_positions.begin(), this->joint_home_positions.end(), 0.0f);
    }
  }

  // field types and members
  using _joint_position_limit_update_target_type =
    int16_t;
  _joint_position_limit_update_target_type joint_position_limit_update_target;
  using _joint_position_limit_update_params_type =
    std::array<float, 2>;
  _joint_position_limit_update_params_type joint_position_limit_update_params;
  using _joint_velocity_limit_update_target_type =
    int16_t;
  _joint_velocity_limit_update_target_type joint_velocity_limit_update_target;
  using _joint_velocity_limit_update_params_type =
    std::array<float, 2>;
  _joint_velocity_limit_update_params_type joint_velocity_limit_update_params;
  using _joint_torque_limit_update_target_type =
    int16_t;
  _joint_torque_limit_update_target_type joint_torque_limit_update_target;
  using _joint_torque_limit_update_params_type =
    std::array<float, 2>;
  _joint_torque_limit_update_params_type joint_torque_limit_update_params;
  using _joint_acceleration_limit_update_target_type =
    int16_t;
  _joint_acceleration_limit_update_target_type joint_acceleration_limit_update_target;
  using _joint_acceleration_limit_update_params_type =
    std::array<float, 2>;
  _joint_acceleration_limit_update_params_type joint_acceleration_limit_update_params;
  using _joint_jerk_limit_update_target_type =
    int16_t;
  _joint_jerk_limit_update_target_type joint_jerk_limit_update_target;
  using _joint_jerk_limit_update_params_type =
    std::array<float, 2>;
  _joint_jerk_limit_update_params_type joint_jerk_limit_update_params;
  using _x_workspace_bounds_type =
    std::array<float, 2>;
  _x_workspace_bounds_type x_workspace_bounds;
  using _y_workspace_bounds_type =
    std::array<float, 2>;
  _y_workspace_bounds_type y_workspace_bounds;
  using _z_workspace_bounds_type =
    std::array<float, 2>;
  _z_workspace_bounds_type z_workspace_bounds;
  using _pid_update_target_type =
    int16_t;
  _pid_update_target_type pid_update_target;
  using _pid_update_params_type =
    std::array<float, 3>;
  _pid_update_params_type pid_update_params;
  using _joint_home_positions_type =
    std::array<float, 7>;
  _joint_home_positions_type joint_home_positions;

  // setters for named parameter idiom
  Type & set__joint_position_limit_update_target(
    const int16_t & _arg)
  {
    this->joint_position_limit_update_target = _arg;
    return *this;
  }
  Type & set__joint_position_limit_update_params(
    const std::array<float, 2> & _arg)
  {
    this->joint_position_limit_update_params = _arg;
    return *this;
  }
  Type & set__joint_velocity_limit_update_target(
    const int16_t & _arg)
  {
    this->joint_velocity_limit_update_target = _arg;
    return *this;
  }
  Type & set__joint_velocity_limit_update_params(
    const std::array<float, 2> & _arg)
  {
    this->joint_velocity_limit_update_params = _arg;
    return *this;
  }
  Type & set__joint_torque_limit_update_target(
    const int16_t & _arg)
  {
    this->joint_torque_limit_update_target = _arg;
    return *this;
  }
  Type & set__joint_torque_limit_update_params(
    const std::array<float, 2> & _arg)
  {
    this->joint_torque_limit_update_params = _arg;
    return *this;
  }
  Type & set__joint_acceleration_limit_update_target(
    const int16_t & _arg)
  {
    this->joint_acceleration_limit_update_target = _arg;
    return *this;
  }
  Type & set__joint_acceleration_limit_update_params(
    const std::array<float, 2> & _arg)
  {
    this->joint_acceleration_limit_update_params = _arg;
    return *this;
  }
  Type & set__joint_jerk_limit_update_target(
    const int16_t & _arg)
  {
    this->joint_jerk_limit_update_target = _arg;
    return *this;
  }
  Type & set__joint_jerk_limit_update_params(
    const std::array<float, 2> & _arg)
  {
    this->joint_jerk_limit_update_params = _arg;
    return *this;
  }
  Type & set__x_workspace_bounds(
    const std::array<float, 2> & _arg)
  {
    this->x_workspace_bounds = _arg;
    return *this;
  }
  Type & set__y_workspace_bounds(
    const std::array<float, 2> & _arg)
  {
    this->y_workspace_bounds = _arg;
    return *this;
  }
  Type & set__z_workspace_bounds(
    const std::array<float, 2> & _arg)
  {
    this->z_workspace_bounds = _arg;
    return *this;
  }
  Type & set__pid_update_target(
    const int16_t & _arg)
  {
    this->pid_update_target = _arg;
    return *this;
  }
  Type & set__pid_update_params(
    const std::array<float, 3> & _arg)
  {
    this->pid_update_params = _arg;
    return *this;
  }
  Type & set__joint_home_positions(
    const std::array<float, 7> & _arg)
  {
    this->joint_home_positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request
    std::shared_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request
    std::shared_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MicrocontrollerParameterDump_Request_ & other) const
  {
    if (this->joint_position_limit_update_target != other.joint_position_limit_update_target) {
      return false;
    }
    if (this->joint_position_limit_update_params != other.joint_position_limit_update_params) {
      return false;
    }
    if (this->joint_velocity_limit_update_target != other.joint_velocity_limit_update_target) {
      return false;
    }
    if (this->joint_velocity_limit_update_params != other.joint_velocity_limit_update_params) {
      return false;
    }
    if (this->joint_torque_limit_update_target != other.joint_torque_limit_update_target) {
      return false;
    }
    if (this->joint_torque_limit_update_params != other.joint_torque_limit_update_params) {
      return false;
    }
    if (this->joint_acceleration_limit_update_target != other.joint_acceleration_limit_update_target) {
      return false;
    }
    if (this->joint_acceleration_limit_update_params != other.joint_acceleration_limit_update_params) {
      return false;
    }
    if (this->joint_jerk_limit_update_target != other.joint_jerk_limit_update_target) {
      return false;
    }
    if (this->joint_jerk_limit_update_params != other.joint_jerk_limit_update_params) {
      return false;
    }
    if (this->x_workspace_bounds != other.x_workspace_bounds) {
      return false;
    }
    if (this->y_workspace_bounds != other.y_workspace_bounds) {
      return false;
    }
    if (this->z_workspace_bounds != other.z_workspace_bounds) {
      return false;
    }
    if (this->pid_update_target != other.pid_update_target) {
      return false;
    }
    if (this->pid_update_params != other.pid_update_params) {
      return false;
    }
    if (this->joint_home_positions != other.joint_home_positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const MicrocontrollerParameterDump_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MicrocontrollerParameterDump_Request_

// alias to use template instance with default allocator
using MicrocontrollerParameterDump_Request =
  v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace v2_robot_arm_interfaces


#ifndef _WIN32
# define DEPRECATED__v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MicrocontrollerParameterDump_Response_
{
  using Type = MicrocontrollerParameterDump_Response_<ContainerAllocator>;

  explicit MicrocontrollerParameterDump_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->returnsuccess = 0;
    }
  }

  explicit MicrocontrollerParameterDump_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response
    std::shared_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response
    std::shared_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MicrocontrollerParameterDump_Response_ & other) const
  {
    if (this->returnsuccess != other.returnsuccess) {
      return false;
    }
    return true;
  }
  bool operator!=(const MicrocontrollerParameterDump_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MicrocontrollerParameterDump_Response_

// alias to use template instance with default allocator
using MicrocontrollerParameterDump_Response =
  v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace v2_robot_arm_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event __attribute__((deprecated))
#else
# define DEPRECATED__v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event __declspec(deprecated)
#endif

namespace v2_robot_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MicrocontrollerParameterDump_Event_
{
  using Type = MicrocontrollerParameterDump_Event_<ContainerAllocator>;

  explicit MicrocontrollerParameterDump_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MicrocontrollerParameterDump_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event
    std::shared_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event
    std::shared_ptr<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MicrocontrollerParameterDump_Event_ & other) const
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
  bool operator!=(const MicrocontrollerParameterDump_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MicrocontrollerParameterDump_Event_

// alias to use template instance with default allocator
using MicrocontrollerParameterDump_Event =
  v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace v2_robot_arm_interfaces
{

namespace srv
{

struct MicrocontrollerParameterDump
{
  using Request = v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request;
  using Response = v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response;
  using Event = v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event;
};

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__MICROCONTROLLER_PARAMETER_DUMP__STRUCT_HPP_
