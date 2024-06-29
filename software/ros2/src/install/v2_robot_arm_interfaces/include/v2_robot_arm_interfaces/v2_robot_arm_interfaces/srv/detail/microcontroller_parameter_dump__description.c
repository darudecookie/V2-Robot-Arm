// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2_robot_arm_interfaces:srv/MicrocontrollerParameterDump.idl
// generated code does not contain a copyright notice

#include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0x9c, 0xf8, 0x98, 0x89, 0xe0, 0x6e, 0xf3,
      0xc8, 0x76, 0x7a, 0xcb, 0x47, 0x13, 0xe1, 0x72,
      0x3f, 0x22, 0xdb, 0x42, 0xa7, 0x41, 0xcc, 0x1d,
      0xfe, 0xab, 0xe6, 0x42, 0xfa, 0xfa, 0xa5, 0x5d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0x41, 0x2b, 0xbc, 0x1d, 0x2e, 0x67, 0x1b,
      0x73, 0x63, 0xdf, 0x5e, 0x42, 0xdb, 0xb8, 0xb0,
      0xbf, 0xf9, 0xe7, 0x22, 0xe1, 0x17, 0x55, 0xad,
      0xdb, 0x10, 0xf8, 0x2b, 0xc9, 0x59, 0x9b, 0xa7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0x2c, 0x75, 0x41, 0xbe, 0x34, 0xef, 0x5c,
      0xae, 0x68, 0xea, 0x0b, 0x45, 0x05, 0x27, 0xb0,
      0x78, 0xb1, 0x4e, 0xbd, 0xc9, 0x5d, 0x66, 0x86,
      0xe1, 0x89, 0x73, 0xd8, 0x87, 0x41, 0x11, 0x39,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x59, 0x10, 0x70, 0x90, 0xaa, 0x28, 0x8d, 0x1b,
      0x54, 0x43, 0x6d, 0x16, 0x77, 0x76, 0x4c, 0xa8,
      0x43, 0x04, 0x4e, 0xc9, 0x04, 0x2d, 0xc1, 0xab,
      0xe1, 0x15, 0x1c, 0x4b, 0x01, 0xca, 0x7d, 0xd9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__TYPE_NAME[] = "v2_robot_arm_interfaces/srv/MicrocontrollerParameterDump";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__TYPE_NAME[] = "v2_robot_arm_interfaces/srv/MicrocontrollerParameterDump_Event";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__TYPE_NAME[] = "v2_robot_arm_interfaces/srv/MicrocontrollerParameterDump_Request";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__TYPE_NAME[] = "v2_robot_arm_interfaces/srv/MicrocontrollerParameterDump_Response";

