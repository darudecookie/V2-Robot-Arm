// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from v2_robot_arm_interfaces:action/ParametricTrajectoryInfo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"
#include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace v2_robot_arm_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ParametricTrajectoryInfo_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParametricTrajectoryInfo_Goal_type_support_ids_t;

static const _ParametricTrajectoryInfo_Goal_type_support_ids_t _ParametricTrajectoryInfo_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ParametricTrajectoryInfo_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParametricTrajectoryInfo_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParametricTrajectoryInfo_Goal_type_support_symbol_names_t _ParametricTrajectoryInfo_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_Goal)),
  }
};

typedef struct _ParametricTrajectoryInfo_Goal_type_support_data_t
{
  void * data[2];
} _ParametricTrajectoryInfo_Goal_type_support_data_t;

static _ParametricTrajectoryInfo_Goal_type_support_data_t _ParametricTrajectoryInfo_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParametricTrajectoryInfo_Goal_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_ParametricTrajectoryInfo_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ParametricTrajectoryInfo_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ParametricTrajectoryInfo_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParametricTrajectoryInfo_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParametricTrajectoryInfo_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__get_type_hash,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__get_type_description,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Goal>()
{
  return &::v2_robot_arm_interfaces::action::rosidl_typesupport_cpp::ParametricTrajectoryInfo_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_Goal)() {
  return get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Goal>();
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
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ParametricTrajectoryInfo_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParametricTrajectoryInfo_Result_type_support_ids_t;

static const _ParametricTrajectoryInfo_Result_type_support_ids_t _ParametricTrajectoryInfo_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ParametricTrajectoryInfo_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParametricTrajectoryInfo_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParametricTrajectoryInfo_Result_type_support_symbol_names_t _ParametricTrajectoryInfo_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_Result)),
  }
};

typedef struct _ParametricTrajectoryInfo_Result_type_support_data_t
{
  void * data[2];
} _ParametricTrajectoryInfo_Result_type_support_data_t;

static _ParametricTrajectoryInfo_Result_type_support_data_t _ParametricTrajectoryInfo_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParametricTrajectoryInfo_Result_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_ParametricTrajectoryInfo_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ParametricTrajectoryInfo_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ParametricTrajectoryInfo_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParametricTrajectoryInfo_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParametricTrajectoryInfo_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__get_type_hash,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__get_type_description,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Result>()
{
  return &::v2_robot_arm_interfaces::action::rosidl_typesupport_cpp::ParametricTrajectoryInfo_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_Result)() {
  return get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Result>();
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
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ParametricTrajectoryInfo_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParametricTrajectoryInfo_Feedback_type_support_ids_t;

static const _ParametricTrajectoryInfo_Feedback_type_support_ids_t _ParametricTrajectoryInfo_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ParametricTrajectoryInfo_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParametricTrajectoryInfo_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParametricTrajectoryInfo_Feedback_type_support_symbol_names_t _ParametricTrajectoryInfo_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_Feedback)),
  }
};

typedef struct _ParametricTrajectoryInfo_Feedback_type_support_data_t
{
  void * data[2];
} _ParametricTrajectoryInfo_Feedback_type_support_data_t;

static _ParametricTrajectoryInfo_Feedback_type_support_data_t _ParametricTrajectoryInfo_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParametricTrajectoryInfo_Feedback_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_ParametricTrajectoryInfo_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ParametricTrajectoryInfo_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ParametricTrajectoryInfo_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParametricTrajectoryInfo_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParametricTrajectoryInfo_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__get_type_hash,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__get_type_description,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Feedback>()
{
  return &::v2_robot_arm_interfaces::action::rosidl_typesupport_cpp::ParametricTrajectoryInfo_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_Feedback)() {
  return get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_Feedback>();
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
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ParametricTrajectoryInfo_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParametricTrajectoryInfo_SendGoal_Request_type_support_ids_t;

static const _ParametricTrajectoryInfo_SendGoal_Request_type_support_ids_t _ParametricTrajectoryInfo_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ParametricTrajectoryInfo_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParametricTrajectoryInfo_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParametricTrajectoryInfo_SendGoal_Request_type_support_symbol_names_t _ParametricTrajectoryInfo_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_SendGoal_Request)),
  }
};

