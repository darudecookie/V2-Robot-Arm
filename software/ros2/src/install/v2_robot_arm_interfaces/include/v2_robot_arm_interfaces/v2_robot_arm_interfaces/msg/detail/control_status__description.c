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
      0xd8, 0x1b, 0x64, 0xbc, 0xc4, 0xea, 0x03, 0x3e,
      0x45, 0x37, 0xe3, 0xf4, 0x55, 0x43, 0x2b, 0x25,
      0x5a, 0xe2, 0x8a, 0x73, 0xc3, 0x53, 0x5b, 0x9a,
      0xba, 0x7e, 0x2b, 0x78, 0x00, 0x43, 0xed, 0x24,
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
static char v2_robot_arm_interfaces__msg__ControlStatus__FIELD_NAME__master_controller[] = "master_controller";
static char v2_robot_arm_interfaces__msg__ControlStatus__DEFAULT_VALUE__master_controller[] = "1";

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
    {v2_robot_arm_interfaces__msg__ControlStatus__FIELD_NAME__master_controller, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__msg__ControlStatus__DEFAULT_VALUE__master_controller, 1, 1},
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
  "int8 master_controller 1";

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
    {toplevel_type_raw_source, 100, 100},
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
