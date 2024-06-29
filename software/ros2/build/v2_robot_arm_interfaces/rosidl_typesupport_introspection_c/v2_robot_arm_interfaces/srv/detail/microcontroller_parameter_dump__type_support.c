// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2_robot_arm_interfaces:srv/MicrocontrollerParameterDump.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__rosidl_typesupport_introspection_c.h"
#include "v2_robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__functions.h"
#include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__init(message_memory);
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_fini_function(void * message_memory)
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__fini(message_memory);
}

size_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__x_workspace_bounds(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__y_workspace_bounds(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__z_workspace_bounds(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__pid_update_params(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__pid_update_params(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__pid_update_params(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__pid_update_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__pid_update_params(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__pid_update_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__pid_update_params(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__joint_home_positions(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_home_positions(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_home_positions(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__joint_home_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_home_positions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__joint_home_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_home_positions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_message_member_array[16] = {
  {
    "joint_position_limit_update_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, joint_position_limit_update_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_position_limit_update_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, joint_position_limit_update_params),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params,  // size() function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params,  // get_const(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params,  // get(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__joint_position_limit_update_params,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_velocity_limit_update_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, joint_velocity_limit_update_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_velocity_limit_update_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, joint_velocity_limit_update_params),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params,  // size() function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params,  // get_const(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params,  // get(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__joint_velocity_limit_update_params,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_torque_limit_update_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, joint_torque_limit_update_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_torque_limit_update_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, joint_torque_limit_update_params),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params,  // size() function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params,  // get_const(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params,  // get(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__joint_torque_limit_update_params,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_acceleration_limit_update_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, joint_acceleration_limit_update_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_acceleration_limit_update_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, joint_acceleration_limit_update_params),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params,  // size() function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params,  // get_const(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params,  // get(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__joint_acceleration_limit_update_params,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_jerk_limit_update_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, joint_jerk_limit_update_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_jerk_limit_update_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, joint_jerk_limit_update_params),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params,  // size() function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params,  // get_const(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params,  // get(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__joint_jerk_limit_update_params,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_workspace_bounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, x_workspace_bounds),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__x_workspace_bounds,  // size() function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__x_workspace_bounds,  // get_const(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__x_workspace_bounds,  // get(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__x_workspace_bounds,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__x_workspace_bounds,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_workspace_bounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, y_workspace_bounds),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__y_workspace_bounds,  // size() function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__y_workspace_bounds,  // get_const(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__y_workspace_bounds,  // get(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__y_workspace_bounds,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__y_workspace_bounds,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_workspace_bounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, z_workspace_bounds),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__z_workspace_bounds,  // size() function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__z_workspace_bounds,  // get_const(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__z_workspace_bounds,  // get(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__z_workspace_bounds,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__z_workspace_bounds,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_update_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, pid_update_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_update_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, pid_update_params),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__pid_update_params,  // size() function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__pid_update_params,  // get_const(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__pid_update_params,  // get(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__pid_update_params,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__pid_update_params,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_home_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request, joint_home_positions),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Request__joint_home_positions,  // size() function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Request__joint_home_positions,  // get_const(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Request__joint_home_positions,  // get(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Request__joint_home_positions,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Request__joint_home_positions,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_message_members = {
  "v2_robot_arm_interfaces__srv",  // message namespace
  "MicrocontrollerParameterDump_Request",  // message name
  16,  // number of fields
  sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request),
  false,  // has_any_key_member_
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_message_member_array,  // message members
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_message_type_support_handle = {
  0,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_hash,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_description,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Request)() {
  if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_message_type_support_handle.typesupport_identifier) {
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__rosidl_typesupport_introspection_c.h"
// already included above
// #include "v2_robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__init(message_memory);
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_fini_function(void * message_memory)
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_message_member_array[1] = {
  {
    "returnsuccess",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response, returnsuccess),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_message_members = {
  "v2_robot_arm_interfaces__srv",  // message namespace
  "MicrocontrollerParameterDump_Response",  // message name
  1,  // number of fields
  sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response),
  false,  // has_any_key_member_
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_message_member_array,  // message members
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_message_type_support_handle = {
  0,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_hash,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_description,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Response)() {
  if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_message_type_support_handle.typesupport_identifier) {
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__rosidl_typesupport_introspection_c.h"
// already included above
// #include "v2_robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "v2_robot_arm_interfaces/srv/microcontroller_parameter_dump.h"
// Member `request`
// Member `response`
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__init(message_memory);
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_fini_function(void * message_memory)
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__fini(message_memory);
}

size_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Event__request(
  const void * untyped_member)
{
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence * member =
    (const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Event__request(
  const void * untyped_member, size_t index)
{
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence * member =
    (const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Event__request(
  void * untyped_member, size_t index)
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence * member =
    (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * item =
    ((const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Event__request(untyped_member, index));
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * value =
    (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * item =
    ((v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Event__request(untyped_member, index));
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * value =
    (const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request *)(untyped_value);
  *item = *value;
}

bool v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__resize_function__MicrocontrollerParameterDump_Event__request(
  void * untyped_member, size_t size)
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence * member =
    (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence *)(untyped_member);
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__fini(member);
  return v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__init(member, size);
}

size_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Event__response(
  const void * untyped_member)
{
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence * member =
    (const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Event__response(
  const void * untyped_member, size_t index)
{
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence * member =
    (const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Event__response(
  void * untyped_member, size_t index)
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence * member =
    (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * item =
    ((const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Event__response(untyped_member, index));
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * value =
    (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response *)(untyped_value);
  *value = *item;
}

void v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * item =
    ((v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response *)
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Event__response(untyped_member, index));
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * value =
    (const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response *)(untyped_value);
  *item = *value;
}

bool v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__resize_function__MicrocontrollerParameterDump_Event__response(
  void * untyped_member, size_t size)
{
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence * member =
    (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence *)(untyped_member);
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__fini(member);
  return v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event, request),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Event__request,  // size() function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Event__request,  // get_const(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Event__request,  // get(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Event__request,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Event__request,  // assign(index, value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__resize_function__MicrocontrollerParameterDump_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event, response),  // bytes offset in struct
    NULL,  // default value
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__size_function__MicrocontrollerParameterDump_Event__response,  // size() function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__get_const_function__MicrocontrollerParameterDump_Event__response,  // get_const(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__get_function__MicrocontrollerParameterDump_Event__response,  // get(index) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__fetch_function__MicrocontrollerParameterDump_Event__response,  // fetch(index, &value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__assign_function__MicrocontrollerParameterDump_Event__response,  // assign(index, value) function pointer
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__resize_function__MicrocontrollerParameterDump_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_message_members = {
  "v2_robot_arm_interfaces__srv",  // message namespace
  "MicrocontrollerParameterDump_Event",  // message name
  3,  // number of fields
  sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event),
  false,  // has_any_key_member_
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_message_member_array,  // message members
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_message_type_support_handle = {
  0,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_message_members,
  get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_type_hash,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_type_description,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Event)() {
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Request)();
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Response)();
  if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_message_type_support_handle.typesupport_identifier) {
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "v2_robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers v2_robot_arm_interfaces__srv__detail__microcontroller_parameter_dump__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_service_members = {
  "v2_robot_arm_interfaces__srv",  // service namespace
  "MicrocontrollerParameterDump",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // v2_robot_arm_interfaces__srv__detail__microcontroller_parameter_dump__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_message_type_support_handle,
  NULL,  // response message
  // v2_robot_arm_interfaces__srv__detail__microcontroller_parameter_dump__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_message_type_support_handle
  NULL  // event_message
  // v2_robot_arm_interfaces__srv__detail__microcontroller_parameter_dump__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_message_type_support_handle
};


static rosidl_service_type_support_t v2_robot_arm_interfaces__srv__detail__microcontroller_parameter_dump__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_service_type_support_handle = {
  0,
  &v2_robot_arm_interfaces__srv__detail__microcontroller_parameter_dump__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_service_members,
  get_service_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Request_message_type_support_handle,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Response_message_type_support_handle,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    v2_robot_arm_interfaces,
    srv,
    MicrocontrollerParameterDump
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    v2_robot_arm_interfaces,
    srv,
    MicrocontrollerParameterDump
  ),
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_type_hash,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_type_description,
  &v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2_robot_arm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump)(void) {
  if (!v2_robot_arm_interfaces__srv__detail__microcontroller_parameter_dump__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_service_type_support_handle.typesupport_identifier) {
    v2_robot_arm_interfaces__srv__detail__microcontroller_parameter_dump__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)v2_robot_arm_interfaces__srv__detail__microcontroller_parameter_dump__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, MicrocontrollerParameterDump_Event)()->data;
  }

  return &v2_robot_arm_interfaces__srv__detail__microcontroller_parameter_dump__rosidl_typesupport_introspection_c__MicrocontrollerParameterDump_service_type_support_handle;
}