typedef struct _ParametricTrajectoryInfo_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ParametricTrajectoryInfo_SendGoal_Request_type_support_data_t;

static _ParametricTrajectoryInfo_SendGoal_Request_type_support_data_t _ParametricTrajectoryInfo_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParametricTrajectoryInfo_SendGoal_Request_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_ParametricTrajectoryInfo_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ParametricTrajectoryInfo_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ParametricTrajectoryInfo_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParametricTrajectoryInfo_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParametricTrajectoryInfo_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__get_type_hash,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__get_type_description,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Request>()
{
  return &::v2_robot_arm_interfaces::action::rosidl_typesupport_cpp::ParametricTrajectoryInfo_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_SendGoal_Request)() {
  return get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Request>();
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
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ParametricTrajectoryInfo_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParametricTrajectoryInfo_SendGoal_Response_type_support_ids_t;

static const _ParametricTrajectoryInfo_SendGoal_Response_type_support_ids_t _ParametricTrajectoryInfo_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ParametricTrajectoryInfo_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParametricTrajectoryInfo_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParametricTrajectoryInfo_SendGoal_Response_type_support_symbol_names_t _ParametricTrajectoryInfo_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_SendGoal_Response)),
  }
};

typedef struct _ParametricTrajectoryInfo_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ParametricTrajectoryInfo_SendGoal_Response_type_support_data_t;

static _ParametricTrajectoryInfo_SendGoal_Response_type_support_data_t _ParametricTrajectoryInfo_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParametricTrajectoryInfo_SendGoal_Response_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_ParametricTrajectoryInfo_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ParametricTrajectoryInfo_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ParametricTrajectoryInfo_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParametricTrajectoryInfo_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParametricTrajectoryInfo_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__get_type_hash,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__get_type_description,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Response>()
{
  return &::v2_robot_arm_interfaces::action::rosidl_typesupport_cpp::ParametricTrajectoryInfo_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_SendGoal_Response)() {
  return get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Response>();
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
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ParametricTrajectoryInfo_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParametricTrajectoryInfo_SendGoal_Event_type_support_ids_t;

static const _ParametricTrajectoryInfo_SendGoal_Event_type_support_ids_t _ParametricTrajectoryInfo_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ParametricTrajectoryInfo_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParametricTrajectoryInfo_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParametricTrajectoryInfo_SendGoal_Event_type_support_symbol_names_t _ParametricTrajectoryInfo_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_SendGoal_Event)),
  }
};

typedef struct _ParametricTrajectoryInfo_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _ParametricTrajectoryInfo_SendGoal_Event_type_support_data_t;

static _ParametricTrajectoryInfo_SendGoal_Event_type_support_data_t _ParametricTrajectoryInfo_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParametricTrajectoryInfo_SendGoal_Event_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_ParametricTrajectoryInfo_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ParametricTrajectoryInfo_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ParametricTrajectoryInfo_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParametricTrajectoryInfo_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParametricTrajectoryInfo_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__get_type_hash,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__get_type_description,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Event>()
{
  return &::v2_robot_arm_interfaces::action::rosidl_typesupport_cpp::ParametricTrajectoryInfo_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_SendGoal_Event)() {
  return get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Event>();
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
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ParametricTrajectoryInfo_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParametricTrajectoryInfo_SendGoal_type_support_ids_t;

static const _ParametricTrajectoryInfo_SendGoal_type_support_ids_t _ParametricTrajectoryInfo_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ParametricTrajectoryInfo_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParametricTrajectoryInfo_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParametricTrajectoryInfo_SendGoal_type_support_symbol_names_t _ParametricTrajectoryInfo_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_SendGoal)),
  }
};

