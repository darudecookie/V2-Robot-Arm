// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2_robot_arm_interfaces:srv/TargetEEState.idl
// generated code does not contain a copyright notice

#include "v2_robot_arm_interfaces/srv/detail/target_ee_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__TargetEEState__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0x13, 0x6f, 0x64, 0x3a, 0x0c, 0x5f, 0x7f,
      0x36, 0xa8, 0xa0, 0x3e, 0x71, 0xf0, 0x56, 0xe3,
      0xe1, 0x8c, 0x97, 0x90, 0xd4, 0x0d, 0x4a, 0xfe,
      0x1c, 0x2e, 0x61, 0x40, 0xbe, 0x45, 0xb5, 0x3d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__TargetEEState_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6d, 0xea, 0x7f, 0x85, 0xf3, 0x46, 0xc1, 0xf7,
      0x57, 0x00, 0xc6, 0xf3, 0xc3, 0x73, 0x66, 0xdc,
      0x0b, 0x30, 0x61, 0x33, 0x6b, 0xb9, 0x9e, 0x54,
      0x48, 0x87, 0x38, 0x4e, 0x52, 0x04, 0x2c, 0x03,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__TargetEEState_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc7, 0xac, 0x99, 0x22, 0x78, 0x3d, 0xd6, 0x34,
      0x7d, 0x8d, 0x5b, 0x19, 0x94, 0x4e, 0x26, 0xbd,
      0xb6, 0x2c, 0xc1, 0xc8, 0xea, 0x7a, 0x0a, 0xd1,
      0xf0, 0x77, 0xaf, 0x91, 0x46, 0x22, 0x68, 0xa4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__TargetEEState_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0xf3, 0x28, 0x3c, 0x5d, 0x78, 0x6e, 0x22,
      0x0c, 0xec, 0x12, 0xff, 0x66, 0xc9, 0x53, 0xf7,
      0x4f, 0xbe, 0x96, 0x1d, 0xd6, 0x0c, 0x42, 0xe5,
      0x7f, 0xf2, 0xae, 0x49, 0x5c, 0x8e, 0xba, 0xcc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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

static char v2_robot_arm_interfaces__srv__TargetEEState__TYPE_NAME[] = "v2_robot_arm_interfaces/srv/TargetEEState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char v2_robot_arm_interfaces__srv__TargetEEState_Event__TYPE_NAME[] = "v2_robot_arm_interfaces/srv/TargetEEState_Event";
static char v2_robot_arm_interfaces__srv__TargetEEState_Request__TYPE_NAME[] = "v2_robot_arm_interfaces/srv/TargetEEState_Request";
static char v2_robot_arm_interfaces__srv__TargetEEState_Response__TYPE_NAME[] = "v2_robot_arm_interfaces/srv/TargetEEState_Response";

// Define type names, field names, and default values
static char v2_robot_arm_interfaces__srv__TargetEEState__FIELD_NAME__request_message[] = "request_message";
static char v2_robot_arm_interfaces__srv__TargetEEState__FIELD_NAME__response_message[] = "response_message";
static char v2_robot_arm_interfaces__srv__TargetEEState__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__srv__TargetEEState__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__srv__TargetEEState__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2_robot_arm_interfaces__srv__TargetEEState_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__TargetEEState__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2_robot_arm_interfaces__srv__TargetEEState_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__TargetEEState__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2_robot_arm_interfaces__srv__TargetEEState_Event__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2_robot_arm_interfaces__srv__TargetEEState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__TargetEEState_Event__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__TargetEEState_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__TargetEEState_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__TargetEEState__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__srv__TargetEEState__TYPE_NAME, 41, 41},
      {v2_robot_arm_interfaces__srv__TargetEEState__FIELDS, 3, 3},
    },
    {v2_robot_arm_interfaces__srv__TargetEEState__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = v2_robot_arm_interfaces__srv__TargetEEState_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = v2_robot_arm_interfaces__srv__TargetEEState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = v2_robot_arm_interfaces__srv__TargetEEState_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char v2_robot_arm_interfaces__srv__TargetEEState_Request__FIELD_NAME__target_end_effector_value[] = "target_end_effector_value";
static char v2_robot_arm_interfaces__srv__TargetEEState_Request__FIELD_NAME__target_end_effector_bool[] = "target_end_effector_bool";
static char v2_robot_arm_interfaces__srv__TargetEEState_Request__DEFAULT_VALUE__target_end_effector_bool[] = "0";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__srv__TargetEEState_Request__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__srv__TargetEEState_Request__FIELD_NAME__target_end_effector_value, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__TargetEEState_Request__FIELD_NAME__target_end_effector_bool, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__TargetEEState_Request__DEFAULT_VALUE__target_end_effector_bool, 1, 1},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__TargetEEState_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__srv__TargetEEState_Request__TYPE_NAME, 49, 49},
      {v2_robot_arm_interfaces__srv__TargetEEState_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char v2_robot_arm_interfaces__srv__TargetEEState_Response__FIELD_NAME__current_end_effector_value[] = "current_end_effector_value";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__srv__TargetEEState_Response__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__srv__TargetEEState_Response__FIELD_NAME__current_end_effector_value, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__TargetEEState_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__srv__TargetEEState_Response__TYPE_NAME, 50, 50},
      {v2_robot_arm_interfaces__srv__TargetEEState_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char v2_robot_arm_interfaces__srv__TargetEEState_Event__FIELD_NAME__info[] = "info";
static char v2_robot_arm_interfaces__srv__TargetEEState_Event__FIELD_NAME__request[] = "request";
static char v2_robot_arm_interfaces__srv__TargetEEState_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__srv__TargetEEState_Event__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__srv__TargetEEState_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__TargetEEState_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {v2_robot_arm_interfaces__srv__TargetEEState_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__TargetEEState_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {v2_robot_arm_interfaces__srv__TargetEEState_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2_robot_arm_interfaces__srv__TargetEEState_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__TargetEEState_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__TargetEEState_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__TargetEEState_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__srv__TargetEEState_Event__TYPE_NAME, 47, 47},
      {v2_robot_arm_interfaces__srv__TargetEEState_Event__FIELDS, 3, 3},
    },
    {v2_robot_arm_interfaces__srv__TargetEEState_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = v2_robot_arm_interfaces__srv__TargetEEState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = v2_robot_arm_interfaces__srv__TargetEEState_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 target_end_effector_value\n"
  "int8 target_end_effector_bool 0\n"
  "---\n"
  "float32 current_end_effector_value";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__TargetEEState__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__srv__TargetEEState__TYPE_NAME, 41, 41},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 104, 104},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__TargetEEState_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__srv__TargetEEState_Request__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__TargetEEState_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__srv__TargetEEState_Response__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__TargetEEState_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__srv__TargetEEState_Event__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__TargetEEState__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__srv__TargetEEState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *v2_robot_arm_interfaces__srv__TargetEEState_Event__get_individual_type_description_source(NULL);
    sources[4] = *v2_robot_arm_interfaces__srv__TargetEEState_Request__get_individual_type_description_source(NULL);
    sources[5] = *v2_robot_arm_interfaces__srv__TargetEEState_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__TargetEEState_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__srv__TargetEEState_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__TargetEEState_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__srv__TargetEEState_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__TargetEEState_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__srv__TargetEEState_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *v2_robot_arm_interfaces__srv__TargetEEState_Request__get_individual_type_description_source(NULL);
    sources[4] = *v2_robot_arm_interfaces__srv__TargetEEState_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
