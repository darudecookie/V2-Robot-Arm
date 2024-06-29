// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2_robot_arm_interfaces:action/ParametricTrajectoryInfo.idl
// generated code does not contain a copyright notice
#include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `parametric_equation`
#include "rosidl_runtime_c/string_functions.h"

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // t_range
  // t_speed
  // parametric_equation
  if (!rosidl_runtime_c__String__init(&msg->parametric_equation)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__fini(msg);
    return false;
  }
  return true;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal * msg)
{
  if (!msg) {
    return;
  }
  // t_range
  // t_speed
  // parametric_equation
  rosidl_runtime_c__String__fini(&msg->parametric_equation);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // t_range
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->t_range[i] != rhs->t_range[i]) {
      return false;
    }
  }
  // t_speed
  if (lhs->t_speed != rhs->t_speed) {
    return false;
  }
  // parametric_equation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parametric_equation), &(rhs->parametric_equation)))
  {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // t_range
  for (size_t i = 0; i < 2; ++i) {
    output->t_range[i] = input->t_range[i];
  }
  // t_speed
  output->t_speed = input->t_speed;
  // parametric_equation
  if (!rosidl_runtime_c__String__copy(
      &(input->parametric_equation), &(output->parametric_equation)))
  {
    return false;
  }
  return true;
}

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal * msg = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal));
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence * array)
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
      v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__fini(&array->data[i]);
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

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence * array = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal * data =
      (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result * msg)
{
  if (!msg) {
    return false;
  }
  // returnsuccess
  return true;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result * msg)
{
  if (!msg) {
    return;
  }
  // returnsuccess
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // returnsuccess
  if (lhs->returnsuccess != rhs->returnsuccess) {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // returnsuccess
  output->returnsuccess = input->returnsuccess;
  return true;
}

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result * msg = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result));
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence * array)
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
      v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__fini(&array->data[i]);
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

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence * array = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result * data =
      (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_t
  return true;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_t
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_t
  if (lhs->current_t != rhs->current_t) {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_t
  output->current_t = input->current_t;
  return true;
}

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback * msg = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback));
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence * array)
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
      v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__fini(&array->data[i]);
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

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence * array = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback * data =
      (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__init(&msg->goal)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__fini(&msg->goal);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request * msg = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request));
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence * array)
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
      v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__fini(&array->data[i]);
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

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence * array = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request * data =
      (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response * msg = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response));
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence * array)
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
      v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__fini(&array->data[i]);
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

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence * array = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response * data =
      (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__copy(
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
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event * rhs)
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
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event * output)
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
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event * msg = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event));
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence * array)
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
      v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__fini(&array->data[i]);
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

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence * array = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event * data =
      (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request * msg = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request));
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence * array)
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
      v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__fini(&array->data[i]);
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

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence * array = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request * data =
      (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__init(&msg->result)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__fini(&msg->result);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response * msg = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response));
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence * array)
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
      v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__fini(&array->data[i]);
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

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence * array = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response * data =
      (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence__init(&msg->request, 0)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence__init(&msg->response, 0)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence__fini(&msg->request);
  // response
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence__fini(&msg->response);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event * rhs)
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
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event * output)
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
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event * msg = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event));
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence * array)
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
      v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__fini(&array->data[i]);
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

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence * array = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event * data =
      (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "v2_robot_arm_interfaces/action/detail/parametric_trajectory_info__functions.h"

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__init(&msg->feedback)) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__fini(&msg->feedback);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage * msg = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage));
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence__init(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence__fini(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence * array)
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
      v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__fini(&array->data[i]);
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

v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence *
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence * array = (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence__destroy(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence__are_equal(const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence * lhs, const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence__copy(
  const v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence * input,
  v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage * data =
      (v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__action__ParametricTrajectoryInfo_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
