// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interface:msg/NavigationToPose.idl
// generated code does not contain a copyright notice
#include "custom_interface/msg/detail/navigation_to_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_interface__msg__NavigationToPose__init(custom_interface__msg__NavigationToPose * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    custom_interface__msg__NavigationToPose__fini(msg);
    return false;
  }
  // pose_x
  // pose_y
  // pose_z
  // quat_x
  // quat_y
  // quat_z
  // quat_w
  return true;
}

void
custom_interface__msg__NavigationToPose__fini(custom_interface__msg__NavigationToPose * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // pose_x
  // pose_y
  // pose_z
  // quat_x
  // quat_y
  // quat_z
  // quat_w
}

bool
custom_interface__msg__NavigationToPose__are_equal(const custom_interface__msg__NavigationToPose * lhs, const custom_interface__msg__NavigationToPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // pose_x
  if (lhs->pose_x != rhs->pose_x) {
    return false;
  }
  // pose_y
  if (lhs->pose_y != rhs->pose_y) {
    return false;
  }
  // pose_z
  if (lhs->pose_z != rhs->pose_z) {
    return false;
  }
  // quat_x
  if (lhs->quat_x != rhs->quat_x) {
    return false;
  }
  // quat_y
  if (lhs->quat_y != rhs->quat_y) {
    return false;
  }
  // quat_z
  if (lhs->quat_z != rhs->quat_z) {
    return false;
  }
  // quat_w
  if (lhs->quat_w != rhs->quat_w) {
    return false;
  }
  return true;
}

bool
custom_interface__msg__NavigationToPose__copy(
  const custom_interface__msg__NavigationToPose * input,
  custom_interface__msg__NavigationToPose * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // pose_x
  output->pose_x = input->pose_x;
  // pose_y
  output->pose_y = input->pose_y;
  // pose_z
  output->pose_z = input->pose_z;
  // quat_x
  output->quat_x = input->quat_x;
  // quat_y
  output->quat_y = input->quat_y;
  // quat_z
  output->quat_z = input->quat_z;
  // quat_w
  output->quat_w = input->quat_w;
  return true;
}

custom_interface__msg__NavigationToPose *
custom_interface__msg__NavigationToPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface__msg__NavigationToPose * msg = (custom_interface__msg__NavigationToPose *)allocator.allocate(sizeof(custom_interface__msg__NavigationToPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__msg__NavigationToPose));
  bool success = custom_interface__msg__NavigationToPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interface__msg__NavigationToPose__destroy(custom_interface__msg__NavigationToPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interface__msg__NavigationToPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interface__msg__NavigationToPose__Sequence__init(custom_interface__msg__NavigationToPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface__msg__NavigationToPose * data = NULL;

  if (size) {
    data = (custom_interface__msg__NavigationToPose *)allocator.zero_allocate(size, sizeof(custom_interface__msg__NavigationToPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__msg__NavigationToPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__msg__NavigationToPose__fini(&data[i - 1]);
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
custom_interface__msg__NavigationToPose__Sequence__fini(custom_interface__msg__NavigationToPose__Sequence * array)
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
      custom_interface__msg__NavigationToPose__fini(&array->data[i]);
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

custom_interface__msg__NavigationToPose__Sequence *
custom_interface__msg__NavigationToPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface__msg__NavigationToPose__Sequence * array = (custom_interface__msg__NavigationToPose__Sequence *)allocator.allocate(sizeof(custom_interface__msg__NavigationToPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__msg__NavigationToPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interface__msg__NavigationToPose__Sequence__destroy(custom_interface__msg__NavigationToPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interface__msg__NavigationToPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interface__msg__NavigationToPose__Sequence__are_equal(const custom_interface__msg__NavigationToPose__Sequence * lhs, const custom_interface__msg__NavigationToPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface__msg__NavigationToPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface__msg__NavigationToPose__Sequence__copy(
  const custom_interface__msg__NavigationToPose__Sequence * input,
  custom_interface__msg__NavigationToPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface__msg__NavigationToPose);
    custom_interface__msg__NavigationToPose * data =
      (custom_interface__msg__NavigationToPose *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface__msg__NavigationToPose__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interface__msg__NavigationToPose__fini(&data[i]);
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
    if (!custom_interface__msg__NavigationToPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
