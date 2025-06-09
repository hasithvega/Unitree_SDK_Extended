// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_interfaces:msg/Star.idl
// generated code does not contain a copyright notice
#include "unitree_interfaces/msg/detail/star__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
unitree_interfaces__msg__Star__init(unitree_interfaces__msg__Star * msg)
{
  if (!msg) {
    return false;
  }
  // off
  return true;
}

void
unitree_interfaces__msg__Star__fini(unitree_interfaces__msg__Star * msg)
{
  if (!msg) {
    return;
  }
  // off
}

bool
unitree_interfaces__msg__Star__are_equal(const unitree_interfaces__msg__Star * lhs, const unitree_interfaces__msg__Star * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // off
  if (lhs->off != rhs->off) {
    return false;
  }
  return true;
}

bool
unitree_interfaces__msg__Star__copy(
  const unitree_interfaces__msg__Star * input,
  unitree_interfaces__msg__Star * output)
{
  if (!input || !output) {
    return false;
  }
  // off
  output->off = input->off;
  return true;
}

unitree_interfaces__msg__Star *
unitree_interfaces__msg__Star__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__Star * msg = (unitree_interfaces__msg__Star *)allocator.allocate(sizeof(unitree_interfaces__msg__Star), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_interfaces__msg__Star));
  bool success = unitree_interfaces__msg__Star__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unitree_interfaces__msg__Star__destroy(unitree_interfaces__msg__Star * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unitree_interfaces__msg__Star__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unitree_interfaces__msg__Star__Sequence__init(unitree_interfaces__msg__Star__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__Star * data = NULL;

  if (size) {
    data = (unitree_interfaces__msg__Star *)allocator.zero_allocate(size, sizeof(unitree_interfaces__msg__Star), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_interfaces__msg__Star__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_interfaces__msg__Star__fini(&data[i - 1]);
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
unitree_interfaces__msg__Star__Sequence__fini(unitree_interfaces__msg__Star__Sequence * array)
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
      unitree_interfaces__msg__Star__fini(&array->data[i]);
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

unitree_interfaces__msg__Star__Sequence *
unitree_interfaces__msg__Star__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__Star__Sequence * array = (unitree_interfaces__msg__Star__Sequence *)allocator.allocate(sizeof(unitree_interfaces__msg__Star__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unitree_interfaces__msg__Star__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unitree_interfaces__msg__Star__Sequence__destroy(unitree_interfaces__msg__Star__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unitree_interfaces__msg__Star__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unitree_interfaces__msg__Star__Sequence__are_equal(const unitree_interfaces__msg__Star__Sequence * lhs, const unitree_interfaces__msg__Star__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unitree_interfaces__msg__Star__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unitree_interfaces__msg__Star__Sequence__copy(
  const unitree_interfaces__msg__Star__Sequence * input,
  unitree_interfaces__msg__Star__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unitree_interfaces__msg__Star);
    unitree_interfaces__msg__Star * data =
      (unitree_interfaces__msg__Star *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unitree_interfaces__msg__Star__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          unitree_interfaces__msg__Star__fini(&data[i]);
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
    if (!unitree_interfaces__msg__Star__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
