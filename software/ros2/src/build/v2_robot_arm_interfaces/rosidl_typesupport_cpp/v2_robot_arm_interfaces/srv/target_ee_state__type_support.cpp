// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from v2_robot_arm_interfaces:srv/TargetEEState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "v2_robot_arm_interfaces/srv/detail/target_ee_state__functions.h"
#include "v2_robot_arm_interfaces/srv/detail/target_ee_state__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TargetEEState_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TargetEEState_Request_type_support_ids_t;

static const _TargetEEState_Request_type_support_ids_t _TargetEEState_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TargetEEState_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TargetEEState_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TargetEEState_Request_type_support_symbol_names_t _TargetEEState_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, srv, TargetEEState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, srv, TargetEEState_Request)),
  }
};

typedef struct _TargetEEState_Request_type_support_data_t
{
  void * data[2];
} _TargetEEState_Request_type_support_data_t;

static _TargetEEState_Request_type_support_data_t _TargetEEState_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TargetEEState_Request_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_TargetEEState_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TargetEEState_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TargetEEState_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TargetEEState_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TargetEEState_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__TargetEEState_Request__get_type_hash,
  &v2_robot_arm_interfaces__srv__TargetEEState_Request__get_type_description,
  &v2_robot_arm_interfaces__srv__TargetEEState_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::srv::TargetEEState_Request>()
{
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_cpp::TargetEEState_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, srv, TargetEEState_Request)() {
  return get_message_type_support_handle<v2_robot_arm_interfaces::srv::TargetEEState_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/target_ee_state__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/target_ee_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TargetEEState_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TargetEEState_Response_type_support_ids_t;

static const _TargetEEState_Response_type_support_ids_t _TargetEEState_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TargetEEState_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TargetEEState_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TargetEEState_Response_type_support_symbol_names_t _TargetEEState_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, srv, TargetEEState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, srv, TargetEEState_Response)),
  }
};

typedef struct _TargetEEState_Response_type_support_data_t
{
  void * data[2];
} _TargetEEState_Response_type_support_data_t;

static _TargetEEState_Response_type_support_data_t _TargetEEState_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TargetEEState_Response_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_TargetEEState_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TargetEEState_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TargetEEState_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TargetEEState_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TargetEEState_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__TargetEEState_Response__get_type_hash,
  &v2_robot_arm_interfaces__srv__TargetEEState_Response__get_type_description,
  &v2_robot_arm_interfaces__srv__TargetEEState_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::srv::TargetEEState_Response>()
{
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_cpp::TargetEEState_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, srv, TargetEEState_Response)() {
  return get_message_type_support_handle<v2_robot_arm_interfaces::srv::TargetEEState_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/target_ee_state__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/target_ee_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TargetEEState_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TargetEEState_Event_type_support_ids_t;

static const _TargetEEState_Event_type_support_ids_t _TargetEEState_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TargetEEState_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TargetEEState_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TargetEEState_Event_type_support_symbol_names_t _TargetEEState_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, srv, TargetEEState_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, srv, TargetEEState_Event)),
  }
};

typedef struct _TargetEEState_Event_type_support_data_t
{
  void * data[2];
} _TargetEEState_Event_type_support_data_t;

static _TargetEEState_Event_type_support_data_t _TargetEEState_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TargetEEState_Event_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_TargetEEState_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TargetEEState_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TargetEEState_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TargetEEState_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TargetEEState_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__srv__TargetEEState_Event__get_type_hash,
  &v2_robot_arm_interfaces__srv__TargetEEState_Event__get_type_description,
  &v2_robot_arm_interfaces__srv__TargetEEState_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::srv::TargetEEState_Event>()
{
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_cpp::TargetEEState_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, srv, TargetEEState_Event)() {
  return get_message_type_support_handle<v2_robot_arm_interfaces::srv::TargetEEState_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/target_ee_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace v2_robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TargetEEState_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TargetEEState_type_support_ids_t;

static const _TargetEEState_type_support_ids_t _TargetEEState_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TargetEEState_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TargetEEState_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TargetEEState_type_support_symbol_names_t _TargetEEState_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, srv, TargetEEState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, srv, TargetEEState)),
  }
};

typedef struct _TargetEEState_type_support_data_t
{
  void * data[2];
} _TargetEEState_type_support_data_t;

static _TargetEEState_type_support_data_t _TargetEEState_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TargetEEState_service_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_TargetEEState_service_typesupport_ids.typesupport_identifier[0],
  &_TargetEEState_service_typesupport_symbol_names.symbol_name[0],
  &_TargetEEState_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TargetEEState_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TargetEEState_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::srv::TargetEEState_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::srv::TargetEEState_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::srv::TargetEEState_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<v2_robot_arm_interfaces::srv::TargetEEState>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<v2_robot_arm_interfaces::srv::TargetEEState>,
  &v2_robot_arm_interfaces__srv__TargetEEState__get_type_hash,
  &v2_robot_arm_interfaces__srv__TargetEEState__get_type_description,
  &v2_robot_arm_interfaces__srv__TargetEEState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<v2_robot_arm_interfaces::srv::TargetEEState>()
{
  return &::v2_robot_arm_interfaces::srv::rosidl_typesupport_cpp::TargetEEState_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, srv, TargetEEState)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<v2_robot_arm_interfaces::srv::TargetEEState>();
}

#ifdef __cplusplus
}
#endif
