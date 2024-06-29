// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2_robot_arm_interfaces:msg/PeripheralSpeed.idl
// generated code does not contain a copyright notice
#include "v2_robot_arm_interfaces/msg/detail/peripheral_speed__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2_robot_arm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2_robot_arm_interfaces/msg/detail/peripheral_speed__struct.h"
#include "v2_robot_arm_interfaces/msg/detail/peripheral_speed__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PeripheralSpeed__ros_msg_type = v2_robot_arm_interfaces__msg__PeripheralSpeed;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
bool cdr_serialize_v2_robot_arm_interfaces__msg__PeripheralSpeed(
  const v2_robot_arm_interfaces__msg__PeripheralSpeed * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: translation_speed
  {
    cdr << ros_message->translation_speed;
  }

  // Field name: rotation_speed
  {
    cdr << ros_message->rotation_speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
bool cdr_deserialize_v2_robot_arm_interfaces__msg__PeripheralSpeed(
  eprosima::fastcdr::Cdr & cdr,
  v2_robot_arm_interfaces__msg__PeripheralSpeed * ros_message)
{
  // Field name: translation_speed
  {
    cdr >> ros_message->translation_speed;
  }

  // Field name: rotation_speed
  {
    cdr >> ros_message->rotation_speed;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
size_t get_serialized_size_v2_robot_arm_interfaces__msg__PeripheralSpeed(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PeripheralSpeed__ros_msg_type * ros_message = static_cast<const _PeripheralSpeed__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: translation_speed
  {
    size_t item_size = sizeof(ros_message->translation_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rotation_speed
  {
    size_t item_size = sizeof(ros_message->rotation_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
size_t max_serialized_size_v2_robot_arm_interfaces__msg__PeripheralSpeed(
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

  // Field name: translation_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rotation_speed
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
    using DataType = v2_robot_arm_interfaces__msg__PeripheralSpeed;
    is_plain =
      (
      offsetof(DataType, rotation_speed) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
bool cdr_serialize_key_v2_robot_arm_interfaces__msg__PeripheralSpeed(
  const v2_robot_arm_interfaces__msg__PeripheralSpeed * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: translation_speed
  {
    cdr << ros_message->translation_speed;
  }

  // Field name: rotation_speed
  {
    cdr << ros_message->rotation_speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
size_t get_serialized_size_key_v2_robot_arm_interfaces__msg__PeripheralSpeed(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PeripheralSpeed__ros_msg_type * ros_message = static_cast<const _PeripheralSpeed__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: translation_speed
  {
    size_t item_size = sizeof(ros_message->translation_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rotation_speed
  {
    size_t item_size = sizeof(ros_message->rotation_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
size_t max_serialized_size_key_v2_robot_arm_interfaces__msg__PeripheralSpeed(
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
  // Field name: translation_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rotation_speed
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
    using DataType = v2_robot_arm_interfaces__msg__PeripheralSpeed;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const v2_robot_arm_interfaces__msg__PeripheralSpeed * ros_message = static_cast<const v2_robot_arm_interfaces__msg__PeripheralSpeed *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_v2_robot_arm_interfaces__msg__PeripheralSpeed(ros_message, cdr);
}

static bool _PeripheralSpeed__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  v2_robot_arm_interfaces__msg__PeripheralSpeed * ros_message = static_cast<v2_robot_arm_interfaces__msg__PeripheralSpeed *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_v2_robot_arm_interfaces__msg__PeripheralSpeed(cdr, ros_message);
}

static uint32_t _PeripheralSpeed__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2_robot_arm_interfaces__msg__PeripheralSpeed(
      untyped_ros_message, 0));
}

static size_t _PeripheralSpeed__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2_robot_arm_interfaces__msg__PeripheralSpeed(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PeripheralSpeed = {
  "v2_robot_arm_interfaces::msg",
  "PeripheralSpeed",
  _PeripheralSpeed__cdr_serialize,
  _PeripheralSpeed__cdr_deserialize,
  _PeripheralSpeed__get_serialized_size,
  _PeripheralSpeed__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PeripheralSpeed__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PeripheralSpeed,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__msg__PeripheralSpeed__get_type_hash,
  &v2_robot_arm_interfaces__msg__PeripheralSpeed__get_type_description,
  &v2_robot_arm_interfaces__msg__PeripheralSpeed__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2_robot_arm_interfaces, msg, PeripheralSpeed)() {
  return &_PeripheralSpeed__type_support;
}

#if defined(__cplusplus)
}
#endif
