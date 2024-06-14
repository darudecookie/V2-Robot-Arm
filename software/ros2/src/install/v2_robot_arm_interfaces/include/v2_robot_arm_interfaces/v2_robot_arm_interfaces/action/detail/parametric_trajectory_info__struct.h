// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2_robot_arm_interfaces:action/ParametricTrajectoryInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/action/parametric_trajectory_info.h"


#ifndef V2_ROBOT_ARM_INTERFACES__ACTION__DETAIL__PARAMETRIC_TRAJECTORY_INFO__STRUCT_H_
#define V2_ROBOT_ARM_INTERFACES__ACTION__DETAIL__PARAMETRIC_TRAJECTORY_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parametric_equation'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ParametricTrajectoryInfo in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal
{
  float t_range[2];
  float t_speed;
  rosidl_runtime_c__String parametric_equation;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal;

// Struct for a sequence of v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/ParametricTrajectoryInfo in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result
{
  int8_t returnsuccess;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result;

// Struct for a sequence of v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/ParametricTrajectoryInfo in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback
{
  float current_t;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback;

// Struct for a sequence of v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.h"

/// Struct defined in action/ParametricTrajectoryInfo in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal goal;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request;

// Struct for a sequence of v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ParametricTrajectoryInfo in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response;

// Struct for a sequence of v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ParametricTrajectoryInfo in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence request;
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence response;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event;

// Struct for a sequence of v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ParametricTrajectoryInfo in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request;

// Struct for a sequence of v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.h"

/// Struct defined in action/ParametricTrajectoryInfo in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response
{
  int8_t status;
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result result;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response;

// Struct for a sequence of v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ParametricTrajectoryInfo in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence request;
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence response;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event;

// Struct for a sequence of v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__struct.h"

/// Struct defined in action/ParametricTrajectoryInfo in the package v2_robot_arm_interfaces.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback feedback;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage;

// Struct for a sequence of v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage.
typedef struct v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence
{
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2_ROBOT_ARM_INTERFACES__ACTION__DETAIL__PARAMETRIC_TRAJECTORY_INFO__STRUCT_H_
