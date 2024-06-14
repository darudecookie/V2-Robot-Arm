// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2_robot_arm_interfaces:msg/CurrentJointInfo.idl
// generated code does not contain a copyright notice
#include "v2_robot_arm_interfaces/msg/detail/current_joint_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
v2_robot_arm_interfaces__msg__CurrentJointInfo__init(v2_robot_arm_interfaces__msg__CurrentJointInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    v2_robot_arm_interfaces__msg__CurrentJointInfo__fini(msg);
    return false;
  }
  // current_joint_positions
  // current_joint_velocity
  // current_joint_acceleration
  // current_joint_jerks
  // current_joint_torques
  return true;
}

void
v2_robot_arm_interfaces__msg__CurrentJointInfo__fini(v2_robot_arm_interfaces__msg__CurrentJointInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // current_joint_positions
  // current_joint_velocity
  // current_joint_acceleration
  // current_joint_jerks
  // current_joint_torques
}

bool
v2_robot_arm_interfaces__msg__CurrentJointInfo__are_equal(const v2_robot_arm_interfaces__msg__CurrentJointInfo * lhs, const v2_robot_arm_interfaces__msg__CurrentJointInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // current_joint_positions
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->current_joint_positions[i] != rhs->current_joint_positions[i]) {
      return false;
    }
  }
  // current_joint_velocity
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->current_joint_velocity[i] != rhs->current_joint_velocity[i]) {
      return false;
    }
  }
  // current_joint_acceleration
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->current_joint_acceleration[i] != rhs->current_joint_acceleration[i]) {
      return false;
    }
  }
  // current_joint_jerks
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->current_joint_jerks[i] != rhs->current_joint_jerks[i]) {
      return false;
    }
  }
  // current_joint_torques
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->current_joint_torques[i] != rhs->current_joint_torques[i]) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__msg__CurrentJointInfo__copy(
  const v2_robot_arm_interfaces__msg__CurrentJointInfo * input,
  v2_robot_arm_interfaces__msg__CurrentJointInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // current_joint_positions
  for (size_t i = 0; i < 7; ++i) {
    output->current_joint_positions[i] = input->current_joint_positions[i];
  }
  // current_joint_velocity
  for (size_t i = 0; i < 7; ++i) {
    output->current_joint_velocity[i] = input->current_joint_velocity[i];
  }
  // current_joint_acceleration
  for (size_t i = 0; i < 7; ++i) {
    output->current_joint_acceleration[i] = input->current_joint_acceleration[i];
  }
  // current_joint_jerks
  for (size_t i = 0; i < 7; ++i) {
    output->current_joint_jerks[i] = input->current_joint_jerks[i];
  }
  // current_joint_torques
  for (size_t i = 0; i < 7; ++i) {
    output->current_joint_torques[i] = input->current_joint_torques[i];
  }
  return true;
}

v2_robot_arm_interfaces__msg__CurrentJointInfo *
v2_robot_arm_interfaces__msg__CurrentJointInfo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__msg__CurrentJointInfo * msg = (v2_robot_arm_interfaces__msg__CurrentJointInfo *)allocator.allocate(sizeof(v2_robot_arm_interfaces__msg__CurrentJointInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__msg__CurrentJointInfo));
  bool success = v2_robot_arm_interfaces__msg__CurrentJointInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__msg__CurrentJointInfo__destroy(v2_robot_arm_interfaces__msg__CurrentJointInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__msg__CurrentJointInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence__init(v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__msg__CurrentJointInfo * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__msg__CurrentJointInfo *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__msg__CurrentJointInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__msg__CurrentJointInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__msg__CurrentJointInfo__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence__fini(v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence * array)
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
      v2_robot_arm_interfaces__msg__CurrentJointInfo__fini(&array->data[i]);
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

v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence *
v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence * array = (v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence__destroy(v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence__are_equal(const v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence * lhs, const v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__msg__CurrentJointInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence__copy(
  const v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence * input,
  v2_robot_arm_interfaces__msg__CurrentJointInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__msg__CurrentJointInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__msg__CurrentJointInfo * data =
      (v2_robot_arm_interfaces__msg__CurrentJointInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__msg__CurrentJointInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__msg__CurrentJointInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__msg__CurrentJointInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
