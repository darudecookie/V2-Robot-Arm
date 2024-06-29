// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2_robot_arm_interfaces:srv/TargetEEState.idl
// generated code does not contain a copyright notice
#include "v2_robot_arm_interfaces/srv/detail/target_ee_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
v2_robot_arm_interfaces__srv__TargetEEState_Request__init(v2_robot_arm_interfaces__srv__TargetEEState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_end_effector_value
  return true;
}

void
v2_robot_arm_interfaces__srv__TargetEEState_Request__fini(v2_robot_arm_interfaces__srv__TargetEEState_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_end_effector_value
}

bool
v2_robot_arm_interfaces__srv__TargetEEState_Request__are_equal(const v2_robot_arm_interfaces__srv__TargetEEState_Request * lhs, const v2_robot_arm_interfaces__srv__TargetEEState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_end_effector_value
  if (lhs->target_end_effector_value != rhs->target_end_effector_value) {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__srv__TargetEEState_Request__copy(
  const v2_robot_arm_interfaces__srv__TargetEEState_Request * input,
  v2_robot_arm_interfaces__srv__TargetEEState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target_end_effector_value
  output->target_end_effector_value = input->target_end_effector_value;
  return true;
}

v2_robot_arm_interfaces__srv__TargetEEState_Request *
v2_robot_arm_interfaces__srv__TargetEEState_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__TargetEEState_Request * msg = (v2_robot_arm_interfaces__srv__TargetEEState_Request *)allocator.allocate(sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Request));
  bool success = v2_robot_arm_interfaces__srv__TargetEEState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__srv__TargetEEState_Request__destroy(v2_robot_arm_interfaces__srv__TargetEEState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__srv__TargetEEState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence__init(v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__TargetEEState_Request * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__srv__TargetEEState_Request *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__srv__TargetEEState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__srv__TargetEEState_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence__fini(v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2_robot_arm_interfaces__srv__TargetEEState_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence *
v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence * array = (v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence__destroy(v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence__are_equal(const v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence * lhs, const v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__srv__TargetEEState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence__copy(
  const v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence * input,
  v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__srv__TargetEEState_Request * data =
      (v2_robot_arm_interfaces__srv__TargetEEState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__srv__TargetEEState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__srv__TargetEEState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__srv__TargetEEState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
v2_robot_arm_interfaces__srv__TargetEEState_Response__init(v2_robot_arm_interfaces__srv__TargetEEState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // current_end_effector_value
  return true;
}

void
v2_robot_arm_interfaces__srv__TargetEEState_Response__fini(v2_robot_arm_interfaces__srv__TargetEEState_Response * msg)
{
  if (!msg) {
    return;
  }
  // current_end_effector_value
}

bool
v2_robot_arm_interfaces__srv__TargetEEState_Response__are_equal(const v2_robot_arm_interfaces__srv__TargetEEState_Response * lhs, const v2_robot_arm_interfaces__srv__TargetEEState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_end_effector_value
  if (lhs->current_end_effector_value != rhs->current_end_effector_value) {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__srv__TargetEEState_Response__copy(
  const v2_robot_arm_interfaces__srv__TargetEEState_Response * input,
  v2_robot_arm_interfaces__srv__TargetEEState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // current_end_effector_value
  output->current_end_effector_value = input->current_end_effector_value;
  return true;
}

v2_robot_arm_interfaces__srv__TargetEEState_Response *
v2_robot_arm_interfaces__srv__TargetEEState_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__TargetEEState_Response * msg = (v2_robot_arm_interfaces__srv__TargetEEState_Response *)allocator.allocate(sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Response));
  bool success = v2_robot_arm_interfaces__srv__TargetEEState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__srv__TargetEEState_Response__destroy(v2_robot_arm_interfaces__srv__TargetEEState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__srv__TargetEEState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence__init(v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__TargetEEState_Response * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__srv__TargetEEState_Response *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__srv__TargetEEState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__srv__TargetEEState_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence__fini(v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2_robot_arm_interfaces__srv__TargetEEState_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence *
v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence * array = (v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence__destroy(v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence__are_equal(const v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence * lhs, const v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__srv__TargetEEState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence__copy(
  const v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence * input,
  v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__srv__TargetEEState_Response * data =
      (v2_robot_arm_interfaces__srv__TargetEEState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__srv__TargetEEState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__srv__TargetEEState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__srv__TargetEEState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/target_ee_state__functions.h"

bool
v2_robot_arm_interfaces__srv__TargetEEState_Event__init(v2_robot_arm_interfaces__srv__TargetEEState_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    v2_robot_arm_interfaces__srv__TargetEEState_Event__fini(msg);
    return false;
  }
  // request
  if (!v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence__init(&msg->request, 0)) {
    v2_robot_arm_interfaces__srv__TargetEEState_Event__fini(msg);
    return false;
  }
  // response
  if (!v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence__init(&msg->response, 0)) {
    v2_robot_arm_interfaces__srv__TargetEEState_Event__fini(msg);
    return false;
  }
  return true;
}

void
v2_robot_arm_interfaces__srv__TargetEEState_Event__fini(v2_robot_arm_interfaces__srv__TargetEEState_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence__fini(&msg->request);
  // response
  v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence__fini(&msg->response);
}

bool
v2_robot_arm_interfaces__srv__TargetEEState_Event__are_equal(const v2_robot_arm_interfaces__srv__TargetEEState_Event * lhs, const v2_robot_arm_interfaces__srv__TargetEEState_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__srv__TargetEEState_Event__copy(
  const v2_robot_arm_interfaces__srv__TargetEEState_Event * input,
  v2_robot_arm_interfaces__srv__TargetEEState_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!v2_robot_arm_interfaces__srv__TargetEEState_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!v2_robot_arm_interfaces__srv__TargetEEState_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

v2_robot_arm_interfaces__srv__TargetEEState_Event *
v2_robot_arm_interfaces__srv__TargetEEState_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__TargetEEState_Event * msg = (v2_robot_arm_interfaces__srv__TargetEEState_Event *)allocator.allocate(sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Event));
  bool success = v2_robot_arm_interfaces__srv__TargetEEState_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__srv__TargetEEState_Event__destroy(v2_robot_arm_interfaces__srv__TargetEEState_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__srv__TargetEEState_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence__init(v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__TargetEEState_Event * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__srv__TargetEEState_Event *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__srv__TargetEEState_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__srv__TargetEEState_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence__fini(v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2_robot_arm_interfaces__srv__TargetEEState_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence *
v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence * array = (v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence__destroy(v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence__are_equal(const v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence * lhs, const v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__srv__TargetEEState_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence__copy(
  const v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence * input,
  v2_robot_arm_interfaces__srv__TargetEEState_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__srv__TargetEEState_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__srv__TargetEEState_Event * data =
      (v2_robot_arm_interfaces__srv__TargetEEState_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__srv__TargetEEState_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__srv__TargetEEState_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__srv__TargetEEState_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