// Define type names, field names, and default values
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__FIELD_NAME__request_message[] = "request_message";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__FIELD_NAME__response_message[] = "response_message";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__TYPE_NAME, 64, 64},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__TYPE_NAME, 65, 65},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__TYPE_NAME, 62, 62},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__TYPE_NAME, 62, 62},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__TYPE_NAME, 64, 64},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__TYPE_NAME, 65, 65},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__TYPE_NAME, 56, 56},
      {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__FIELDS, 3, 3},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_position_limit_update_target[] = "joint_position_limit_update_target";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_position_limit_update_target[] = "-10";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_position_limit_update_params[] = "joint_position_limit_update_params";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_position_limit_update_params[] = "(0.0, 0.0)";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_velocity_limit_update_target[] = "joint_velocity_limit_update_target";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_velocity_limit_update_target[] = "-10";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_velocity_limit_update_params[] = "joint_velocity_limit_update_params";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_velocity_limit_update_params[] = "(0.0, 0.0)";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_torque_limit_update_target[] = "joint_torque_limit_update_target";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_torque_limit_update_target[] = "-10";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_torque_limit_update_params[] = "joint_torque_limit_update_params";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_torque_limit_update_params[] = "(0.0, 0.0)";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_acceleration_limit_update_target[] = "joint_acceleration_limit_update_target";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_acceleration_limit_update_target[] = "-10";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_acceleration_limit_update_params[] = "joint_acceleration_limit_update_params";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_acceleration_limit_update_params[] = "(0.0, 0.0)";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_jerk_limit_update_target[] = "joint_jerk_limit_update_target";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_jerk_limit_update_target[] = "-10";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_jerk_limit_update_params[] = "joint_jerk_limit_update_params";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_jerk_limit_update_params[] = "(0.0, 0.0)";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__x_workspace_bounds[] = "x_workspace_bounds";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__x_workspace_bounds[] = "(-1.0, -1.0)";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__y_workspace_bounds[] = "y_workspace_bounds";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__y_workspace_bounds[] = "(-1.0, -1.0)";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__z_workspace_bounds[] = "z_workspace_bounds";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__z_workspace_bounds[] = "(-1.0, -1.0)";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__pid_update_target[] = "pid_update_target";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__pid_update_target[] = "-10";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__pid_update_params[] = "pid_update_params";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__pid_update_params[] = "(-1.0, -1.0, -1.0)";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_home_positions[] = "joint_home_positions";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_home_positions[] = "(-100.0, -100.0, -100.0, -100.0, -100.0, -100.0, -100.0)";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_position_limit_update_target, 34, 34},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_position_limit_update_target, 3, 3},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_position_limit_update_params, 34, 34},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_position_limit_update_params, 10, 10},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_velocity_limit_update_target, 34, 34},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_velocity_limit_update_target, 3, 3},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_velocity_limit_update_params, 34, 34},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_velocity_limit_update_params, 10, 10},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_torque_limit_update_target, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_torque_limit_update_target, 3, 3},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_torque_limit_update_params, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_torque_limit_update_params, 10, 10},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_acceleration_limit_update_target, 38, 38},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_acceleration_limit_update_target, 3, 3},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_acceleration_limit_update_params, 38, 38},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_acceleration_limit_update_params, 10, 10},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_jerk_limit_update_target, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_jerk_limit_update_target, 3, 3},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_jerk_limit_update_params, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_jerk_limit_update_params, 10, 10},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__x_workspace_bounds, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__x_workspace_bounds, 12, 12},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__y_workspace_bounds, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__y_workspace_bounds, 12, 12},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__z_workspace_bounds, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__z_workspace_bounds, 12, 12},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__pid_update_target, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__pid_update_target, 3, 3},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__pid_update_params, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__pid_update_params, 18, 18},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELD_NAME__joint_home_positions, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__DEFAULT_VALUE__joint_home_positions, 56, 56},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__TYPE_NAME, 64, 64},
      {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__FIELDS, 16, 16},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__FIELD_NAME__returnsuccess[] = "returnsuccess";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__FIELD_NAME__returnsuccess, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__TYPE_NAME, 65, 65},
      {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__FIELD_NAME__info[] = "info";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__FIELD_NAME__request[] = "request";
static char v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__TYPE_NAME, 64, 64},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__TYPE_NAME, 65, 65},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__TYPE_NAME, 64, 64},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__TYPE_NAME, 65, 65},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__TYPE_NAME, 62, 62},
      {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__FIELDS, 3, 3},
    },
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16 joint_position_limit_update_target -10\n"
  "float32[2] joint_position_limit_update_params [0,0]\n"
  "\n"
  "int16 joint_velocity_limit_update_target -10\n"
  "float32[2] joint_velocity_limit_update_params [0,0]\n"
  "\n"
  "int16 joint_torque_limit_update_target -10\n"
  "float32[2] joint_torque_limit_update_params [0,0]\n"
  "\n"
  "int16 joint_acceleration_limit_update_target -10\n"
  "float32[2] joint_acceleration_limit_update_params [0,0]\n"
  "\n"
  "int16 joint_jerk_limit_update_target -10\n"
  "float32[2] joint_jerk_limit_update_params [0,0]\n"
  "\n"
  "float32[2] x_workspace_bounds [-1, -1]\n"
  "float32[2] y_workspace_bounds [-1, -1]\n"
  "float32[2] z_workspace_bounds [-1, -1]\n"
  "\n"
  "int16 pid_update_target -10\n"
  "float32[3] pid_update_params [-1, -1, -1]\n"
  "\n"
  "float32[7] joint_home_positions [-100, -100, -100, -100, -100, -100, -100]\n"
  "---\n"
  "int8 returnsuccess";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__TYPE_NAME, 56, 56},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 772, 772},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__TYPE_NAME, 64, 64},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__TYPE_NAME, 65, 65},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__TYPE_NAME, 62, 62},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_individual_type_description_source(NULL);
    sources[4] = *v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_individual_type_description_source(NULL);
    sources[5] = *v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__get_individual_type_description_source(NULL);
    sources[4] = *v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