typedef struct _ParametricTrajectoryInfo_SendGoal_type_support_data_t
{
  void * data[2];
} _ParametricTrajectoryInfo_SendGoal_type_support_data_t;

static _ParametricTrajectoryInfo_SendGoal_type_support_data_t _ParametricTrajectoryInfo_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParametricTrajectoryInfo_SendGoal_service_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_ParametricTrajectoryInfo_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ParametricTrajectoryInfo_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ParametricTrajectoryInfo_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ParametricTrajectoryInfo_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParametricTrajectoryInfo_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal>,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal__get_type_hash,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal__get_type_description,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal>()
{
  return &::v2_robot_arm_interfaces::action::rosidl_typesupport_cpp::ParametricTrajectoryInfo_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ParametricTrajectoryInfo_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParametricTrajectoryInfo_GetResult_Request_type_support_ids_t;

static const _ParametricTrajectoryInfo_GetResult_Request_type_support_ids_t _ParametricTrajectoryInfo_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ParametricTrajectoryInfo_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParametricTrajectoryInfo_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParametricTrajectoryInfo_GetResult_Request_type_support_symbol_names_t _ParametricTrajectoryInfo_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_GetResult_Request)),
  }
};

typedef struct _ParametricTrajectoryInfo_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ParametricTrajectoryInfo_GetResult_Request_type_support_data_t;

static _ParametricTrajectoryInfo_GetResult_Request_type_support_data_t _ParametricTrajectoryInfo_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParametricTrajectoryInfo_GetResult_Request_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_ParametricTrajectoryInfo_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ParametricTrajectoryInfo_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ParametricTrajectoryInfo_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParametricTrajectoryInfo_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParametricTrajectoryInfo_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__get_type_hash,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__get_type_description,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Request>()
{
  return &::v2_robot_arm_interfaces::action::rosidl_typesupport_cpp::ParametricTrajectoryInfo_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_GetResult_Request)() {
  return get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Request>();
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
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ParametricTrajectoryInfo_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParametricTrajectoryInfo_GetResult_Response_type_support_ids_t;

static const _ParametricTrajectoryInfo_GetResult_Response_type_support_ids_t _ParametricTrajectoryInfo_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ParametricTrajectoryInfo_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParametricTrajectoryInfo_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParametricTrajectoryInfo_GetResult_Response_type_support_symbol_names_t _ParametricTrajectoryInfo_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_GetResult_Response)),
  }
};

typedef struct _ParametricTrajectoryInfo_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ParametricTrajectoryInfo_GetResult_Response_type_support_data_t;

static _ParametricTrajectoryInfo_GetResult_Response_type_support_data_t _ParametricTrajectoryInfo_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParametricTrajectoryInfo_GetResult_Response_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_ParametricTrajectoryInfo_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ParametricTrajectoryInfo_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ParametricTrajectoryInfo_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParametricTrajectoryInfo_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParametricTrajectoryInfo_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__get_type_hash,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__get_type_description,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Response>()
{
  return &::v2_robot_arm_interfaces::action::rosidl_typesupport_cpp::ParametricTrajectoryInfo_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_GetResult_Response)() {
  return get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Response>();
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
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ParametricTrajectoryInfo_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParametricTrajectoryInfo_GetResult_Event_type_support_ids_t;

static const _ParametricTrajectoryInfo_GetResult_Event_type_support_ids_t _ParametricTrajectoryInfo_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ParametricTrajectoryInfo_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParametricTrajectoryInfo_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParametricTrajectoryInfo_GetResult_Event_type_support_symbol_names_t _ParametricTrajectoryInfo_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_GetResult_Event)),
  }
};

typedef struct _ParametricTrajectoryInfo_GetResult_Event_type_support_data_t
{
  void * data[2];
} _ParametricTrajectoryInfo_GetResult_Event_type_support_data_t;

