// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2_robot_arm_interfaces:msg/ControlStatus.idl
// generated code does not contain a copyright notice
#include "v2_robot_arm_interfaces/msg/detail/control_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2_robot_arm_interfaces/msg/detail/control_status__functions.h"
#include "v2_robot_arm_interfaces/msg/detail/control_status__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace v2_robot_arm_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_serialize(
  const v2_robot_arm_interfaces::msg::ControlStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: trajectory_controller
  cdr << ros_message.trajectory_controller;

  // Member: ik_solver
  cdr << ros_message.ik_solver;

  // Member: peripheral_interface
  cdr << ros_message.peripheral_interface;

  // Member: master_controller
  cdr << ros_message.master_controller;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2_robot_arm_interfaces::msg::ControlStatus & ros_message)
{
  // Member: trajectory_controller
  cdr >> ros_message.trajectory_controller;

  // Member: ik_solver
  cdr >> ros_message.ik_solver;

  // Member: peripheral_interface
  cdr >> ros_message.peripheral_interface;

  // Member: master_controller
  cdr >> ros_message.master_controller;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
get_serialized_size(
  const v2_robot_arm_interfaces::msg::ControlStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: trajectory_controller
  {
    size_t item_size = sizeof(ros_message.trajectory_controller);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ik_solver
  {
    size_t item_size = sizeof(ros_message.ik_solver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: peripheral_interface
  {
    size_t item_size = sizeof(ros_message.peripheral_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: master_controller
  {
    size_t item_size = sizeof(ros_message.master_controller);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
max_serialized_size_ControlStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: trajectory_controller
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: ik_solver
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: peripheral_interface
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: master_controller
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2_robot_arm_interfaces::msg::ControlStatus;
    is_plain =
      (
      offsetof(DataType, master_controller) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_serialize_key(
  const v2_robot_arm_interfaces::msg::ControlStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: trajectory_controller
  cdr << ros_message.trajectory_controller;

  // Member: ik_solver
  cdr << ros_message.ik_solver;

  // Member: peripheral_interface
  cdr << ros_message.peripheral_interface;

  // Member: master_controller
  cdr << ros_message.master_controller;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
get_serialized_size_key(
  const v2_robot_arm_interfaces::msg::ControlStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: trajectory_controller
  {
    size_t item_size = sizeof(ros_message.trajectory_controller);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ik_solver
  {
    size_t item_size = sizeof(ros_message.ik_solver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: peripheral_interface
  {
    size_t item_size = sizeof(ros_message.peripheral_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: master_controller
  {
    size_t item_size = sizeof(ros_message.master_controller);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
max_serialized_size_key_ControlStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: trajectory_controller
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ik_solver
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: peripheral_interface
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: master_controller
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2_robot_arm_interfaces::msg::ControlStatus;
    is_plain =
      (
      offsetof(DataType, master_controller) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _ControlStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2_robot_arm_interfaces::msg::ControlStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControlStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2_robot_arm_interfaces::msg::ControlStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControlStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2_robot_arm_interfaces::msg::ControlStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControlStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControlStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControlStatus__callbacks = {
  "v2_robot_arm_interfaces::msg",
  "ControlStatus",
  _ControlStatus__cdr_serialize,
  _ControlStatus__cdr_deserialize,
  _ControlStatus__get_serialized_size,
  _ControlStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ControlStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControlStatus__callbacks,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__msg__ControlStatus__get_type_hash,
  &v2_robot_arm_interfaces__msg__ControlStatus__get_type_description,
  &v2_robot_arm_interfaces__msg__ControlStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::msg::ControlStatus>()
{
  return &v2_robot_arm_interfaces::msg::typesupport_fastrtps_cpp::_ControlStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, msg, ControlStatus)() {
  return &v2_robot_arm_interfaces::msg::typesupport_fastrtps_cpp::_ControlStatus__handle;
}

#ifdef __cplusplus
}
#endif
