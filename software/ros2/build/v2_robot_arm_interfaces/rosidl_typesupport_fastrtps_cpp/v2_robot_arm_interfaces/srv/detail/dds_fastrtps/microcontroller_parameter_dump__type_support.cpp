// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2_robot_arm_interfaces:srv/MicrocontrollerParameterDump.idl
// generated code does not contain a copyright notice
#include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__functions.h"
#include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_serialize(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_position_limit_update_target
  cdr << ros_message.joint_position_limit_update_target;

  // Member: joint_position_limit_update_params
  {
    cdr << ros_message.joint_position_limit_update_params;
  }

  // Member: joint_velocity_limit_update_target
  cdr << ros_message.joint_velocity_limit_update_target;

  // Member: joint_velocity_limit_update_params
  {
    cdr << ros_message.joint_velocity_limit_update_params;
  }

  // Member: joint_torque_limit_update_target
  cdr << ros_message.joint_torque_limit_update_target;

  // Member: joint_torque_limit_update_params
  {
    cdr << ros_message.joint_torque_limit_update_params;
  }

  // Member: joint_acceleration_limit_update_target
  cdr << ros_message.joint_acceleration_limit_update_target;

  // Member: joint_acceleration_limit_update_params
  {
    cdr << ros_message.joint_acceleration_limit_update_params;
  }

  // Member: joint_jerk_limit_update_target
  cdr << ros_message.joint_jerk_limit_update_target;

  // Member: joint_jerk_limit_update_params
  {
    cdr << ros_message.joint_jerk_limit_update_params;
  }

  // Member: x_workspace_bounds
  {
    cdr << ros_message.x_workspace_bounds;
  }

  // Member: y_workspace_bounds
  {
    cdr << ros_message.y_workspace_bounds;
  }

  // Member: z_workspace_bounds
  {
    cdr << ros_message.z_workspace_bounds;
  }

  // Member: pid_update_target
  cdr << ros_message.pid_update_target;

  // Member: pid_update_params
  {
    cdr << ros_message.pid_update_params;
  }

  // Member: joint_home_positions
  {
    cdr << ros_message.joint_home_positions;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & ros_message)
{
  // Member: joint_position_limit_update_target
  cdr >> ros_message.joint_position_limit_update_target;

  // Member: joint_position_limit_update_params
  {
    cdr >> ros_message.joint_position_limit_update_params;
  }

  // Member: joint_velocity_limit_update_target
  cdr >> ros_message.joint_velocity_limit_update_target;

  // Member: joint_velocity_limit_update_params
  {
    cdr >> ros_message.joint_velocity_limit_update_params;
  }

  // Member: joint_torque_limit_update_target
  cdr >> ros_message.joint_torque_limit_update_target;

  // Member: joint_torque_limit_update_params
  {
    cdr >> ros_message.joint_torque_limit_update_params;
  }

  // Member: joint_acceleration_limit_update_target
  cdr >> ros_message.joint_acceleration_limit_update_target;

  // Member: joint_acceleration_limit_update_params
  {
    cdr >> ros_message.joint_acceleration_limit_update_params;
  }

  // Member: joint_jerk_limit_update_target
  cdr >> ros_message.joint_jerk_limit_update_target;

  // Member: joint_jerk_limit_update_params
  {
    cdr >> ros_message.joint_jerk_limit_update_params;
  }

  // Member: x_workspace_bounds
  {
    cdr >> ros_message.x_workspace_bounds;
  }

  // Member: y_workspace_bounds
  {
    cdr >> ros_message.y_workspace_bounds;
  }

  // Member: z_workspace_bounds
  {
    cdr >> ros_message.z_workspace_bounds;
  }

  // Member: pid_update_target
  cdr >> ros_message.pid_update_target;

  // Member: pid_update_params
  {
    cdr >> ros_message.pid_update_params;
  }

  // Member: joint_home_positions
  {
    cdr >> ros_message.joint_home_positions;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
get_serialized_size(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_position_limit_update_target
  {
    size_t item_size = sizeof(ros_message.joint_position_limit_update_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_position_limit_update_params
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.joint_position_limit_update_params[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_velocity_limit_update_target
  {
    size_t item_size = sizeof(ros_message.joint_velocity_limit_update_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_velocity_limit_update_params
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.joint_velocity_limit_update_params[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_torque_limit_update_target
  {
    size_t item_size = sizeof(ros_message.joint_torque_limit_update_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_torque_limit_update_params
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.joint_torque_limit_update_params[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_acceleration_limit_update_target
  {
    size_t item_size = sizeof(ros_message.joint_acceleration_limit_update_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_acceleration_limit_update_params
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.joint_acceleration_limit_update_params[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_jerk_limit_update_target
  {
    size_t item_size = sizeof(ros_message.joint_jerk_limit_update_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_jerk_limit_update_params
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.joint_jerk_limit_update_params[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: x_workspace_bounds
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.x_workspace_bounds[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: y_workspace_bounds
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.y_workspace_bounds[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: z_workspace_bounds
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.z_workspace_bounds[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pid_update_target
  {
    size_t item_size = sizeof(ros_message.pid_update_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pid_update_params
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_update_params[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_home_positions
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_home_positions[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
max_serialized_size_MicrocontrollerParameterDump_Request(
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

  // Member: joint_position_limit_update_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: joint_position_limit_update_params
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: joint_velocity_limit_update_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: joint_velocity_limit_update_params
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: joint_torque_limit_update_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: joint_torque_limit_update_params
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: joint_acceleration_limit_update_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: joint_acceleration_limit_update_params
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: joint_jerk_limit_update_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: joint_jerk_limit_update_params
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: x_workspace_bounds
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: y_workspace_bounds
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: z_workspace_bounds
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: pid_update_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: pid_update_params
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: joint_home_positions
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
    using DataType = v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request;
    is_plain =
      (
      offsetof(DataType, joint_home_positions) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_serialize_key(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_position_limit_update_target
  cdr << ros_message.joint_position_limit_update_target;

  // Member: joint_position_limit_update_params
  {
    cdr << ros_message.joint_position_limit_update_params;
  }

  // Member: joint_velocity_limit_update_target
  cdr << ros_message.joint_velocity_limit_update_target;

  // Member: joint_velocity_limit_update_params
  {
    cdr << ros_message.joint_velocity_limit_update_params;
  }

  // Member: joint_torque_limit_update_target
  cdr << ros_message.joint_torque_limit_update_target;

  // Member: joint_torque_limit_update_params
  {
    cdr << ros_message.joint_torque_limit_update_params;
  }

  // Member: joint_acceleration_limit_update_target
  cdr << ros_message.joint_acceleration_limit_update_target;

  // Member: joint_acceleration_limit_update_params
  {
    cdr << ros_message.joint_acceleration_limit_update_params;
  }

  // Member: joint_jerk_limit_update_target
  cdr << ros_message.joint_jerk_limit_update_target;

  // Member: joint_jerk_limit_update_params
  {
    cdr << ros_message.joint_jerk_limit_update_params;
  }

  // Member: x_workspace_bounds
  {
    cdr << ros_message.x_workspace_bounds;
  }

  // Member: y_workspace_bounds
  {
    cdr << ros_message.y_workspace_bounds;
  }

  // Member: z_workspace_bounds
  {
    cdr << ros_message.z_workspace_bounds;
  }

  // Member: pid_update_target
  cdr << ros_message.pid_update_target;

  // Member: pid_update_params
  {
    cdr << ros_message.pid_update_params;
  }

  // Member: joint_home_positions
  {
    cdr << ros_message.joint_home_positions;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
get_serialized_size_key(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_position_limit_update_target
  {
    size_t item_size = sizeof(ros_message.joint_position_limit_update_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_position_limit_update_params
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.joint_position_limit_update_params[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_velocity_limit_update_target
  {
    size_t item_size = sizeof(ros_message.joint_velocity_limit_update_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_velocity_limit_update_params
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.joint_velocity_limit_update_params[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_torque_limit_update_target
  {
    size_t item_size = sizeof(ros_message.joint_torque_limit_update_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_torque_limit_update_params
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.joint_torque_limit_update_params[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_acceleration_limit_update_target
  {
    size_t item_size = sizeof(ros_message.joint_acceleration_limit_update_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_acceleration_limit_update_params
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.joint_acceleration_limit_update_params[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_jerk_limit_update_target
  {
    size_t item_size = sizeof(ros_message.joint_jerk_limit_update_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_jerk_limit_update_params
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.joint_jerk_limit_update_params[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: x_workspace_bounds
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.x_workspace_bounds[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: y_workspace_bounds
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.y_workspace_bounds[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: z_workspace_bounds
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.z_workspace_bounds[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pid_update_target
  {
    size_t item_size = sizeof(ros_message.pid_update_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pid_update_params
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_update_params[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_home_positions
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_home_positions[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
max_serialized_size_key_MicrocontrollerParameterDump_Request(
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

  // Member: joint_position_limit_update_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: joint_position_limit_update_params
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_velocity_limit_update_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: joint_velocity_limit_update_params
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_torque_limit_update_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: joint_torque_limit_update_params
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_acceleration_limit_update_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: joint_acceleration_limit_update_params
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_jerk_limit_update_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: joint_jerk_limit_update_params
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_workspace_bounds
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_workspace_bounds
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_workspace_bounds
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pid_update_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: pid_update_params
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_home_positions
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
    using DataType = v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request;
    is_plain =
      (
      offsetof(DataType, joint_home_positions) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _MicrocontrollerParameterDump_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MicrocontrollerParameterDump_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MicrocontrollerParameterDump_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MicrocontrollerParameterDump_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MicrocontrollerParameterDump_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MicrocontrollerParameterDump_Request__callbacks = {
  "v2_robot_arm_interfaces::srv",
  "MicrocontrollerParameterDump_Request",
  _MicrocontrollerParameterDump_Request__cdr_serialize,
  _MicrocontrollerParameterDump_Request__cdr_deserialize,
  _MicrocontrollerParameterDump_Request__get_serialized_size,
  _MicrocontrollerParameterDump_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MicrocontrollerParameterDump_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MicrocontrollerParameterDump_Request__callbacks,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_hash,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_description,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>()
{
  return &v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::_MicrocontrollerParameterDump_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Request)() {
  return &v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::_MicrocontrollerParameterDump_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_serialize(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: returnsuccess
  cdr << ros_message.returnsuccess;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response & ros_message)
{
  // Member: returnsuccess
  cdr >> ros_message.returnsuccess;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
get_serialized_size(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: returnsuccess
  {
    size_t item_size = sizeof(ros_message.returnsuccess);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
max_serialized_size_MicrocontrollerParameterDump_Response(
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

  // Member: returnsuccess
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
    using DataType = v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response;
    is_plain =
      (
      offsetof(DataType, returnsuccess) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_serialize_key(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: returnsuccess
  cdr << ros_message.returnsuccess;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
get_serialized_size_key(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: returnsuccess
  {
    size_t item_size = sizeof(ros_message.returnsuccess);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
max_serialized_size_key_MicrocontrollerParameterDump_Response(
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

  // Member: returnsuccess
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
    using DataType = v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response;
    is_plain =
      (
      offsetof(DataType, returnsuccess) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _MicrocontrollerParameterDump_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MicrocontrollerParameterDump_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MicrocontrollerParameterDump_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MicrocontrollerParameterDump_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MicrocontrollerParameterDump_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MicrocontrollerParameterDump_Response__callbacks = {
  "v2_robot_arm_interfaces::srv",
  "MicrocontrollerParameterDump_Response",
  _MicrocontrollerParameterDump_Response__cdr_serialize,
  _MicrocontrollerParameterDump_Response__cdr_deserialize,
  _MicrocontrollerParameterDump_Response__get_serialized_size,
  _MicrocontrollerParameterDump_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MicrocontrollerParameterDump_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MicrocontrollerParameterDump_Response__callbacks,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_hash,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_description,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>()
{
  return &v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::_MicrocontrollerParameterDump_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Response)() {
  return &v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::_MicrocontrollerParameterDump_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace service_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const service_msgs::msg::ServiceEventInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  service_msgs::msg::ServiceEventInfo &);
size_t get_serialized_size(
  const service_msgs::msg::ServiceEventInfo &,
  size_t current_alignment);
size_t
max_serialized_size_ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const service_msgs::msg::ServiceEventInfo &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const service_msgs::msg::ServiceEventInfo &,
  size_t current_alignment);
size_t
max_serialized_size_key_ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace service_msgs

// functions for v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request already declared above

// functions for v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response already declared above


namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_serialize(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.info,
    cdr);

  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.request[i],
        cdr);
    }
  }

  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.response[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event & ros_message)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.info);

  // Member: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.request.resize(size);
    for (size_t i = 0; i < size; i++) {
      v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.request[i]);
    }
  }

  // Member: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.response.resize(size);
    for (size_t i = 0; i < size; i++) {
      v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.response[i]);
    }
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
get_serialized_size(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info
  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.info, current_alignment);

  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.request[index], current_alignment);
    }
  }

  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
max_serialized_size_MicrocontrollerParameterDump_Event(
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

  // Member: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::max_serialized_size_MicrocontrollerParameterDump_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::max_serialized_size_MicrocontrollerParameterDump_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
cdr_serialize_key(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.info,
    cdr);

  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.request[i],
        cdr);
    }
  }

  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.response[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
get_serialized_size_key(
  const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info
  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.info, current_alignment);

  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.request[index], current_alignment);
    }
  }

  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2_robot_arm_interfaces
max_serialized_size_key_MicrocontrollerParameterDump_Event(
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

  // Member: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::max_serialized_size_key_MicrocontrollerParameterDump_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::max_serialized_size_key_MicrocontrollerParameterDump_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _MicrocontrollerParameterDump_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MicrocontrollerParameterDump_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MicrocontrollerParameterDump_Event__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MicrocontrollerParameterDump_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MicrocontrollerParameterDump_Event(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MicrocontrollerParameterDump_Event__callbacks = {
  "v2_robot_arm_interfaces::srv",
  "MicrocontrollerParameterDump_Event",
  _MicrocontrollerParameterDump_Event__cdr_serialize,
  _MicrocontrollerParameterDump_Event__cdr_deserialize,
  _MicrocontrollerParameterDump_Event__get_serialized_size,
  _MicrocontrollerParameterDump_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MicrocontrollerParameterDump_Event__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MicrocontrollerParameterDump_Event__callbacks,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_type_hash,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_type_description,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event>()
{
  return &v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::_MicrocontrollerParameterDump_Event__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Event)() {
  return &v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::_MicrocontrollerParameterDump_Event__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _MicrocontrollerParameterDump__callbacks = {
  "v2_robot_arm_interfaces::srv",
  "MicrocontrollerParameterDump",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Response)(),
};

#ifdef __cplusplus
extern "C"
{
#endif

static const rosidl_service_type_support_t _MicrocontrollerParameterDump__handle{
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MicrocontrollerParameterDump__callbacks,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Request>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Response>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump>,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_type_hash,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_type_description,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_type_description_sources,
};

#ifdef __cplusplus
}
#endif

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_v2_robot_arm_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<v2_robot_arm_interfaces::srv::MicrocontrollerParameterDump>()
{
  return &v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::_MicrocontrollerParameterDump__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump)() {
  return &v2_robot_arm_interfaces::srv::typesupport_fastrtps_cpp::_MicrocontrollerParameterDump__handle;
}

#ifdef __cplusplus
}
#endif
