// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msg:msg/Node.idl
// generated code does not contain a copyright notice
#include "graph_msg/msg/detail/node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_name`
// Member `node_position_x`
// Member `node_position_y`
// Member `node_position_z`
// Member `node_yaw`
// Member `node_attribute`
// Member `undefined`
// Member `node_state_2`
// Member `node_state_3`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `node_state_list`
#include "std_msgs/msg/detail/float32_multi_array__functions.h"

bool
graph_msg__msg__Node__init(graph_msg__msg__Node * msg)
{
  if (!msg) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->node_name, 0)) {
    graph_msg__msg__Node__fini(msg);
    return false;
  }
  // node_position_x
  if (!rosidl_runtime_c__float__Sequence__init(&msg->node_position_x, 0)) {
    graph_msg__msg__Node__fini(msg);
    return false;
  }
  // node_position_y
  if (!rosidl_runtime_c__float__Sequence__init(&msg->node_position_y, 0)) {
    graph_msg__msg__Node__fini(msg);
    return false;
  }
  // node_position_z
  if (!rosidl_runtime_c__float__Sequence__init(&msg->node_position_z, 0)) {
    graph_msg__msg__Node__fini(msg);
    return false;
  }
  // node_yaw
  if (!rosidl_runtime_c__float__Sequence__init(&msg->node_yaw, 0)) {
    graph_msg__msg__Node__fini(msg);
    return false;
  }
  // node_attribute
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->node_attribute, 0)) {
    graph_msg__msg__Node__fini(msg);
    return false;
  }
  // undefined
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->undefined, 0)) {
    graph_msg__msg__Node__fini(msg);
    return false;
  }
  // node_state_2
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->node_state_2, 0)) {
    graph_msg__msg__Node__fini(msg);
    return false;
  }
  // node_state_3
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->node_state_3, 0)) {
    graph_msg__msg__Node__fini(msg);
    return false;
  }
  // node_state_list
  if (!std_msgs__msg__Float32MultiArray__Sequence__init(&msg->node_state_list, 0)) {
    graph_msg__msg__Node__fini(msg);
    return false;
  }
  return true;
}

void
graph_msg__msg__Node__fini(graph_msg__msg__Node * msg)
{
  if (!msg) {
    return;
  }
  // node_name
  rosidl_runtime_c__uint16__Sequence__fini(&msg->node_name);
  // node_position_x
  rosidl_runtime_c__float__Sequence__fini(&msg->node_position_x);
  // node_position_y
  rosidl_runtime_c__float__Sequence__fini(&msg->node_position_y);
  // node_position_z
  rosidl_runtime_c__float__Sequence__fini(&msg->node_position_z);
  // node_yaw
  rosidl_runtime_c__float__Sequence__fini(&msg->node_yaw);
  // node_attribute
  rosidl_runtime_c__uint16__Sequence__fini(&msg->node_attribute);
  // undefined
  rosidl_runtime_c__uint16__Sequence__fini(&msg->undefined);
  // node_state_2
  rosidl_runtime_c__uint16__Sequence__fini(&msg->node_state_2);
  // node_state_3
  rosidl_runtime_c__uint16__Sequence__fini(&msg->node_state_3);
  // node_state_list
  std_msgs__msg__Float32MultiArray__Sequence__fini(&msg->node_state_list);
}

bool
graph_msg__msg__Node__are_equal(const graph_msg__msg__Node * lhs, const graph_msg__msg__Node * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->node_name), &(rhs->node_name)))
  {
    return false;
  }
  // node_position_x
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->node_position_x), &(rhs->node_position_x)))
  {
    return false;
  }
  // node_position_y
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->node_position_y), &(rhs->node_position_y)))
  {
    return false;
  }
  // node_position_z
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->node_position_z), &(rhs->node_position_z)))
  {
    return false;
  }
  // node_yaw
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->node_yaw), &(rhs->node_yaw)))
  {
    return false;
  }
  // node_attribute
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->node_attribute), &(rhs->node_attribute)))
  {
    return false;
  }
  // undefined
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->undefined), &(rhs->undefined)))
  {
    return false;
  }
  // node_state_2
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->node_state_2), &(rhs->node_state_2)))
  {
    return false;
  }
  // node_state_3
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->node_state_3), &(rhs->node_state_3)))
  {
    return false;
  }
  // node_state_list
  if (!std_msgs__msg__Float32MultiArray__Sequence__are_equal(
      &(lhs->node_state_list), &(rhs->node_state_list)))
  {
    return false;
  }
  return true;
}

bool
graph_msg__msg__Node__copy(
  const graph_msg__msg__Node * input,
  graph_msg__msg__Node * output)
{
  if (!input || !output) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->node_name), &(output->node_name)))
  {
    return false;
  }
  // node_position_x
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->node_position_x), &(output->node_position_x)))
  {
    return false;
  }
  // node_position_y
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->node_position_y), &(output->node_position_y)))
  {
    return false;
  }
  // node_position_z
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->node_position_z), &(output->node_position_z)))
  {
    return false;
  }
  // node_yaw
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->node_yaw), &(output->node_yaw)))
  {
    return false;
  }
  // node_attribute
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->node_attribute), &(output->node_attribute)))
  {
    return false;
  }
  // undefined
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->undefined), &(output->undefined)))
  {
    return false;
  }
  // node_state_2
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->node_state_2), &(output->node_state_2)))
  {
    return false;
  }
  // node_state_3
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->node_state_3), &(output->node_state_3)))
  {
    return false;
  }
  // node_state_list
  if (!std_msgs__msg__Float32MultiArray__Sequence__copy(
      &(input->node_state_list), &(output->node_state_list)))
  {
    return false;
  }
  return true;
}

graph_msg__msg__Node *
graph_msg__msg__Node__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__Node * msg = (graph_msg__msg__Node *)allocator.allocate(sizeof(graph_msg__msg__Node), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msg__msg__Node));
  bool success = graph_msg__msg__Node__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_msg__msg__Node__destroy(graph_msg__msg__Node * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_msg__msg__Node__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_msg__msg__Node__Sequence__init(graph_msg__msg__Node__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__Node * data = NULL;

  if (size) {
    data = (graph_msg__msg__Node *)allocator.zero_allocate(size, sizeof(graph_msg__msg__Node), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msg__msg__Node__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msg__msg__Node__fini(&data[i - 1]);
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
graph_msg__msg__Node__Sequence__fini(graph_msg__msg__Node__Sequence * array)
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
      graph_msg__msg__Node__fini(&array->data[i]);
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

graph_msg__msg__Node__Sequence *
graph_msg__msg__Node__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__Node__Sequence * array = (graph_msg__msg__Node__Sequence *)allocator.allocate(sizeof(graph_msg__msg__Node__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_msg__msg__Node__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_msg__msg__Node__Sequence__destroy(graph_msg__msg__Node__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_msg__msg__Node__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_msg__msg__Node__Sequence__are_equal(const graph_msg__msg__Node__Sequence * lhs, const graph_msg__msg__Node__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_msg__msg__Node__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_msg__msg__Node__Sequence__copy(
  const graph_msg__msg__Node__Sequence * input,
  graph_msg__msg__Node__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_msg__msg__Node);
    graph_msg__msg__Node * data =
      (graph_msg__msg__Node *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_msg__msg__Node__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          graph_msg__msg__Node__fini(&data[i]);
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
    if (!graph_msg__msg__Node__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
