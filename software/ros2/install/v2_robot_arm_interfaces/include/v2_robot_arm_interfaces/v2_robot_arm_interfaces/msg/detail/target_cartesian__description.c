// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2_robot_arm_interfaces:msg/TargetCartesian.idl
// generated code does not contain a copyright notice

#include "v2_robot_arm_interfaces/msg/detail/target_cartesian__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__msg__TargetCartesian__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0x6c, 0xdb, 0x2e, 0xbd, 0x83, 0xf6, 0xf8,
      0xa8, 0xef, 0x85, 0x75, 0x88, 0xab, 0x24, 0x1a,
      0x05, 0x6e, 0x0c, 0xd3, 0x57, 0x5b, 0x81, 0xfd,
      0x37, 0x8c, 0x93, 0x0a, 0xd7, 0x69, 0x21, 0x28,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char v2_robot_arm_interfaces__msg__TargetCartesian__TYPE_NAME[] = "v2_robot_arm_interfaces/msg/TargetCartesian";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char v2_robot_arm_interfaces__msg__TargetCartesian__FIELD_NAME__header[] = "header";
static char v2_robot_arm_interfaces__msg__TargetCartesian__FIELD_NAME__position[] = "position";
static char v2_robot_arm_interfaces__msg__TargetCartesian__FIELD_NAME__rotation[] = "rotation";
static char v2_robot_arm_interfaces__msg__TargetCartesian__FIELD_NAME__translation_speed[] = "translation_speed";
static char v2_robot_arm_interfaces__msg__TargetCartesian__DEFAULT_VALUE__translation_speed[] = "10.0";
static char v2_robot_arm_interfaces__msg__TargetCartesian__FIELD_NAME__rotation_speed[] = "rotation_speed";
static char v2_robot_arm_interfaces__msg__TargetCartesian__DEFAULT_VALUE__rotation_speed[] = "0.523599";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__msg__TargetCartesian__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__msg__TargetCartesian__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__msg__TargetCartesian__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__msg__TargetCartesian__FIELD_NAME__rotation, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__msg__TargetCartesian__FIELD_NAME__translation_speed, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__msg__TargetCartesian__DEFAULT_VALUE__translation_speed, 4, 4},
  },
  {
    {v2_robot_arm_interfaces__msg__TargetCartesian__FIELD_NAME__rotation_speed, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__msg__TargetCartesian__DEFAULT_VALUE__rotation_speed, 8, 8},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2_robot_arm_interfaces__msg__TargetCartesian__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__msg__TargetCartesian__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__msg__TargetCartesian__TYPE_NAME, 43, 43},
      {v2_robot_arm_interfaces__msg__TargetCartesian__FIELDS, 5, 5},
    },
    {v2_robot_arm_interfaces__msg__TargetCartesian__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "float32[3] position\n"
  "float32[3] rotation\n"
  "\n"
  "float32 translation_speed 10\n"
  "float32 rotation_speed 0.523599\n"
  " ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__msg__TargetCartesian__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__msg__TargetCartesian__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 127, 127},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__msg__TargetCartesian__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__msg__TargetCartesian__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
