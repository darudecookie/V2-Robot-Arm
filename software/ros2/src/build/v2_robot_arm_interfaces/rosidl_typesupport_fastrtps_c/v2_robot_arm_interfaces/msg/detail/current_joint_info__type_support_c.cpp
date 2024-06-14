// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2_robot_arm_interfaces:msg/CurrentJointInfo.idl
// generated code does not contain a copyright notice
#include "v2_robot_arm_interfaces/msg/detail/current_joint_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2_robot_arm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2_robot_arm_interfaces/msg/detail/current_joint_info__struct.h"
#include "v2_robot_arm_interfaces/msg/detail/current_joint_info__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2_robot_arm_interfaces
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2_robot_arm_interfaces
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2_robot_arm_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2_robot_arm_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2_robot_arm_interfaces
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2_robot_arm_interfaces
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2_robot_arm_interfaces
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _CurrentJointInfo__ros_msg_type = v2_robot_arm_interfaces__msg__CurrentJointInfo;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
bool cdr_serialize_v2_robot_arm_interfaces__msg__CurrentJointInfo(
  const v2_robot_arm_interfaces__msg__CurrentJointInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: current_joint_positions
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_positions;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: current_joint_velocity
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_velocity;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: current_joint_acceleration
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_acceleration;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: current_joint_jerks
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_jerks;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: current_joint_torques
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_torques;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
bool cdr_deserialize_v2_robot_arm_interfaces__msg__CurrentJointInfo(
  eprosima::fastcdr::Cdr & cdr,
  v2_robot_arm_interfaces__msg__CurrentJointInfo * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: current_joint_positions
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_positions;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: current_joint_velocity
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_velocity;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: current_joint_acceleration
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_acceleration;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: current_joint_jerks
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_jerks;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: current_joint_torques
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_torques;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
size_t get_serialized_size_v2_robot_arm_interfaces__msg__CurrentJointInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CurrentJointInfo__ros_msg_type * ros_message = static_cast<const _CurrentJointInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: current_joint_positions
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->current_joint_positions;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_joint_velocity
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->current_joint_velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_joint_acceleration
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->current_joint_acceleration;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_joint_jerks
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->current_joint_jerks;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_joint_torques
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->current_joint_torques;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
size_t max_serialized_size_v2_robot_arm_interfaces__msg__CurrentJointInfo(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: current_joint_positions
  {
    size_t array_size = 7;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current_joint_velocity
  {
    size_t array_size = 7;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current_joint_acceleration
  {
    size_t array_size = 7;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current_joint_jerks
  {
    size_t array_size = 7;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current_joint_torques
  {
    size_t array_size = 7;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2_robot_arm_interfaces__msg__CurrentJointInfo;
    is_plain =
      (
      offsetof(DataType, current_joint_torques) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
bool cdr_serialize_key_v2_robot_arm_interfaces__msg__CurrentJointInfo(
  const v2_robot_arm_interfaces__msg__CurrentJointInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: current_joint_positions
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_positions;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: current_joint_velocity
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_velocity;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: current_joint_acceleration
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_acceleration;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: current_joint_jerks
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_jerks;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: current_joint_torques
  {
    size_t size = 7;
    auto array_ptr = ros_message->current_joint_torques;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
size_t get_serialized_size_key_v2_robot_arm_interfaces__msg__CurrentJointInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CurrentJointInfo__ros_msg_type * ros_message = static_cast<const _CurrentJointInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: current_joint_positions
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->current_joint_positions;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_joint_velocity
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->current_joint_velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_joint_acceleration
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->current_joint_acceleration;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_joint_jerks
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->current_joint_jerks;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_joint_torques
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->current_joint_torques;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2_robot_arm_interfaces
size_t max_serialized_size_key_v2_robot_arm_interfaces__msg__CurrentJointInfo(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: current_joint_positions
  {
    size_t array_size = 7;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current_joint_velocity
  {
    size_t array_size = 7;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current_joint_acceleration
  {
    size_t array_size = 7;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current_joint_jerks
  {
    size_t array_size = 7;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current_joint_torques
  {
    size_t array_size = 7;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2_robot_arm_interfaces__msg__CurrentJointInfo;
    is_plain =
      (
      offsetof(DataType, current_joint_torques) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CurrentJointInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const v2_robot_arm_interfaces__msg__CurrentJointInfo * ros_message = static_cast<const v2_robot_arm_interfaces__msg__CurrentJointInfo *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_v2_robot_arm_interfaces__msg__CurrentJointInfo(ros_message, cdr);
}

static bool _CurrentJointInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  v2_robot_arm_interfaces__msg__CurrentJointInfo * ros_message = static_cast<v2_robot_arm_interfaces__msg__CurrentJointInfo *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_v2_robot_arm_interfaces__msg__CurrentJointInfo(cdr, ros_message);
}

static uint32_t _CurrentJointInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2_robot_arm_interfaces__msg__CurrentJointInfo(
      untyped_ros_message, 0));
}

static size_t _CurrentJointInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2_robot_arm_interfaces__msg__CurrentJointInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CurrentJointInfo = {
  "v2_robot_arm_interfaces::msg",
  "CurrentJointInfo",
  _CurrentJointInfo__cdr_serialize,
  _CurrentJointInfo__cdr_deserialize,
  _CurrentJointInfo__get_serialized_size,
  _CurrentJointInfo__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CurrentJointInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CurrentJointInfo,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__msg__CurrentJointInfo__get_type_hash,
  &v2_robot_arm_interfaces__msg__CurrentJointInfo__get_type_description,
  &v2_robot_arm_interfaces__msg__CurrentJointInfo__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2_robot_arm_interfaces, msg, CurrentJointInfo)() {
  return &_CurrentJointInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
