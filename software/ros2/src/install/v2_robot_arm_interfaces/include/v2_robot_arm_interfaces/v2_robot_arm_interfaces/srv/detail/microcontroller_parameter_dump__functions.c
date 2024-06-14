// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2_robot_arm_interfaces:srv/MicrocontrollerParameterDump.idl
// generated code does not contain a copyright notice
#include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__init(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * msg)
{
  if (!msg) {
    return false;
  }
  // joint_position_limit_update_target
  msg->joint_position_limit_update_target = -10;
  // joint_position_limit_update_params
  msg->joint_position_limit_update_params[0] = 0.0f;
  msg->joint_position_limit_update_params[1] = 0.0f;
  // joint_velocity_limit_update_target
  msg->joint_velocity_limit_update_target = -10;
  // joint_velocity_limit_update_params
  msg->joint_velocity_limit_update_params[0] = 0.0f;
  msg->joint_velocity_limit_update_params[1] = 0.0f;
  // joint_torque_limit_update_target
  msg->joint_torque_limit_update_target = -10;
  // joint_torque_limit_update_params
  msg->joint_torque_limit_update_params[0] = 0.0f;
  msg->joint_torque_limit_update_params[1] = 0.0f;
  // joint_acceleration_limit_update_target
  msg->joint_acceleration_limit_update_target = -10;
  // joint_acceleration_limit_update_params
  msg->joint_acceleration_limit_update_params[0] = 0.0f;
  msg->joint_acceleration_limit_update_params[1] = 0.0f;
  // joint_jerk_limit_update_target
  msg->joint_jerk_limit_update_target = -10;
  // joint_jerk_limit_update_params
  msg->joint_jerk_limit_update_params[0] = 0.0f;
  msg->joint_jerk_limit_update_params[1] = 0.0f;
  // x_workspace_bounds
  msg->x_workspace_bounds[0] = -1.0f;
  msg->x_workspace_bounds[1] = -1.0f;
  // y_workspace_bounds
  msg->y_workspace_bounds[0] = -1.0f;
  msg->y_workspace_bounds[1] = -1.0f;
  // z_workspace_bounds
  msg->z_workspace_bounds[0] = -1.0f;
  msg->z_workspace_bounds[1] = -1.0f;
  // pid_update_target
  msg->pid_update_target = -10;
  // pid_update_params
  msg->pid_update_params[0] = -1.0f;
  msg->pid_update_params[1] = -1.0f;
  msg->pid_update_params[2] = -1.0f;
  // joint_home_positions
  msg->joint_home_positions[0] = -100.0f;
  msg->joint_home_positions[1] = -100.0f;
  msg->joint_home_positions[2] = -100.0f;
  msg->joint_home_positions[3] = -100.0f;
  msg->joint_home_positions[4] = -100.0f;
  msg->joint_home_positions[5] = -100.0f;
  msg->joint_home_positions[6] = -100.0f;
  return true;
}

void
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__fini(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * msg)
{
  if (!msg) {
    return;
  }
  // joint_position_limit_update_target
  // joint_position_limit_update_params
  // joint_velocity_limit_update_target
  // joint_velocity_limit_update_params
  // joint_torque_limit_update_target
  // joint_torque_limit_update_params
  // joint_acceleration_limit_update_target
  // joint_acceleration_limit_update_params
  // joint_jerk_limit_update_target
  // joint_jerk_limit_update_params
  // x_workspace_bounds
  // y_workspace_bounds
  // z_workspace_bounds
  // pid_update_target
  // pid_update_params
  // joint_home_positions
}

bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__are_equal(const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * lhs, const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_position_limit_update_target
  if (lhs->joint_position_limit_update_target != rhs->joint_position_limit_update_target) {
    return false;
  }
  // joint_position_limit_update_params
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->joint_position_limit_update_params[i] != rhs->joint_position_limit_update_params[i]) {
      return false;
    }
  }
  // joint_velocity_limit_update_target
  if (lhs->joint_velocity_limit_update_target != rhs->joint_velocity_limit_update_target) {
    return false;
  }
  // joint_velocity_limit_update_params
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->joint_velocity_limit_update_params[i] != rhs->joint_velocity_limit_update_params[i]) {
      return false;
    }
  }
  // joint_torque_limit_update_target
  if (lhs->joint_torque_limit_update_target != rhs->joint_torque_limit_update_target) {
    return false;
  }
  // joint_torque_limit_update_params
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->joint_torque_limit_update_params[i] != rhs->joint_torque_limit_update_params[i]) {
      return false;
    }
  }
  // joint_acceleration_limit_update_target
  if (lhs->joint_acceleration_limit_update_target != rhs->joint_acceleration_limit_update_target) {
    return false;
  }
  // joint_acceleration_limit_update_params
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->joint_acceleration_limit_update_params[i] != rhs->joint_acceleration_limit_update_params[i]) {
      return false;
    }
  }
  // joint_jerk_limit_update_target
  if (lhs->joint_jerk_limit_update_target != rhs->joint_jerk_limit_update_target) {
    return false;
  }
  // joint_jerk_limit_update_params
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->joint_jerk_limit_update_params[i] != rhs->joint_jerk_limit_update_params[i]) {
      return false;
    }
  }
  // x_workspace_bounds
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->x_workspace_bounds[i] != rhs->x_workspace_bounds[i]) {
      return false;
    }
  }
  // y_workspace_bounds
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->y_workspace_bounds[i] != rhs->y_workspace_bounds[i]) {
      return false;
    }
  }
  // z_workspace_bounds
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->z_workspace_bounds[i] != rhs->z_workspace_bounds[i]) {
      return false;
    }
  }
  // pid_update_target
  if (lhs->pid_update_target != rhs->pid_update_target) {
    return false;
  }
  // pid_update_params
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->pid_update_params[i] != rhs->pid_update_params[i]) {
      return false;
    }
  }
  // joint_home_positions
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joint_home_positions[i] != rhs->joint_home_positions[i]) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__copy(
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * input,
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_position_limit_update_target
  output->joint_position_limit_update_target = input->joint_position_limit_update_target;
  // joint_position_limit_update_params
  for (size_t i = 0; i < 2; ++i) {
    output->joint_position_limit_update_params[i] = input->joint_position_limit_update_params[i];
  }
  // joint_velocity_limit_update_target
  output->joint_velocity_limit_update_target = input->joint_velocity_limit_update_target;
  // joint_velocity_limit_update_params
  for (size_t i = 0; i < 2; ++i) {
    output->joint_velocity_limit_update_params[i] = input->joint_velocity_limit_update_params[i];
  }
  // joint_torque_limit_update_target
  output->joint_torque_limit_update_target = input->joint_torque_limit_update_target;
  // joint_torque_limit_update_params
  for (size_t i = 0; i < 2; ++i) {
    output->joint_torque_limit_update_params[i] = input->joint_torque_limit_update_params[i];
  }
  // joint_acceleration_limit_update_target
  output->joint_acceleration_limit_update_target = input->joint_acceleration_limit_update_target;
  // joint_acceleration_limit_update_params
  for (size_t i = 0; i < 2; ++i) {
    output->joint_acceleration_limit_update_params[i] = input->joint_acceleration_limit_update_params[i];
  }
  // joint_jerk_limit_update_target
  output->joint_jerk_limit_update_target = input->joint_jerk_limit_update_target;
  // joint_jerk_limit_update_params
  for (size_t i = 0; i < 2; ++i) {
    output->joint_jerk_limit_update_params[i] = input->joint_jerk_limit_update_params[i];
  }
  // x_workspace_bounds
  for (size_t i = 0; i < 2; ++i) {
    output->x_workspace_bounds[i] = input->x_workspace_bounds[i];
  }
  // y_workspace_bounds
  for (size_t i = 0; i < 2; ++i) {
    output->y_workspace_bounds[i] = input->y_workspace_bounds[i];
  }
  // z_workspace_bounds
  for (size_t i = 0; i < 2; ++i) {
    output->z_workspace_bounds[i] = input->z_workspace_bounds[i];
  }
  // pid_update_target
  output->pid_update_target = input->pid_update_target;
  // pid_update_params
  for (size_t i = 0; i < 3; ++i) {
    output->pid_update_params[i] = input->pid_update_params[i];
  }
  // joint_home_positions
  for (size_t i = 0; i < 7; ++i) {
    output->joint_home_positions[i] = input->joint_home_positions[i];
  }
  return true;
}

v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * msg = (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request *)allocator.allocate(sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request));
  bool success = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__destroy(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__init(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__fini(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence * array)
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
      v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__fini(&array->data[i]);
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

v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence * array = (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__destroy(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__are_equal(const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence * lhs, const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__copy(
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence * input,
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request * data =
      (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__init(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * msg)
{
  if (!msg) {
    return false;
  }
  // returnsuccess
  return true;
}

void
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__fini(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * msg)
{
  if (!msg) {
    return;
  }
  // returnsuccess
}

bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__are_equal(const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * lhs, const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * rhs)
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
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__copy(
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * input,
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // returnsuccess
  output->returnsuccess = input->returnsuccess;
  return true;
}

v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * msg = (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response *)allocator.allocate(sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response));
  bool success = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__destroy(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__init(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__fini(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence * array)
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
      v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__fini(&array->data[i]);
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

v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence * array = (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__destroy(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__are_equal(const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence * lhs, const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__copy(
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence * input,
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response * data =
      (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__copy(
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
// #include "v2_robot_arm_interfaces/srv/detail/microcontroller_parameter_dump__functions.h"

bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__init(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__fini(msg);
    return false;
  }
  // request
  if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__init(&msg->request, 0)) {
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__fini(msg);
    return false;
  }
  // response
  if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__init(&msg->response, 0)) {
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__fini(msg);
    return false;
  }
  return true;
}

void
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__fini(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__fini(&msg->request);
  // response
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__fini(&msg->response);
}

bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__are_equal(const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event * lhs, const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event * rhs)
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
  if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__copy(
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event * input,
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event * output)
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
  if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event * msg = (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event *)allocator.allocate(sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event));
  bool success = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__destroy(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence__init(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event * data = NULL;

  if (size) {
    data = (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event *)allocator.zero_allocate(size, sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__fini(&data[i - 1]);
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
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence__fini(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence * array)
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
      v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__fini(&array->data[i]);
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

v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence *
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence * array = (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence *)allocator.allocate(sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence__destroy(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence__are_equal(const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence * lhs, const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence__copy(
  const v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence * input,
  v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event * data =
      (v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2_robot_arm_interfaces__srv__MicrocontrollerParameterDump_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
