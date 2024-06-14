// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2_robot_arm_interfaces:srv/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2_robot_arm_interfaces/srv/system_status.h"


#ifndef V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__FUNCTIONS_H_
#define V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__FUNCTIONS_H_

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

#include "v2_robot_arm_interfaces/srv/detail/system_status__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__SystemStatus__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__SystemStatus__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__SystemStatus__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__SystemStatus__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SystemStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2_robot_arm_interfaces__srv__SystemStatus_Request
 * )) before or use
 * v2_robot_arm_interfaces__srv__SystemStatus_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__srv__SystemStatus_Request__init(v2_robot_arm_interfaces__srv__SystemStatus_Request * msg);

/// Finalize srv/SystemStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__srv__SystemStatus_Request__fini(v2_robot_arm_interfaces__srv__SystemStatus_Request * msg);

/// Create srv/SystemStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
v2_robot_arm_interfaces__srv__SystemStatus_Request *
v2_robot_arm_interfaces__srv__SystemStatus_Request__create(void);

/// Destroy srv/SystemStatus message.
/**
 * It calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__srv__SystemStatus_Request__destroy(v2_robot_arm_interfaces__srv__SystemStatus_Request * msg);

/// Check for srv/SystemStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__srv__SystemStatus_Request__are_equal(const v2_robot_arm_interfaces__srv__SystemStatus_Request * lhs, const v2_robot_arm_interfaces__srv__SystemStatus_Request * rhs);

/// Copy a srv/SystemStatus message.
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
v2_robot_arm_interfaces__srv__SystemStatus_Request__copy(
  const v2_robot_arm_interfaces__srv__SystemStatus_Request * input,
  v2_robot_arm_interfaces__srv__SystemStatus_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__SystemStatus_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__SystemStatus_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__SystemStatus_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__SystemStatus_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SystemStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence__init(v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence * array, size_t size);

/// Finalize array of srv/SystemStatus messages.
/**
 * It calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence__fini(v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence * array);

/// Create array of srv/SystemStatus messages.
/**
 * It allocates the memory for the array and calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence *
v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence__create(size_t size);

/// Destroy array of srv/SystemStatus messages.
/**
 * It calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence__destroy(v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence * array);

/// Check for srv/SystemStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence__are_equal(const v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence * lhs, const v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence * rhs);

/// Copy an array of srv/SystemStatus messages.
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
v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence__copy(
  const v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence * input,
  v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence * output);

/// Initialize srv/SystemStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2_robot_arm_interfaces__srv__SystemStatus_Response
 * )) before or use
 * v2_robot_arm_interfaces__srv__SystemStatus_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__srv__SystemStatus_Response__init(v2_robot_arm_interfaces__srv__SystemStatus_Response * msg);

/// Finalize srv/SystemStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__srv__SystemStatus_Response__fini(v2_robot_arm_interfaces__srv__SystemStatus_Response * msg);

/// Create srv/SystemStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
v2_robot_arm_interfaces__srv__SystemStatus_Response *
v2_robot_arm_interfaces__srv__SystemStatus_Response__create(void);

/// Destroy srv/SystemStatus message.
/**
 * It calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__srv__SystemStatus_Response__destroy(v2_robot_arm_interfaces__srv__SystemStatus_Response * msg);

/// Check for srv/SystemStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__srv__SystemStatus_Response__are_equal(const v2_robot_arm_interfaces__srv__SystemStatus_Response * lhs, const v2_robot_arm_interfaces__srv__SystemStatus_Response * rhs);

/// Copy a srv/SystemStatus message.
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
v2_robot_arm_interfaces__srv__SystemStatus_Response__copy(
  const v2_robot_arm_interfaces__srv__SystemStatus_Response * input,
  v2_robot_arm_interfaces__srv__SystemStatus_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__SystemStatus_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__SystemStatus_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__SystemStatus_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__SystemStatus_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SystemStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence__init(v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence * array, size_t size);

/// Finalize array of srv/SystemStatus messages.
/**
 * It calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence__fini(v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence * array);

/// Create array of srv/SystemStatus messages.
/**
 * It allocates the memory for the array and calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence *
v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence__create(size_t size);

/// Destroy array of srv/SystemStatus messages.
/**
 * It calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence__destroy(v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence * array);

/// Check for srv/SystemStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence__are_equal(const v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence * lhs, const v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence * rhs);

/// Copy an array of srv/SystemStatus messages.
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
v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence__copy(
  const v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence * input,
  v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence * output);

/// Initialize srv/SystemStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2_robot_arm_interfaces__srv__SystemStatus_Event
 * )) before or use
 * v2_robot_arm_interfaces__srv__SystemStatus_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__srv__SystemStatus_Event__init(v2_robot_arm_interfaces__srv__SystemStatus_Event * msg);

/// Finalize srv/SystemStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__srv__SystemStatus_Event__fini(v2_robot_arm_interfaces__srv__SystemStatus_Event * msg);

/// Create srv/SystemStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
v2_robot_arm_interfaces__srv__SystemStatus_Event *
v2_robot_arm_interfaces__srv__SystemStatus_Event__create(void);

/// Destroy srv/SystemStatus message.
/**
 * It calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__srv__SystemStatus_Event__destroy(v2_robot_arm_interfaces__srv__SystemStatus_Event * msg);

/// Check for srv/SystemStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__srv__SystemStatus_Event__are_equal(const v2_robot_arm_interfaces__srv__SystemStatus_Event * lhs, const v2_robot_arm_interfaces__srv__SystemStatus_Event * rhs);

/// Copy a srv/SystemStatus message.
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
v2_robot_arm_interfaces__srv__SystemStatus_Event__copy(
  const v2_robot_arm_interfaces__srv__SystemStatus_Event * input,
  v2_robot_arm_interfaces__srv__SystemStatus_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_type_hash_t *
v2_robot_arm_interfaces__srv__SystemStatus_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
v2_robot_arm_interfaces__srv__SystemStatus_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeSource *
v2_robot_arm_interfaces__srv__SystemStatus_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2_robot_arm_interfaces__srv__SystemStatus_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SystemStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence__init(v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence * array, size_t size);

/// Finalize array of srv/SystemStatus messages.
/**
 * It calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence__fini(v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence * array);

/// Create array of srv/SystemStatus messages.
/**
 * It allocates the memory for the array and calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence *
v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence__create(size_t size);

/// Destroy array of srv/SystemStatus messages.
/**
 * It calls
 * v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
void
v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence__destroy(v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence * array);

/// Check for srv/SystemStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2_robot_arm_interfaces
bool
v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence__are_equal(const v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence * lhs, const v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence * rhs);

/// Copy an array of srv/SystemStatus messages.
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
v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence__copy(
  const v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence * input,
  v2_robot_arm_interfaces__srv__SystemStatus_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // V2_ROBOT_ARM_INTERFACES__SRV__DETAIL__SYSTEM_STATUS__FUNCTIONS_H_
