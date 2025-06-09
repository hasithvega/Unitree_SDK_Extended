// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_interfaces:msg/BmsState.idl
// generated code does not contain a copyright notice
#include "unitree_interfaces/msg/detail/bms_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
unitree_interfaces__msg__BmsState__init(unitree_interfaces__msg__BmsState * msg)
{
  if (!msg) {
    return false;
  }
  // soc
  // current
  // cycle
  // bq_ntc
  // mcu_ntc
  // cell_voltage
  return true;
}

void
unitree_interfaces__msg__BmsState__fini(unitree_interfaces__msg__BmsState * msg)
{
  if (!msg) {
    return;
  }
  // soc
  // current
  // cycle
  // bq_ntc
  // mcu_ntc
  // cell_voltage
}

bool
unitree_interfaces__msg__BmsState__are_equal(const unitree_interfaces__msg__BmsState * lhs, const unitree_interfaces__msg__BmsState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // soc
  if (lhs->soc != rhs->soc) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // cycle
  if (lhs->cycle != rhs->cycle) {
    return false;
  }
  // bq_ntc
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->bq_ntc[i] != rhs->bq_ntc[i]) {
      return false;
    }
  }
  // mcu_ntc
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->mcu_ntc[i] != rhs->mcu_ntc[i]) {
      return false;
    }
  }
  // cell_voltage
  for (size_t i = 0; i < 30; ++i) {
    if (lhs->cell_voltage[i] != rhs->cell_voltage[i]) {
      return false;
    }
  }
  return true;
}

bool
unitree_interfaces__msg__BmsState__copy(
  const unitree_interfaces__msg__BmsState * input,
  unitree_interfaces__msg__BmsState * output)
{
  if (!input || !output) {
    return false;
  }
  // soc
  output->soc = input->soc;
  // current
  output->current = input->current;
  // cycle
  output->cycle = input->cycle;
  // bq_ntc
  for (size_t i = 0; i < 8; ++i) {
    output->bq_ntc[i] = input->bq_ntc[i];
  }
  // mcu_ntc
  for (size_t i = 0; i < 8; ++i) {
    output->mcu_ntc[i] = input->mcu_ntc[i];
  }
  // cell_voltage
  for (size_t i = 0; i < 30; ++i) {
    output->cell_voltage[i] = input->cell_voltage[i];
  }
  return true;
}

unitree_interfaces__msg__BmsState *
unitree_interfaces__msg__BmsState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__BmsState * msg = (unitree_interfaces__msg__BmsState *)allocator.allocate(sizeof(unitree_interfaces__msg__BmsState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_interfaces__msg__BmsState));
  bool success = unitree_interfaces__msg__BmsState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unitree_interfaces__msg__BmsState__destroy(unitree_interfaces__msg__BmsState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unitree_interfaces__msg__BmsState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unitree_interfaces__msg__BmsState__Sequence__init(unitree_interfaces__msg__BmsState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__BmsState * data = NULL;

  if (size) {
    data = (unitree_interfaces__msg__BmsState *)allocator.zero_allocate(size, sizeof(unitree_interfaces__msg__BmsState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_interfaces__msg__BmsState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_interfaces__msg__BmsState__fini(&data[i - 1]);
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
unitree_interfaces__msg__BmsState__Sequence__fini(unitree_interfaces__msg__BmsState__Sequence * array)
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
      unitree_interfaces__msg__BmsState__fini(&array->data[i]);
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

unitree_interfaces__msg__BmsState__Sequence *
unitree_interfaces__msg__BmsState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__BmsState__Sequence * array = (unitree_interfaces__msg__BmsState__Sequence *)allocator.allocate(sizeof(unitree_interfaces__msg__BmsState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unitree_interfaces__msg__BmsState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unitree_interfaces__msg__BmsState__Sequence__destroy(unitree_interfaces__msg__BmsState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unitree_interfaces__msg__BmsState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unitree_interfaces__msg__BmsState__Sequence__are_equal(const unitree_interfaces__msg__BmsState__Sequence * lhs, const unitree_interfaces__msg__BmsState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unitree_interfaces__msg__BmsState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unitree_interfaces__msg__BmsState__Sequence__copy(
  const unitree_interfaces__msg__BmsState__Sequence * input,
  unitree_interfaces__msg__BmsState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unitree_interfaces__msg__BmsState);
    unitree_interfaces__msg__BmsState * data =
      (unitree_interfaces__msg__BmsState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unitree_interfaces__msg__BmsState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          unitree_interfaces__msg__BmsState__fini(&data[i]);
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
    if (!unitree_interfaces__msg__BmsState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
