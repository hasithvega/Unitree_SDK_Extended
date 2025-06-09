// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msg:msg/UnitreeError.idl
// generated code does not contain a copyright notice
#include "graph_msg/msg/detail/unitree_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `error_log`
#include "std_msgs/msg/detail/string__functions.h"
// Member `error_flag`
#include "std_msgs/msg/detail/int8__functions.h"

bool
graph_msg__msg__UnitreeError__init(graph_msg__msg__UnitreeError * msg)
{
  if (!msg) {
    return false;
  }
  // error_log
  if (!std_msgs__msg__String__init(&msg->error_log)) {
    graph_msg__msg__UnitreeError__fini(msg);
    return false;
  }
  // error_flag
  if (!std_msgs__msg__Int8__init(&msg->error_flag)) {
    graph_msg__msg__UnitreeError__fini(msg);
    return false;
  }
  return true;
}

void
graph_msg__msg__UnitreeError__fini(graph_msg__msg__UnitreeError * msg)
{
  if (!msg) {
    return;
  }
  // error_log
  std_msgs__msg__String__fini(&msg->error_log);
  // error_flag
  std_msgs__msg__Int8__fini(&msg->error_flag);
}

bool
graph_msg__msg__UnitreeError__are_equal(const graph_msg__msg__UnitreeError * lhs, const graph_msg__msg__UnitreeError * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_log
  if (!std_msgs__msg__String__are_equal(
      &(lhs->error_log), &(rhs->error_log)))
  {
    return false;
  }
  // error_flag
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->error_flag), &(rhs->error_flag)))
  {
    return false;
  }
  return true;
}

bool
graph_msg__msg__UnitreeError__copy(
  const graph_msg__msg__UnitreeError * input,
  graph_msg__msg__UnitreeError * output)
{
  if (!input || !output) {
    return false;
  }
  // error_log
  if (!std_msgs__msg__String__copy(
      &(input->error_log), &(output->error_log)))
  {
    return false;
  }
  // error_flag
  if (!std_msgs__msg__Int8__copy(
      &(input->error_flag), &(output->error_flag)))
  {
    return false;
  }
  return true;
}

graph_msg__msg__UnitreeError *
graph_msg__msg__UnitreeError__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__UnitreeError * msg = (graph_msg__msg__UnitreeError *)allocator.allocate(sizeof(graph_msg__msg__UnitreeError), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msg__msg__UnitreeError));
  bool success = graph_msg__msg__UnitreeError__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_msg__msg__UnitreeError__destroy(graph_msg__msg__UnitreeError * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_msg__msg__UnitreeError__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_msg__msg__UnitreeError__Sequence__init(graph_msg__msg__UnitreeError__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__UnitreeError * data = NULL;

  if (size) {
    data = (graph_msg__msg__UnitreeError *)allocator.zero_allocate(size, sizeof(graph_msg__msg__UnitreeError), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msg__msg__UnitreeError__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msg__msg__UnitreeError__fini(&data[i - 1]);
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
graph_msg__msg__UnitreeError__Sequence__fini(graph_msg__msg__UnitreeError__Sequence * array)
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
      graph_msg__msg__UnitreeError__fini(&array->data[i]);
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

graph_msg__msg__UnitreeError__Sequence *
graph_msg__msg__UnitreeError__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__UnitreeError__Sequence * array = (graph_msg__msg__UnitreeError__Sequence *)allocator.allocate(sizeof(graph_msg__msg__UnitreeError__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_msg__msg__UnitreeError__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_msg__msg__UnitreeError__Sequence__destroy(graph_msg__msg__UnitreeError__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_msg__msg__UnitreeError__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_msg__msg__UnitreeError__Sequence__are_equal(const graph_msg__msg__UnitreeError__Sequence * lhs, const graph_msg__msg__UnitreeError__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_msg__msg__UnitreeError__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_msg__msg__UnitreeError__Sequence__copy(
  const graph_msg__msg__UnitreeError__Sequence * input,
  graph_msg__msg__UnitreeError__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_msg__msg__UnitreeError);
    graph_msg__msg__UnitreeError * data =
      (graph_msg__msg__UnitreeError *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_msg__msg__UnitreeError__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          graph_msg__msg__UnitreeError__fini(&data[i]);
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
    if (!graph_msg__msg__UnitreeError__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
