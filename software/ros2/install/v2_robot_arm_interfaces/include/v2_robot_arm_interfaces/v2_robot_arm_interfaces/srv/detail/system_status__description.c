// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2_robot_arm_interfaces:srv/SystemStatus.idl
// generated code does not contain a copyright notice

#include "v2_robot_arm_interfaces/srv/detail/system_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__SystemStatus__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x29, 0xea, 0x59, 0x0f, 0x16, 0xa3, 0x13, 0x42,
      0x10, 0xad, 0x22, 0xdb, 0x08, 0x60, 0x11, 0xca,
      0x1a, 0x5a, 0x35, 0xdc, 0x09, 0x62, 0xfa, 0x8f,
      0x9a, 0xf8, 0x0f, 0xb4, 0x2b, 0x74, 0x8f, 0x91,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__SystemStatus_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0xdf, 0xcf, 0xb5, 0x0d, 0x21, 0x5b, 0xab,
      0x49, 0x84, 0xf2, 0x95, 0x39, 0x78, 0xbc, 0xb7,
      0x79, 0xe6, 0xe7, 0x6a, 0x33, 0x41, 0x23, 0xbd,
      0x17, 0xdb, 0x65, 0x1a, 0xbd, 0xc6, 0x03, 0xc0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__SystemStatus_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x80, 0x30, 0xdd, 0x78, 0x0d, 0x89, 0x65, 0x62,
      0x30, 0x88, 0x2f, 0xba, 0xe6, 0xc4, 0x76, 0x78,
      0xbe, 0x9c, 0x51, 0xcc, 0xa9, 0x45, 0xe8, 0xa9,
      0xf7, 0xc7, 0x9a, 0x93, 0xa2, 0xf8, 0x92, 0xbd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__SystemStatus_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x98, 0xa0, 0x36, 0x92, 0xeb, 0x80, 0x36, 0xd4,
      0x30, 0x4a, 0x53, 0xa5, 0xc9, 0x61, 0x40, 0x9a,
      0xe3, 0xb5, 0xa9, 0xb6, 0x32, 0x05, 0xe8, 0x95,
      0xc9, 0xe5, 0xa1, 0x7a, 0x6d, 0x4e, 0xd8, 0x56,
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

static char v2_robot_arm_interfaces__srv__SystemStatus__TYPE_NAME[] = "v2_robot_arm_interfaces/srv/SystemStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char v2_robot_arm_interfaces__srv__SystemStatus_Event__TYPE_NAME[] = "v2_robot_arm_interfaces/srv/SystemStatus_Event";
static char v2_robot_arm_interfaces__srv__SystemStatus_Request__TYPE_NAME[] = "v2_robot_arm_interfaces/srv/SystemStatus_Request";
static char v2_robot_arm_interfaces__srv__SystemStatus_Response__TYPE_NAME[] = "v2_robot_arm_interfaces/srv/SystemStatus_Response";

