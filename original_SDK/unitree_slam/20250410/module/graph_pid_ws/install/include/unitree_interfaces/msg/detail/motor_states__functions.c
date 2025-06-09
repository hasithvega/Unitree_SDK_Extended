// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_interfaces:msg/MotorStates.idl
// generated code does not contain a copyright notice
#include "unitree_interfaces/msg/detail/motor_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motor_state`
#include "unitree_interfaces/msg/detail/motor_state__functions.h"

bool
unitree_interfaces__msg__MotorStates__init(unitree_interfaces__msg__MotorStates * msg)
{
  if (!msg) {
    return false;
  }
  // motor_state
  for (size_t i = 0; i < 20; ++i) {
    if (!unitree_interfaces__msg__MotorState__init(&msg->motor_state[i])) {
      unitree_interfaces__msg__MotorStates__fini(msg);
      return false;
    }
  }
  return true;
}

void
unitree_interfaces__msg__MotorStates__fini(unitree_interfaces__msg__MotorStates * msg)
{
  if (!msg) {
    return;
  }
  // motor_state
  for (size_t i = 0; i < 20; ++i) {
    unitree_interfaces__msg__MotorState__fini(&msg->motor_state[i]);
  }
}

bool
unitree_interfaces__msg__MotorStates__are_equal(const unitree_interfaces__msg__MotorStates * lhs, const unitree_interfaces__msg__MotorStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_state
  for (size_t i = 0; i < 20; ++i) {
    if (!unitree_interfaces__msg__MotorState__are_equal(
        &(lhs->motor_state[i]), &(rhs->motor_state[i])))
    {
      return false;
    }
  }
  return true;
}

bool
unitree_interfaces__msg__MotorStates__copy(
  const unitree_interfaces__msg__MotorStates * input,
  unitree_interfaces__msg__MotorStates * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_state
  for (size_t i = 0; i < 20; ++i) {
    if (!unitree_interfaces__msg__MotorState__copy(
        &(input->motor_state[i]), &(output->motor_state[i])))
    {
      return false;
    }
  }
  return true;
}

unitree_interfaces__msg__MotorStates *
unitree_interfaces__msg__MotorStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__MotorStates * msg = (unitree_interfaces__msg__MotorStates *)allocator.allocate(sizeof(unitree_interfaces__msg__MotorStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_interfaces__msg__MotorStates));
  bool success = unitree_interfaces__msg__MotorStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unitree_interfaces__msg__MotorStates__destroy(unitree_interfaces__msg__MotorStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unitree_interfaces__msg__MotorStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unitree_interfaces__msg__MotorStates__Sequence__init(unitree_interfaces__msg__MotorStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__MotorStates * data = NULL;

  if (size) {
    data = (unitree_interfaces__msg__MotorStates *)allocator.zero_allocate(size, sizeof(unitree_interfaces__msg__MotorStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_interfaces__msg__MotorStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_interfaces__msg__MotorStates__fini(&data[i - 1]);
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
unitree_interfaces__msg__MotorStates__Sequence__fini(unitree_interfaces__msg__MotorStates__Sequence * array)
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
      unitree_interfaces__msg__MotorStates__fini(&array->data[i]);
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

unitree_interfaces__msg__MotorStates__Sequence *
unitree_interfaces__msg__MotorStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__MotorStates__Sequence * array = (unitree_interfaces__msg__MotorStates__Sequence *)allocator.allocate(sizeof(unitree_interfaces__msg__MotorStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unitree_interfaces__msg__MotorStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unitree_interfaces__msg__MotorStates__Sequence__destroy(unitree_interfaces__msg__MotorStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unitree_interfaces__msg__MotorStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unitree_interfaces__msg__MotorStates__Sequence__are_equal(const unitree_interfaces__msg__MotorStates__Sequence * lhs, const unitree_interfaces__msg__MotorStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unitree_interfaces__msg__MotorStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unitree_interfaces__msg__MotorStates__Sequence__copy(
  const unitree_interfaces__msg__MotorStates__Sequence * input,
  unitree_interfaces__msg__MotorStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unitree_interfaces__msg__MotorStates);
    unitree_interfaces__msg__MotorStates * data =
      (unitree_interfaces__msg__MotorStates *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unitree_interfaces__msg__MotorStates__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          unitree_interfaces__msg__MotorStates__fini(&data[i]);
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
    if (!unitree_interfaces__msg__MotorStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
