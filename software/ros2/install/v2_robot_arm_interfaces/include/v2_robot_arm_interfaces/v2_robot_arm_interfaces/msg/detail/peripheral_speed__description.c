// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2_robot_arm_interfaces:msg/PeripheralSpeed.idl
// generated code does not contain a copyright notice

#include "v2_robot_arm_interfaces/msg/detail/peripheral_speed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__msg__PeripheralSpeed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc8, 0xec, 0xfc, 0xad, 0x69, 0x72, 0xf4, 0x2b,
      0x66, 0xe9, 0x94, 0xbc, 0xf6, 0xef, 0x0a, 0xaa,
      0x75, 0x9d, 0x1f, 0xcd, 0x84, 0xc1, 0x01, 0x32,
      0x54, 0xb5, 0xbb, 0x3a, 0xe6, 0x65, 0xa5, 0x74,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char v2_robot_arm_interfaces__msg__PeripheralSpeed__TYPE_NAME[] = "v2_robot_arm_interfaces/msg/PeripheralSpeed";

// Define type names, field names, and default values
static char v2_robot_arm_interfaces__msg__PeripheralSpeed__FIELD_NAME__translation_speed[] = "translation_speed";
static char v2_robot_arm_interfaces__msg__PeripheralSpeed__DEFAULT_VALUE__translation_speed[] = "10.0";
static char v2_robot_arm_interfaces__msg__PeripheralSpeed__FIELD_NAME__rotation_speed[] = "rotation_speed";
static char v2_robot_arm_interfaces__msg__PeripheralSpeed__DEFAULT_VALUE__rotation_speed[] = "0.523599";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__msg__PeripheralSpeed__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__msg__PeripheralSpeed__FIELD_NAME__translation_speed, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__msg__PeripheralSpeed__DEFAULT_VALUE__translation_speed, 4, 4},
  },
  {
    {v2_robot_arm_interfaces__msg__PeripheralSpeed__FIELD_NAME__rotation_speed, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__msg__PeripheralSpeed__DEFAULT_VALUE__rotation_speed, 8, 8},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__msg__PeripheralSpeed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__msg__PeripheralSpeed__TYPE_NAME, 43, 43},
      {v2_robot_arm_interfaces__msg__PeripheralSpeed__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 translation_speed 10 \n"
  "float32 rotation_speed 0.523599\n"
  " ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__msg__PeripheralSpeed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__msg__PeripheralSpeed__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 63, 63},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__msg__PeripheralSpeed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__msg__PeripheralSpeed__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
