// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from v2_robot_arm_interfaces:srv/SystemStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "v2_robot_arm_interfaces/srv/detail/system_status__struct.h"
#include "v2_robot_arm_interfaces/srv/detail/system_status__type_support.h"
#include "v2_robot_arm_interfaces/srv/detail/system_status__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SystemStatus_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SystemStatus_Request_type_support_ids_t;

static const _SystemStatus_Request_type_support_ids_t _SystemStatus_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SystemStatus_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SystemStatus_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SystemStatus_Request_type_support_symbol_names_t _SystemStatus_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2_robot_arm_interfaces, srv, SystemStatus_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, SystemStatus_Request)),
  }
};

typedef struct _SystemStatus_Request_type_support_data_t
{
  void * data[2];
} _SystemStatus_Request_type_support_data_t;

static _SystemStatus_Request_type_support_data_t _SystemStatus_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SystemStatus_Request_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_SystemStatus_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SystemStatus_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SystemStatus_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SystemStatus_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SystemStatus_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__SystemStatus_Request__get_type_hash,
  &v2_robot_arm_interfaces__srv__SystemStatus_Request__get_type_description,
  &v2_robot_arm_interfaces__srv__SystemStatus_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, v2_robot_arm_interfaces, srv, SystemStatus_Request)() {
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_c::SystemStatus_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/system_status__struct.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/system_status__type_support.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/system_status__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SystemStatus_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SystemStatus_Response_type_support_ids_t;

static const _SystemStatus_Response_type_support_ids_t _SystemStatus_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SystemStatus_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SystemStatus_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SystemStatus_Response_type_support_symbol_names_t _SystemStatus_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2_robot_arm_interfaces, srv, SystemStatus_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, SystemStatus_Response)),
  }
};

typedef struct _SystemStatus_Response_type_support_data_t
{
  void * data[2];
} _SystemStatus_Response_type_support_data_t;

static _SystemStatus_Response_type_support_data_t _SystemStatus_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SystemStatus_Response_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_SystemStatus_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SystemStatus_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SystemStatus_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SystemStatus_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SystemStatus_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__SystemStatus_Response__get_type_hash,
  &v2_robot_arm_interfaces__srv__SystemStatus_Response__get_type_description,
  &v2_robot_arm_interfaces__srv__SystemStatus_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, v2_robot_arm_interfaces, srv, SystemStatus_Response)() {
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_c::SystemStatus_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/system_status__struct.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/system_status__type_support.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/system_status__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SystemStatus_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SystemStatus_Event_type_support_ids_t;

static const _SystemStatus_Event_type_support_ids_t _SystemStatus_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SystemStatus_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SystemStatus_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SystemStatus_Event_type_support_symbol_names_t _SystemStatus_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2_robot_arm_interfaces, srv, SystemStatus_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, SystemStatus_Event)),
  }
};

typedef struct _SystemStatus_Event_type_support_data_t
{
  void * data[2];
} _SystemStatus_Event_type_support_data_t;

static _SystemStatus_Event_type_support_data_t _SystemStatus_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SystemStatus_Event_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_SystemStatus_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SystemStatus_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SystemStatus_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SystemStatus_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SystemStatus_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__SystemStatus_Event__get_type_hash,
  &v2_robot_arm_interfaces__srv__SystemStatus_Event__get_type_description,
  &v2_robot_arm_interfaces__srv__SystemStatus_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, v2_robot_arm_interfaces, srv, SystemStatus_Event)() {
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_c::SystemStatus_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/system_status__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SystemStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SystemStatus_type_support_ids_t;

static const _SystemStatus_type_support_ids_t _SystemStatus_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SystemStatus_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SystemStatus_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SystemStatus_type_support_symbol_names_t _SystemStatus_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2_robot_arm_interfaces, srv, SystemStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2_robot_arm_interfaces, srv, SystemStatus)),
  }
};

typedef struct _SystemStatus_type_support_data_t
{
  void * data[2];
} _SystemStatus_type_support_data_t;

static _SystemStatus_type_support_data_t _SystemStatus_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SystemStatus_service_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_SystemStatus_service_typesupport_ids.typesupport_identifier[0],
  &_SystemStatus_service_typesupport_symbol_names.symbol_name[0],
  &_SystemStatus_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SystemStatus_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SystemStatus_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SystemStatus_Request_message_type_support_handle,
  &SystemStatus_Response_message_type_support_handle,
  &SystemStatus_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    v2_robot_arm_interfaces,
    srv,
    SystemStatus
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    v2_robot_arm_interfaces,
    srv,
    SystemStatus
  ),
  &v2_robot_arm_interfaces__srv__SystemStatus__get_type_hash,
  &v2_robot_arm_interfaces__srv__SystemStatus__get_type_description,
  &v2_robot_arm_interfaces__srv__SystemStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, v2_robot_arm_interfaces, srv, SystemStatus)() {
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_c::SystemStatus_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