static _ParametricTrajectoryInfo_GetResult_Event_type_support_data_t _ParametricTrajectoryInfo_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParametricTrajectoryInfo_GetResult_Event_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_ParametricTrajectoryInfo_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ParametricTrajectoryInfo_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ParametricTrajectoryInfo_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParametricTrajectoryInfo_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParametricTrajectoryInfo_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__get_type_hash,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__get_type_description,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Event>()
{
  return &::v2_robot_arm_interfaces::action::rosidl_typesupport_cpp::ParametricTrajectoryInfo_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_GetResult_Event)() {
  return get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace v2_robot_arm_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ParametricTrajectoryInfo_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParametricTrajectoryInfo_GetResult_type_support_ids_t;

static const _ParametricTrajectoryInfo_GetResult_type_support_ids_t _ParametricTrajectoryInfo_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ParametricTrajectoryInfo_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParametricTrajectoryInfo_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParametricTrajectoryInfo_GetResult_type_support_symbol_names_t _ParametricTrajectoryInfo_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_GetResult)),
  }
};

typedef struct _ParametricTrajectoryInfo_GetResult_type_support_data_t
{
  void * data[2];
} _ParametricTrajectoryInfo_GetResult_type_support_data_t;

static _ParametricTrajectoryInfo_GetResult_type_support_data_t _ParametricTrajectoryInfo_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParametricTrajectoryInfo_GetResult_service_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_ParametricTrajectoryInfo_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ParametricTrajectoryInfo_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ParametricTrajectoryInfo_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ParametricTrajectoryInfo_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParametricTrajectoryInfo_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult>,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult__get_type_hash,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult__get_type_description,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult>()
{
  return &::v2_robot_arm_interfaces::action::rosidl_typesupport_cpp::ParametricTrajectoryInfo_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ParametricTrajectoryInfo_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParametricTrajectoryInfo_FeedbackMessage_type_support_ids_t;

static const _ParametricTrajectoryInfo_FeedbackMessage_type_support_ids_t _ParametricTrajectoryInfo_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ParametricTrajectoryInfo_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParametricTrajectoryInfo_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParametricTrajectoryInfo_FeedbackMessage_type_support_symbol_names_t _ParametricTrajectoryInfo_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_FeedbackMessage)),
  }
};

typedef struct _ParametricTrajectoryInfo_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ParametricTrajectoryInfo_FeedbackMessage_type_support_data_t;

static _ParametricTrajectoryInfo_FeedbackMessage_type_support_data_t _ParametricTrajectoryInfo_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParametricTrajectoryInfo_FeedbackMessage_message_typesupport_map = {
  2,
  "v2_robot_arm_interfaces",
  &_ParametricTrajectoryInfo_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ParametricTrajectoryInfo_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ParametricTrajectoryInfo_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParametricTrajectoryInfo_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParametricTrajectoryInfo_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__get_type_hash,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__get_type_description,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_FeedbackMessage>()
{
  return &::v2_robot_arm_interfaces::action::rosidl_typesupport_cpp::ParametricTrajectoryInfo_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo_FeedbackMessage)() {
  return get_message_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace v2_robot_arm_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t ParametricTrajectoryInfo_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo__get_type_hash,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo__get_type_description,
  &v2_robot_arm_interfaces__action__ParametricTrajectoryInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace v2_robot_arm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo>()
{
  using ::v2_robot_arm_interfaces::action::rosidl_typesupport_cpp::ParametricTrajectoryInfo_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  ParametricTrajectoryInfo_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo::Impl::SendGoalService>();
  ParametricTrajectoryInfo_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo::Impl::GetResultService>();
  ParametricTrajectoryInfo_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo::Impl::CancelGoalService>();
  ParametricTrajectoryInfo_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo::Impl::FeedbackMessage>();
  ParametricTrajectoryInfo_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::v2_robot_arm_interfaces::action::ParametricTrajectoryInfo::Impl::GoalStatusMessage>();
  return &ParametricTrajectoryInfo_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, v2_robot_arm_interfaces, action, ParametricTrajectoryInfo)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<v2_robot_arm_interfaces::action::ParametricTrajectoryInfo>();
}

#ifdef __cplusplus
}
#endif
