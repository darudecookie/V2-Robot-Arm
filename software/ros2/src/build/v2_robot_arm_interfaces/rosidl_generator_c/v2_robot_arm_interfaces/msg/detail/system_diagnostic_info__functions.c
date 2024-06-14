// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2_robot_arm_interfaces:msg/SystemDiagnosticInfo.idl
// generated code does not contain a copyright notice
#include "v2_robot_arm_interfaces/msg/detail/system_diagnostic_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `temperatures`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__init(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo * msg)
{
  if (!msg) {
    return false;
  }
  // estop
  msg->estop = 0;
  // jointhold
  msg->jointhold = 0;
  // temperatures
  if (!rosidl_runtime_c__float__Sequence__init(&msg->temperatures, 0)) {
    v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__fini(msg);
    return false;
  }
  return true;
}

void
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__fini(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo * msg)
{
  if (!msg) {
    return;
  }
  // estop
  // jointhold
  // temperatures
  rosidl_runtime_c__float__Sequence__fini(&msg->temperatures);
}

bool
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__are_equal(const v2_robot_arm_interfaces__msg__SystemDiagnosticInfo * lhs, const v2_robot_arm_interfaces__msg__SystemDiagnosticInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // estop
  if (lhs->estop != rhs->estop) {
    return false;
  }
  // jointhold
  if (lhs->jointhold != rhs->jointhold) {
    return false;
  }
  // temperatures
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->temperatures), &(rhs->temperatures)))
  {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__copy(
  const v2_robot_arm_interfaces__msg__SystemDiagnosticInfo * input,
  v2_robot_arm_interfaces__msg__SystemDiagnosticInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // estop
  output->estop = input->estop;
  // jointhold
  output->jointhold = input->jointhold;
  // temperatures
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->temperatures), &(output->temperatures)))
  {
    return false;
  }
  return true;
}

v2_robot_arm_interfaces__msg__SystemDiagnosticInfo *
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__msg__SystemDiagnosticInfo * msg = (v2_robot_arm_interfaces__msg__SystemDiagnosticInfo *)allocator.allocate(sizeof(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo));
  bool success = v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__destroy(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence__init(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__msg__SystemDiagnosticInfo * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__msg__SystemDiagnosticInfo *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence__fini(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence * array)
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
      v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__fini(&array->data[i]);
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

v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence *
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence * array = (v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence__destroy(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence__are_equal(const v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence * lhs, const v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence__copy(
  const v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence * input,
  v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__msg__SystemDiagnosticInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__msg__SystemDiagnosticInfo * data =
      (v2_robot_arm_interfaces__msg__SystemDiagnosticInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__msg__SystemDiagnosticInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
