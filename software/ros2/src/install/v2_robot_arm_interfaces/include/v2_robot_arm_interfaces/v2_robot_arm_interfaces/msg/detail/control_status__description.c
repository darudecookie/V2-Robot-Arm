// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2_robot_arm_interfaces:msg/ControlStatus.idl
// generated code does not contain a copyright notice

#include "v2_robot_arm_interfaces/msg/detail/control_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__msg__ControlStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0xd0, 0xbc, 0x74, 0x2d, 0x0e, 0xb6, 0x92,
      0xf1, 0x53, 0xc6, 0x56, 0x28, 0xfc, 0x71, 0x6d,
      0x31, 0x17, 0xd4, 0x08, 0xc1, 0xf1, 0xab, 0x45,
      0x60, 0xca, 0x13, 0x82, 0x15, 0x59, 0xf3, 0xcd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char v2_robot_arm_interfaces__msg__ControlStatus__TYPE_NAME[] = "v2_robot_arm_interfaces/msg/ControlStatus";

// Define type names, field names, and default values
static char v2_robot_arm_interfaces__msg__ControlStatus__FIELD_NAME__trajectory_controller[] = "trajectory_controller";
static char v2_robot_arm_interfaces__msg__ControlStatus__DEFAULT_VALUE__trajectory_controller[] = "0";
static char v2_robot_arm_interfaces__msg__ControlStatus__FIELD_NAME__ik_solver[] = "ik_solver";
static char v2_robot_arm_interfaces__msg__ControlStatus__DEFAULT_VALUE__ik_solver[] = "1";
static char v2_robot_arm_interfaces__msg__ControlStatus__FIELD_NAME__peripheral_interface[] = "peripheral_interface";
static char v2_robot_arm_interfaces__msg__ControlStatus__DEFAULT_VALUE__peripheral_interface[] = "0";
static char v2_robot_arm_interfaces__msg__ControlStatus__FIELD_NAME__main_controller[] = "main_controller";
static char v2_robot_arm_interfaces__msg__ControlStatus__DEFAULT_VALUE__main_controller[] = "1";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__msg__ControlStatus__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__msg__ControlStatus__FIELD_NAME__trajectory_controller, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__msg__ControlStatus__DEFAULT_VALUE__trajectory_controller, 1, 1},
  },
  {
    {v2_robot_arm_interfaces__msg__ControlStatus__FIELD_NAME__ik_solver, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__msg__ControlStatus__DEFAULT_VALUE__ik_solver, 1, 1},
  },
  {
    {v2_robot_arm_interfaces__msg__ControlStatus__FIELD_NAME__peripheral_interface, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__msg__ControlStatus__DEFAULT_VALUE__peripheral_interface, 1, 1},
  },
  {
    {v2_robot_arm_interfaces__msg__ControlStatus__FIELD_NAME__main_controller, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__msg__ControlStatus__DEFAULT_VALUE__main_controller, 1, 1},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__msg__ControlStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__msg__ControlStatus__TYPE_NAME, 41, 41},
      {v2_robot_arm_interfaces__msg__ControlStatus__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 trajectory_controller 0\n"
  "int8 ik_solver 1\n"
  "int8 peripheral_interface 0 \n"
  "int8 main_controller 1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__msg__ControlStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__msg__ControlStatus__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 98, 98},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__msg__ControlStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__msg__ControlStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
