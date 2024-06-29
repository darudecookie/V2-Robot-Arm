// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2_robot_arm_interfaces:msg/TargetJointInfo.idl
// generated code does not contain a copyright notice
#include "v2_robot_arm_interfaces/msg/detail/target_joint_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
v2_robot_arm_interfaces__msg__TargetJointInfo__init(v2_robot_arm_interfaces__msg__TargetJointInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    v2_robot_arm_interfaces__msg__TargetJointInfo__fini(msg);
    return false;
  }
  // param_to_control
  // target_joint_positions
  // target_joint_velocities
  // target_joint_torques
  return true;
}

void
v2_robot_arm_interfaces__msg__TargetJointInfo__fini(v2_robot_arm_interfaces__msg__TargetJointInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // param_to_control
  // target_joint_positions
  // target_joint_velocities
  // target_joint_torques
}

bool
v2_robot_arm_interfaces__msg__TargetJointInfo__are_equal(const v2_robot_arm_interfaces__msg__TargetJointInfo * lhs, const v2_robot_arm_interfaces__msg__TargetJointInfo * rhs)
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
  // param_to_control
  if (lhs->param_to_control != rhs->param_to_control) {
    return false;
  }
  // target_joint_positions
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->target_joint_positions[i] != rhs->target_joint_positions[i]) {
      return false;
    }
  }
  // target_joint_velocities
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->target_joint_velocities[i] != rhs->target_joint_velocities[i]) {
      return false;
    }
  }
  // target_joint_torques
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->target_joint_torques[i] != rhs->target_joint_torques[i]) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__msg__TargetJointInfo__copy(
  const v2_robot_arm_interfaces__msg__TargetJointInfo * input,
  v2_robot_arm_interfaces__msg__TargetJointInfo * output)
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
  // param_to_control
  output->param_to_control = input->param_to_control;
  // target_joint_positions
  for (size_t i = 0; i < 7; ++i) {
    output->target_joint_positions[i] = input->target_joint_positions[i];
  }
  // target_joint_velocities
  for (size_t i = 0; i < 7; ++i) {
    output->target_joint_velocities[i] = input->target_joint_velocities[i];
  }
  // target_joint_torques
  for (size_t i = 0; i < 7; ++i) {
    output->target_joint_torques[i] = input->target_joint_torques[i];
  }
  return true;
}

v2_robot_arm_interfaces__msg__TargetJointInfo *
v2_robot_arm_interfaces__msg__TargetJointInfo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__msg__TargetJointInfo * msg = (v2_robot_arm_interfaces__msg__TargetJointInfo *)allocator.allocate(sizeof(v2_robot_arm_interfaces__msg__TargetJointInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__msg__TargetJointInfo));
  bool success = v2_robot_arm_interfaces__msg__TargetJointInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__msg__TargetJointInfo__destroy(v2_robot_arm_interfaces__msg__TargetJointInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__msg__TargetJointInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence__init(v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__msg__TargetJointInfo * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__msg__TargetJointInfo *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__msg__TargetJointInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__msg__TargetJointInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__msg__TargetJointInfo__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence__fini(v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence * array)
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
      v2_robot_arm_interfaces__msg__TargetJointInfo__fini(&array->data[i]);
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

v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence *
v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence * array = (v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence__destroy(v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence__are_equal(const v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence * lhs, const v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__msg__TargetJointInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence__copy(
  const v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence * input,
  v2_robot_arm_interfaces__msg__TargetJointInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__msg__TargetJointInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__msg__TargetJointInfo * data =
      (v2_robot_arm_interfaces__msg__TargetJointInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__msg__TargetJointInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__msg__TargetJointInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__msg__TargetJointInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
