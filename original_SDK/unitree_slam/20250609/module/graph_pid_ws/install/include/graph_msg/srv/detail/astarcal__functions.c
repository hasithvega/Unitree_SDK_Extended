// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msg:srv/Astarcal.idl
// generated code does not contain a copyright notice
#include "graph_msg/srv/detail/astarcal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `node`
#include "graph_msg/msg/detail/node__functions.h"

bool
graph_msg__srv__Astarcal_Request__init(graph_msg__srv__Astarcal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // node
  if (!graph_msg__msg__Node__init(&msg->node)) {
    graph_msg__srv__Astarcal_Request__fini(msg);
    return false;
  }
  // floor_index
  return true;
}

void
graph_msg__srv__Astarcal_Request__fini(graph_msg__srv__Astarcal_Request * msg)
{
  if (!msg) {
    return;
  }
  // node
  graph_msg__msg__Node__fini(&msg->node);
  // floor_index
}

bool
graph_msg__srv__Astarcal_Request__are_equal(const graph_msg__srv__Astarcal_Request * lhs, const graph_msg__srv__Astarcal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node
  if (!graph_msg__msg__Node__are_equal(
      &(lhs->node), &(rhs->node)))
  {
    return false;
  }
  // floor_index
  if (lhs->floor_index != rhs->floor_index) {
    return false;
  }
  return true;
}

bool
graph_msg__srv__Astarcal_Request__copy(
  const graph_msg__srv__Astarcal_Request * input,
  graph_msg__srv__Astarcal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // node
  if (!graph_msg__msg__Node__copy(
      &(input->node), &(output->node)))
  {
    return false;
  }
  // floor_index
  output->floor_index = input->floor_index;
  return true;
}

graph_msg__srv__Astarcal_Request *
graph_msg__srv__Astarcal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__srv__Astarcal_Request * msg = (graph_msg__srv__Astarcal_Request *)allocator.allocate(sizeof(graph_msg__srv__Astarcal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msg__srv__Astarcal_Request));
  bool success = graph_msg__srv__Astarcal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_msg__srv__Astarcal_Request__destroy(graph_msg__srv__Astarcal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_msg__srv__Astarcal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_msg__srv__Astarcal_Request__Sequence__init(graph_msg__srv__Astarcal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__srv__Astarcal_Request * data = NULL;

  if (size) {
    data = (graph_msg__srv__Astarcal_Request *)allocator.zero_allocate(size, sizeof(graph_msg__srv__Astarcal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msg__srv__Astarcal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msg__srv__Astarcal_Request__fini(&data[i - 1]);
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
graph_msg__srv__Astarcal_Request__Sequence__fini(graph_msg__srv__Astarcal_Request__Sequence * array)
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
      graph_msg__srv__Astarcal_Request__fini(&array->data[i]);
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

graph_msg__srv__Astarcal_Request__Sequence *
graph_msg__srv__Astarcal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__srv__Astarcal_Request__Sequence * array = (graph_msg__srv__Astarcal_Request__Sequence *)allocator.allocate(sizeof(graph_msg__srv__Astarcal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_msg__srv__Astarcal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_msg__srv__Astarcal_Request__Sequence__destroy(graph_msg__srv__Astarcal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_msg__srv__Astarcal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_msg__srv__Astarcal_Request__Sequence__are_equal(const graph_msg__srv__Astarcal_Request__Sequence * lhs, const graph_msg__srv__Astarcal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_msg__srv__Astarcal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_msg__srv__Astarcal_Request__Sequence__copy(
  const graph_msg__srv__Astarcal_Request__Sequence * input,
  graph_msg__srv__Astarcal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_msg__srv__Astarcal_Request);
    graph_msg__srv__Astarcal_Request * data =
      (graph_msg__srv__Astarcal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_msg__srv__Astarcal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          graph_msg__srv__Astarcal_Request__fini(&data[i]);
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
    if (!graph_msg__srv__Astarcal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `weight`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
graph_msg__srv__Astarcal_Response__init(graph_msg__srv__Astarcal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // weight
  if (!rosidl_runtime_c__float__Sequence__init(&msg->weight, 0)) {
    graph_msg__srv__Astarcal_Response__fini(msg);
    return false;
  }
  // floor_index_cb
  return true;
}

void
graph_msg__srv__Astarcal_Response__fini(graph_msg__srv__Astarcal_Response * msg)
{
  if (!msg) {
    return;
  }
  // weight
  rosidl_runtime_c__float__Sequence__fini(&msg->weight);
  // floor_index_cb
}

bool
graph_msg__srv__Astarcal_Response__are_equal(const graph_msg__srv__Astarcal_Response * lhs, const graph_msg__srv__Astarcal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // weight
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->weight), &(rhs->weight)))
  {
    return false;
  }
  // floor_index_cb
  if (lhs->floor_index_cb != rhs->floor_index_cb) {
    return false;
  }
  return true;
}

bool
graph_msg__srv__Astarcal_Response__copy(
  const graph_msg__srv__Astarcal_Response * input,
  graph_msg__srv__Astarcal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // weight
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->weight), &(output->weight)))
  {
    return false;
  }
  // floor_index_cb
  output->floor_index_cb = input->floor_index_cb;
  return true;
}

graph_msg__srv__Astarcal_Response *
graph_msg__srv__Astarcal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__srv__Astarcal_Response * msg = (graph_msg__srv__Astarcal_Response *)allocator.allocate(sizeof(graph_msg__srv__Astarcal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msg__srv__Astarcal_Response));
  bool success = graph_msg__srv__Astarcal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_msg__srv__Astarcal_Response__destroy(graph_msg__srv__Astarcal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_msg__srv__Astarcal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_msg__srv__Astarcal_Response__Sequence__init(graph_msg__srv__Astarcal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__srv__Astarcal_Response * data = NULL;

  if (size) {
    data = (graph_msg__srv__Astarcal_Response *)allocator.zero_allocate(size, sizeof(graph_msg__srv__Astarcal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msg__srv__Astarcal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msg__srv__Astarcal_Response__fini(&data[i - 1]);
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
graph_msg__srv__Astarcal_Response__Sequence__fini(graph_msg__srv__Astarcal_Response__Sequence * array)
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
      graph_msg__srv__Astarcal_Response__fini(&array->data[i]);
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

graph_msg__srv__Astarcal_Response__Sequence *
graph_msg__srv__Astarcal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__srv__Astarcal_Response__Sequence * array = (graph_msg__srv__Astarcal_Response__Sequence *)allocator.allocate(sizeof(graph_msg__srv__Astarcal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_msg__srv__Astarcal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_msg__srv__Astarcal_Response__Sequence__destroy(graph_msg__srv__Astarcal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_msg__srv__Astarcal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_msg__srv__Astarcal_Response__Sequence__are_equal(const graph_msg__srv__Astarcal_Response__Sequence * lhs, const graph_msg__srv__Astarcal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_msg__srv__Astarcal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_msg__srv__Astarcal_Response__Sequence__copy(
  const graph_msg__srv__Astarcal_Response__Sequence * input,
  graph_msg__srv__Astarcal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_msg__srv__Astarcal_Response);
    graph_msg__srv__Astarcal_Response * data =
      (graph_msg__srv__Astarcal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_msg__srv__Astarcal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          graph_msg__srv__Astarcal_Response__fini(&data[i]);
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
    if (!graph_msg__srv__Astarcal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
