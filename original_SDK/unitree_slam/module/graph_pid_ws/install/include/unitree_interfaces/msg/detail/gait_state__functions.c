// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_interfaces:msg/GaitState.idl
// generated code does not contain a copyright notice
#include "unitree_interfaces/msg/detail/gait_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
unitree_interfaces__msg__GaitState__init(unitree_interfaces__msg__GaitState * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // gait_type
  // foot_raise_height
  // body_height
  // position
  // velocity
  // yaw_speed
  return true;
}

void
unitree_interfaces__msg__GaitState__fini(unitree_interfaces__msg__GaitState * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // gait_type
  // foot_raise_height
  // body_height
  // position
  // velocity
  // yaw_speed
}

bool
unitree_interfaces__msg__GaitState__are_equal(const unitree_interfaces__msg__GaitState * lhs, const unitree_interfaces__msg__GaitState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // gait_type
  if (lhs->gait_type != rhs->gait_type) {
    return false;
  }
  // foot_raise_height
  if (lhs->foot_raise_height != rhs->foot_raise_height) {
    return false;
  }
  // body_height
  if (lhs->body_height != rhs->body_height) {
    return false;
  }
  // position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->velocity[i] != rhs->velocity[i]) {
      return false;
    }
  }
  // yaw_speed
  if (lhs->yaw_speed != rhs->yaw_speed) {
    return false;
  }
  return true;
}

bool
unitree_interfaces__msg__GaitState__copy(
  const unitree_interfaces__msg__GaitState * input,
  unitree_interfaces__msg__GaitState * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // gait_type
  output->gait_type = input->gait_type;
  // foot_raise_height
  output->foot_raise_height = input->foot_raise_height;
  // body_height
  output->body_height = input->body_height;
  // position
  for (size_t i = 0; i < 3; ++i) {
    output->position[i] = input->position[i];
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    output->velocity[i] = input->velocity[i];
  }
  // yaw_speed
  output->yaw_speed = input->yaw_speed;
  return true;
}

unitree_interfaces__msg__GaitState *
unitree_interfaces__msg__GaitState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__GaitState * msg = (unitree_interfaces__msg__GaitState *)allocator.allocate(sizeof(unitree_interfaces__msg__GaitState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_interfaces__msg__GaitState));
  bool success = unitree_interfaces__msg__GaitState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unitree_interfaces__msg__GaitState__destroy(unitree_interfaces__msg__GaitState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unitree_interfaces__msg__GaitState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unitree_interfaces__msg__GaitState__Sequence__init(unitree_interfaces__msg__GaitState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__GaitState * data = NULL;

  if (size) {
    data = (unitree_interfaces__msg__GaitState *)allocator.zero_allocate(size, sizeof(unitree_interfaces__msg__GaitState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_interfaces__msg__GaitState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_interfaces__msg__GaitState__fini(&data[i - 1]);
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
unitree_interfaces__msg__GaitState__Sequence__fini(unitree_interfaces__msg__GaitState__Sequence * array)
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
      unitree_interfaces__msg__GaitState__fini(&array->data[i]);
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

unitree_interfaces__msg__GaitState__Sequence *
unitree_interfaces__msg__GaitState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__GaitState__Sequence * array = (unitree_interfaces__msg__GaitState__Sequence *)allocator.allocate(sizeof(unitree_interfaces__msg__GaitState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unitree_interfaces__msg__GaitState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unitree_interfaces__msg__GaitState__Sequence__destroy(unitree_interfaces__msg__GaitState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unitree_interfaces__msg__GaitState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unitree_interfaces__msg__GaitState__Sequence__are_equal(const unitree_interfaces__msg__GaitState__Sequence * lhs, const unitree_interfaces__msg__GaitState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unitree_interfaces__msg__GaitState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unitree_interfaces__msg__GaitState__Sequence__copy(
  const unitree_interfaces__msg__GaitState__Sequence * input,
  unitree_interfaces__msg__GaitState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unitree_interfaces__msg__GaitState);
    unitree_interfaces__msg__GaitState * data =
      (unitree_interfaces__msg__GaitState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unitree_interfaces__msg__GaitState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          unitree_interfaces__msg__GaitState__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!unitree_interfaces__msg__GaitState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
