// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2_robot_arm_interfaces:msg/SystemDiagnosticInfo.idl
// generated code does not contain a copyright notice

#include "v2_robot_arm_interfaces/msg/detail/system_diagnostic_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0x98, 0x4d, 0xc2, 0x70, 0x1c, 0x0b, 0x41,
      0x4f, 0xe1, 0x93, 0xf4, 0xba, 0x7b, 0xd5, 0x6b,
      0x4b, 0x39, 0xb6, 0x17, 0xd8, 0x38, 0x38, 0xbb,
      0x31, 0x33, 0xfc, 0xe9, 0x64, 0x53, 0x07, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__TYPE_NAME[] = "v2_robot_arm_interfaces/msg/SystemDiagnosticInfo";

// Define type names, field names, and default values
static char v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__FIELD_NAME__estop[] = "estop";
static char v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__DEFAULT_VALUE__estop[] = "0";
static char v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__FIELD_NAME__jointhold[] = "jointhold";
static char v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__DEFAULT_VALUE__jointhold[] = "0";
static char v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__FIELD_NAME__temperatures[] = "temperatures";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__FIELD_NAME__estop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__DEFAULT_VALUE__estop, 1, 1},
  },
  {
    {v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__FIELD_NAME__jointhold, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__DEFAULT_VALUE__jointhold, 1, 1},
  },
  {
    {v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__FIELD_NAME__temperatures, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__TYPE_NAME, 48, 48},
      {v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 estop 0\n"
  "int8 jointhold 0\n"
  "float32[] temperatures";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__TYPE_NAME, 48, 48},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 52, 52},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
