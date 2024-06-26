// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2_robot_arm_interfaces:msg/TargetCartesian.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/msg/target_cartesian.h"


#ifndef V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_CARTESIAN__FUNCTIONS_H_
#define V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_CARTESIAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "v2_robot_arm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "v2_robot_arm_interfaces/msg/detail/target_cartesian__struct.h"

/// Initialize msg/TargetCartesian message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2_robot_arm_interfaces__msg__TargetCartesian
 * )) before or use
 * v2_robot_arm_interfaces__msg__TargetCartesian__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__msg__TargetCartesian__init(v2_robot_arm_interfaces__msg__TargetCartesian * msg);

/// Finalize msg/TargetCartesian message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__msg__TargetCartesian__fini(v2_robot_arm_interfaces__msg__TargetCartesian * msg);

/// Create msg/TargetCartesian message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2_robot_arm_interfaces__msg__TargetCartesian__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
v2_robot_arm_interfaces__msg__TargetCartesian *
v2_robot_arm_interfaces__msg__TargetCartesian__create(void);

/// Destroy msg/TargetCartesian message.
/**
 * It calls
 * v2_robot_arm_interfaces__msg__TargetCartesian__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__msg__TargetCartesian__destroy(v2_robot_arm_interfaces__msg__TargetCartesian * msg);

/// Check for msg/TargetCartesian message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__msg__TargetCartesian__are_equal(const v2_robot_arm_interfaces__msg__TargetCartesian * lhs, const v2_robot_arm_interfaces__msg__TargetCartesian * rhs);

/// Copy a msg/TargetCartesian message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__msg__TargetCartesian__copy(
  const v2_robot_arm_interfaces__msg__TargetCartesian * input,
  v2_robot_arm_interfaces__msg__TargetCartesian * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__msg__TargetCartesian__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__msg__TargetCartesian__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__msg__TargetCartesian__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__msg__TargetCartesian__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/TargetCartesian messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2_robot_arm_interfaces__msg__TargetCartesian__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__msg__TargetCartesian__Sequence__init(v2_robot_arm_interfaces__msg__TargetCartesian__Sequence * array, size_t size);

/// Finalize array of msg/TargetCartesian messages.
/**
 * It calls
 * v2_robot_arm_interfaces__msg__TargetCartesian__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__msg__TargetCartesian__Sequence__fini(v2_robot_arm_interfaces__msg__TargetCartesian__Sequence * array);

/// Create array of msg/TargetCartesian messages.
/**
 * It allocates the memory for the array and calls
 * v2_robot_arm_interfaces__msg__TargetCartesian__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
v2_robot_arm_interfaces__msg__TargetCartesian__Sequence *
v2_robot_arm_interfaces__msg__TargetCartesian__Sequence__create(size_t size);

/// Destroy array of msg/TargetCartesian messages.
/**
 * It calls
 * v2_robot_arm_interfaces__msg__TargetCartesian__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__msg__TargetCartesian__Sequence__destroy(v2_robot_arm_interfaces__msg__TargetCartesian__Sequence * array);

/// Check for msg/TargetCartesian message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__msg__TargetCartesian__Sequence__are_equal(const v2_robot_arm_interfaces__msg__TargetCartesian__Sequence * lhs, const v2_robot_arm_interfaces__msg__TargetCartesian__Sequence * rhs);

/// Copy an array of msg/TargetCartesian messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__msg__TargetCartesian__Sequence__copy(
  const v2_robot_arm_interfaces__msg__TargetCartesian__Sequence * input,
  v2_robot_arm_interfaces__msg__TargetCartesian__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2_ROBOT_ARM_INTERFACES__MSG__DETAIL__TARGET_CARTESIAN__FUNCTIONS_H_
