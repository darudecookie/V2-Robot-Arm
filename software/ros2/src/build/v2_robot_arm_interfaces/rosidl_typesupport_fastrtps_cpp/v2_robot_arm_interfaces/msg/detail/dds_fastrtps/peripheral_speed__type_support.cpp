// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2_robot_arm_interfaces:msg/PeripheralSpeed.idl
// generated code does not contain a copyright notice
#include "v2_robot_arm_interfaces/msg/detail/peripheral_speed__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2_robot_arm_interfaces/msg/detail/peripheral_speed__functions.h"
#include "v2_robot_arm_interfaces/msg/detail/peripheral_speed__struct.hpp"

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
  const v2_robot_arm_interfaces::msg::PeripheralSpeed & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: translation_speed
  cdr << ros_message.translation_speed;

  // Member: rotation_speed
  cdr << ros_message.rotation_speed;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2_robot_arm_interfaces::msg::PeripheralSpeed & ros_message)
{
  // Member: translation_speed
  cdr >> ros_message.translation_speed;

  // Member: rotation_speed
  cdr >> ros_message.rotation_speed;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
get_serialized_size(
  const v2_robot_arm_interfaces::msg::PeripheralSpeed & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: translation_speed
  {
    size_t item_size = sizeof(ros_message.translation_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rotation_speed
  {
    size_t item_size = sizeof(ros_message.rotation_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
max_serialized_size_PeripheralSpeed(
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

  // Member: translation_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: rotation_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2_robot_arm_interfaces::msg::PeripheralSpeed;
    is_plain =
      (
      offsetof(DataType, rotation_speed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_serialize_key(
  const v2_robot_arm_interfaces::msg::PeripheralSpeed & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: translation_speed
  cdr << ros_message.translation_speed;

  // Member: rotation_speed
  cdr << ros_message.rotation_speed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
get_serialized_size_key(
  const v2_robot_arm_interfaces::msg::PeripheralSpeed & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: translation_speed
  {
    size_t item_size = sizeof(ros_message.translation_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rotation_speed
  {
    size_t item_size = sizeof(ros_message.rotation_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
max_serialized_size_key_PeripheralSpeed(
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

  // Member: translation_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rotation_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2_robot_arm_interfaces::msg::PeripheralSpeed;
    is_plain =
      (
      offsetof(DataType, rotation_speed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _PeripheralSpeed__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2_robot_arm_interfaces::msg::PeripheralSpeed *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PeripheralSpeed__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2_robot_arm_interfaces::msg::PeripheralSpeed *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PeripheralSpeed__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2_robot_arm_interfaces::msg::PeripheralSpeed *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PeripheralSpeed__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PeripheralSpeed(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PeripheralSpeed__callbacks = {
  "v2_robot_arm_interfaces::msg",
  "PeripheralSpeed",
  _PeripheralSpeed__cdr_serialize,
  _PeripheralSpeed__cdr_deserialize,
  _PeripheralSpeed__get_serialized_size,
  _PeripheralSpeed__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PeripheralSpeed__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PeripheralSpeed__callbacks,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__msg__PeripheralSpeed__get_type_hash,
  &v2_robot_arm_interfaces__msg__PeripheralSpeed__get_type_description,
  &v2_robot_arm_interfaces__msg__PeripheralSpeed__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::msg::PeripheralSpeed>()
{
  return &v2_robot_arm_interfaces::msg::typesupport_fastrtps_cpp::_PeripheralSpeed__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, msg, PeripheralSpeed)() {
  return &v2_robot_arm_interfaces::msg::typesupport_fastrtps_cpp::_PeripheralSpeed__handle;
}

#ifdef __cplusplus
}
#endif