// Define type names, field names, and default values
static char v2_robot_arm_interfaces__srv__SystemStatus__FIELD_NAME__request_message[] = "request_message";
static char v2_robot_arm_interfaces__srv__SystemStatus__FIELD_NAME__response_message[] = "response_message";
static char v2_robot_arm_interfaces__srv__SystemStatus__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__srv__SystemStatus__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__srv__SystemStatus__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2_robot_arm_interfaces__srv__SystemStatus_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__SystemStatus__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2_robot_arm_interfaces__srv__SystemStatus_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__SystemStatus__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2_robot_arm_interfaces__srv__SystemStatus_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2_robot_arm_interfaces__srv__SystemStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__SystemStatus_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__SystemStatus_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__SystemStatus_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__SystemStatus__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__srv__SystemStatus__TYPE_NAME, 40, 40},
      {v2_robot_arm_interfaces__srv__SystemStatus__FIELDS, 3, 3},
    },
    {v2_robot_arm_interfaces__srv__SystemStatus__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = v2_robot_arm_interfaces__srv__SystemStatus_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = v2_robot_arm_interfaces__srv__SystemStatus_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = v2_robot_arm_interfaces__srv__SystemStatus_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char v2_robot_arm_interfaces__srv__SystemStatus_Request__FIELD_NAME__estop[] = "estop";
static char v2_robot_arm_interfaces__srv__SystemStatus_Request__DEFAULT_VALUE__estop[] = "0";
static char v2_robot_arm_interfaces__srv__SystemStatus_Request__FIELD_NAME__jointhold[] = "jointhold";
static char v2_robot_arm_interfaces__srv__SystemStatus_Request__DEFAULT_VALUE__jointhold[] = "0";
static char v2_robot_arm_interfaces__srv__SystemStatus_Request__FIELD_NAME__move_home[] = "move_home";
static char v2_robot_arm_interfaces__srv__SystemStatus_Request__DEFAULT_VALUE__move_home[] = "0";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__srv__SystemStatus_Request__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__srv__SystemStatus_Request__FIELD_NAME__estop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__SystemStatus_Request__DEFAULT_VALUE__estop, 1, 1},
  },
  {
    {v2_robot_arm_interfaces__srv__SystemStatus_Request__FIELD_NAME__jointhold, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__SystemStatus_Request__DEFAULT_VALUE__jointhold, 1, 1},
  },
  {
    {v2_robot_arm_interfaces__srv__SystemStatus_Request__FIELD_NAME__move_home, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {v2_robot_arm_interfaces__srv__SystemStatus_Request__DEFAULT_VALUE__move_home, 1, 1},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__SystemStatus_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__srv__SystemStatus_Request__TYPE_NAME, 48, 48},
      {v2_robot_arm_interfaces__srv__SystemStatus_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char v2_robot_arm_interfaces__srv__SystemStatus_Response__FIELD_NAME__returnsuccess[] = "returnsuccess";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__srv__SystemStatus_Response__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__srv__SystemStatus_Response__FIELD_NAME__returnsuccess, 13, 13},
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
v2_robot_arm_interfaces__srv__SystemStatus_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__srv__SystemStatus_Response__TYPE_NAME, 49, 49},
      {v2_robot_arm_interfaces__srv__SystemStatus_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char v2_robot_arm_interfaces__srv__SystemStatus_Event__FIELD_NAME__info[] = "info";
static char v2_robot_arm_interfaces__srv__SystemStatus_Event__FIELD_NAME__request[] = "request";
static char v2_robot_arm_interfaces__srv__SystemStatus_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field v2_robot_arm_interfaces__srv__SystemStatus_Event__FIELDS[] = {
  {
    {v2_robot_arm_interfaces__srv__SystemStatus_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__SystemStatus_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {v2_robot_arm_interfaces__srv__SystemStatus_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__SystemStatus_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {v2_robot_arm_interfaces__srv__SystemStatus_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2_robot_arm_interfaces__srv__SystemStatus_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__SystemStatus_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {v2_robot_arm_interfaces__srv__SystemStatus_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__SystemStatus_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2_robot_arm_interfaces__srv__SystemStatus_Event__TYPE_NAME, 46, 46},
      {v2_robot_arm_interfaces__srv__SystemStatus_Event__FIELDS, 3, 3},
    },
    {v2_robot_arm_interfaces__srv__SystemStatus_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = v2_robot_arm_interfaces__srv__SystemStatus_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = v2_robot_arm_interfaces__srv__SystemStatus_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 estop 0\n"
  "int8 jointhold 0\n"
  "int8 move_home 0\n"
  "---\n"
  "int8 returnsuccess";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__SystemStatus__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__srv__SystemStatus__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 69, 69},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__SystemStatus_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__srv__SystemStatus_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__SystemStatus_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__srv__SystemStatus_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__SystemStatus_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2_robot_arm_interfaces__srv__SystemStatus_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__SystemStatus__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__srv__SystemStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *v2_robot_arm_interfaces__srv__SystemStatus_Event__get_individual_type_description_source(NULL);
    sources[4] = *v2_robot_arm_interfaces__srv__SystemStatus_Request__get_individual_type_description_source(NULL);
    sources[5] = *v2_robot_arm_interfaces__srv__SystemStatus_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__SystemStatus_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__srv__SystemStatus_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__SystemStatus_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__srv__SystemStatus_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__SystemStatus_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2_robot_arm_interfaces__srv__SystemStatus_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *v2_robot_arm_interfaces__srv__SystemStatus_Request__get_individual_type_description_source(NULL);
    sources[4] = *v2_robot_arm_interfaces__srv__SystemStatus_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
