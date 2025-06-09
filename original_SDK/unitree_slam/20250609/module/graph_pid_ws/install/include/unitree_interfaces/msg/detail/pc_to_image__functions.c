// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_interfaces:msg/PcToImage.idl
// generated code does not contain a copyright notice
#include "unitree_interfaces/msg/detail/pc_to_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image_x`
// Member `image_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
unitree_interfaces__msg__PcToImage__init(unitree_interfaces__msg__PcToImage * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // res
  // image_x
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->image_x, 0)) {
    unitree_interfaces__msg__PcToImage__fini(msg);
    return false;
  }
  // image_y
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->image_y, 0)) {
    unitree_interfaces__msg__PcToImage__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    unitree_interfaces__msg__PcToImage__fini(msg);
    return false;
  }
  return true;
}

void
unitree_interfaces__msg__PcToImage__fini(unitree_interfaces__msg__PcToImage * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // res
  // image_x
  rosidl_runtime_c__uint16__Sequence__fini(&msg->image_x);
  // image_y
  rosidl_runtime_c__uint16__Sequence__fini(&msg->image_y);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
unitree_interfaces__msg__PcToImage__are_equal(const unitree_interfaces__msg__PcToImage * lhs, const unitree_interfaces__msg__PcToImage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // res
  if (lhs->res != rhs->res) {
    return false;
  }
  // image_x
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->image_x), &(rhs->image_x)))
  {
    return false;
  }
  // image_y
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->image_y), &(rhs->image_y)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
unitree_interfaces__msg__PcToImage__copy(
  const unitree_interfaces__msg__PcToImage * input,
  unitree_interfaces__msg__PcToImage * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // res
  output->res = input->res;
  // image_x
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->image_x), &(output->image_x)))
  {
    return false;
  }
  // image_y
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->image_y), &(output->image_y)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

unitree_interfaces__msg__PcToImage *
unitree_interfaces__msg__PcToImage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__PcToImage * msg = (unitree_interfaces__msg__PcToImage *)allocator.allocate(sizeof(unitree_interfaces__msg__PcToImage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_interfaces__msg__PcToImage));
  bool success = unitree_interfaces__msg__PcToImage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unitree_interfaces__msg__PcToImage__destroy(unitree_interfaces__msg__PcToImage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unitree_interfaces__msg__PcToImage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unitree_interfaces__msg__PcToImage__Sequence__init(unitree_interfaces__msg__PcToImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__PcToImage * data = NULL;

  if (size) {
    data = (unitree_interfaces__msg__PcToImage *)allocator.zero_allocate(size, sizeof(unitree_interfaces__msg__PcToImage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_interfaces__msg__PcToImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_interfaces__msg__PcToImage__fini(&data[i - 1]);
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
unitree_interfaces__msg__PcToImage__Sequence__fini(unitree_interfaces__msg__PcToImage__Sequence * array)
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
      unitree_interfaces__msg__PcToImage__fini(&array->data[i]);
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

unitree_interfaces__msg__PcToImage__Sequence *
unitree_interfaces__msg__PcToImage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__PcToImage__Sequence * array = (unitree_interfaces__msg__PcToImage__Sequence *)allocator.allocate(sizeof(unitree_interfaces__msg__PcToImage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unitree_interfaces__msg__PcToImage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unitree_interfaces__msg__PcToImage__Sequence__destroy(unitree_interfaces__msg__PcToImage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unitree_interfaces__msg__PcToImage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unitree_interfaces__msg__PcToImage__Sequence__are_equal(const unitree_interfaces__msg__PcToImage__Sequence * lhs, const unitree_interfaces__msg__PcToImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unitree_interfaces__msg__PcToImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unitree_interfaces__msg__PcToImage__Sequence__copy(
  const unitree_interfaces__msg__PcToImage__Sequence * input,
  unitree_interfaces__msg__PcToImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unitree_interfaces__msg__PcToImage);
    unitree_interfaces__msg__PcToImage * data =
      (unitree_interfaces__msg__PcToImage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unitree_interfaces__msg__PcToImage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          unitree_interfaces__msg__PcToImage__fini(&data[i]);
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
    if (!unitree_interfaces__msg__PcToImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
