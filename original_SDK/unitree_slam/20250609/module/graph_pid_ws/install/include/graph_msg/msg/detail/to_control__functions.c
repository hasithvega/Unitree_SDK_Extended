// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msg:msg/ToControl.idl
// generated code does not contain a copyright notice
#include "graph_msg/msg/detail/to_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `node`
#include "graph_msg/msg/detail/node__functions.h"
// Member `edge`
#include "graph_msg/msg/detail/edge__functions.h"
// Member `undefined`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
graph_msg__msg__ToControl__init(graph_msg__msg__ToControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    graph_msg__msg__ToControl__fini(msg);
    return false;
  }
  // node
  if (!graph_msg__msg__Node__init(&msg->node)) {
    graph_msg__msg__ToControl__fini(msg);
    return false;
  }
  // edge
  if (!graph_msg__msg__Edge__init(&msg->edge)) {
    graph_msg__msg__ToControl__fini(msg);
    return false;
  }
  // goal_flag
  // err_flag
  // back_flag
  // undefined
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->undefined, 0)) {
    graph_msg__msg__ToControl__fini(msg);
    return false;
  }
  return true;
}

void
graph_msg__msg__ToControl__fini(graph_msg__msg__ToControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // node
  graph_msg__msg__Node__fini(&msg->node);
  // edge
  graph_msg__msg__Edge__fini(&msg->edge);
  // goal_flag
  // err_flag
  // back_flag
  // undefined
  rosidl_runtime_c__int8__Sequence__fini(&msg->undefined);
}

bool
graph_msg__msg__ToControl__are_equal(const graph_msg__msg__ToControl * lhs, const graph_msg__msg__ToControl * rhs)
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
  // node
  if (!graph_msg__msg__Node__are_equal(
      &(lhs->node), &(rhs->node)))
  {
    return false;
  }
  // edge
  if (!graph_msg__msg__Edge__are_equal(
      &(lhs->edge), &(rhs->edge)))
  {
    return false;
  }
  // goal_flag
  if (lhs->goal_flag != rhs->goal_flag) {
    return false;
  }
  // err_flag
  if (lhs->err_flag != rhs->err_flag) {
    return false;
  }
  // back_flag
  if (lhs->back_flag != rhs->back_flag) {
    return false;
  }
  // undefined
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->undefined), &(rhs->undefined)))
  {
    return false;
  }
  return true;
}

bool
graph_msg__msg__ToControl__copy(
  const graph_msg__msg__ToControl * input,
  graph_msg__msg__ToControl * output)
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
  // node
  if (!graph_msg__msg__Node__copy(
      &(input->node), &(output->node)))
  {
    return false;
  }
  // edge
  if (!graph_msg__msg__Edge__copy(
      &(input->edge), &(output->edge)))
  {
    return false;
  }
  // goal_flag
  output->goal_flag = input->goal_flag;
  // err_flag
  output->err_flag = input->err_flag;
  // back_flag
  output->back_flag = input->back_flag;
  // undefined
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->undefined), &(output->undefined)))
  {
    return false;
  }
  return true;
}

graph_msg__msg__ToControl *
graph_msg__msg__ToControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__ToControl * msg = (graph_msg__msg__ToControl *)allocator.allocate(sizeof(graph_msg__msg__ToControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msg__msg__ToControl));
  bool success = graph_msg__msg__ToControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_msg__msg__ToControl__destroy(graph_msg__msg__ToControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_msg__msg__ToControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_msg__msg__ToControl__Sequence__init(graph_msg__msg__ToControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__ToControl * data = NULL;

  if (size) {
    data = (graph_msg__msg__ToControl *)allocator.zero_allocate(size, sizeof(graph_msg__msg__ToControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msg__msg__ToControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msg__msg__ToControl__fini(&data[i - 1]);
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
graph_msg__msg__ToControl__Sequence__fini(graph_msg__msg__ToControl__Sequence * array)
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
      graph_msg__msg__ToControl__fini(&array->data[i]);
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

graph_msg__msg__ToControl__Sequence *
graph_msg__msg__ToControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__ToControl__Sequence * array = (graph_msg__msg__ToControl__Sequence *)allocator.allocate(sizeof(graph_msg__msg__ToControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_msg__msg__ToControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_msg__msg__ToControl__Sequence__destroy(graph_msg__msg__ToControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_msg__msg__ToControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_msg__msg__ToControl__Sequence__are_equal(const graph_msg__msg__ToControl__Sequence * lhs, const graph_msg__msg__ToControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_msg__msg__ToControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_msg__msg__ToControl__Sequence__copy(
  const graph_msg__msg__ToControl__Sequence * input,
  graph_msg__msg__ToControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_msg__msg__ToControl);
    graph_msg__msg__ToControl * data =
      (graph_msg__msg__ToControl *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_msg__msg__ToControl__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          graph_msg__msg__ToControl__fini(&data[i]);
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
    if (!graph_msg__msg__ToControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
