// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msg:msg/Edge.idl
// generated code does not contain a copyright notice
#include "graph_msg/msg/detail/edge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `edge_name`
// Member `start_node_name`
// Member `end_node_name`
// Member `edge_length`
// Member `dog_stats`
// Member `dog_back_stats`
// Member `dog_speed`
// Member `edge_state`
// Member `edge_state_1`
// Member `edge_state_2`
// Member `edge_state_3`
// Member `edge_state_4`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `edge_state_list`
#include "std_msgs/msg/detail/float32_multi_array__functions.h"

bool
graph_msg__msg__Edge__init(graph_msg__msg__Edge * msg)
{
  if (!msg) {
    return false;
  }
  // edge_name
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->edge_name, 0)) {
    graph_msg__msg__Edge__fini(msg);
    return false;
  }
  // start_node_name
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->start_node_name, 0)) {
    graph_msg__msg__Edge__fini(msg);
    return false;
  }
  // end_node_name
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->end_node_name, 0)) {
    graph_msg__msg__Edge__fini(msg);
    return false;
  }
  // edge_length
  if (!rosidl_runtime_c__float__Sequence__init(&msg->edge_length, 0)) {
    graph_msg__msg__Edge__fini(msg);
    return false;
  }
  // dog_stats
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->dog_stats, 0)) {
    graph_msg__msg__Edge__fini(msg);
    return false;
  }
  // dog_back_stats
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->dog_back_stats, 0)) {
    graph_msg__msg__Edge__fini(msg);
    return false;
  }
  // dog_speed
  if (!rosidl_runtime_c__float__Sequence__init(&msg->dog_speed, 0)) {
    graph_msg__msg__Edge__fini(msg);
    return false;
  }
  // edge_state
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->edge_state, 0)) {
    graph_msg__msg__Edge__fini(msg);
    return false;
  }
  // edge_state_1
  if (!rosidl_runtime_c__float__Sequence__init(&msg->edge_state_1, 0)) {
    graph_msg__msg__Edge__fini(msg);
    return false;
  }
  // edge_state_2
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->edge_state_2, 0)) {
    graph_msg__msg__Edge__fini(msg);
    return false;
  }
  // edge_state_3
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->edge_state_3, 0)) {
    graph_msg__msg__Edge__fini(msg);
    return false;
  }
  // edge_state_4
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->edge_state_4, 0)) {
    graph_msg__msg__Edge__fini(msg);
    return false;
  }
  // edge_state_list
  if (!std_msgs__msg__Float32MultiArray__Sequence__init(&msg->edge_state_list, 0)) {
    graph_msg__msg__Edge__fini(msg);
    return false;
  }
  return true;
}

void
graph_msg__msg__Edge__fini(graph_msg__msg__Edge * msg)
{
  if (!msg) {
    return;
  }
  // edge_name
  rosidl_runtime_c__uint16__Sequence__fini(&msg->edge_name);
  // start_node_name
  rosidl_runtime_c__uint16__Sequence__fini(&msg->start_node_name);
  // end_node_name
  rosidl_runtime_c__uint16__Sequence__fini(&msg->end_node_name);
  // edge_length
  rosidl_runtime_c__float__Sequence__fini(&msg->edge_length);
  // dog_stats
  rosidl_runtime_c__uint16__Sequence__fini(&msg->dog_stats);
  // dog_back_stats
  rosidl_runtime_c__uint16__Sequence__fini(&msg->dog_back_stats);
  // dog_speed
  rosidl_runtime_c__float__Sequence__fini(&msg->dog_speed);
  // edge_state
  rosidl_runtime_c__uint16__Sequence__fini(&msg->edge_state);
  // edge_state_1
  rosidl_runtime_c__float__Sequence__fini(&msg->edge_state_1);
  // edge_state_2
  rosidl_runtime_c__uint16__Sequence__fini(&msg->edge_state_2);
  // edge_state_3
  rosidl_runtime_c__uint16__Sequence__fini(&msg->edge_state_3);
  // edge_state_4
  rosidl_runtime_c__uint16__Sequence__fini(&msg->edge_state_4);
  // edge_state_list
  std_msgs__msg__Float32MultiArray__Sequence__fini(&msg->edge_state_list);
}

bool
graph_msg__msg__Edge__are_equal(const graph_msg__msg__Edge * lhs, const graph_msg__msg__Edge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // edge_name
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->edge_name), &(rhs->edge_name)))
  {
    return false;
  }
  // start_node_name
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->start_node_name), &(rhs->start_node_name)))
  {
    return false;
  }
  // end_node_name
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->end_node_name), &(rhs->end_node_name)))
  {
    return false;
  }
  // edge_length
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->edge_length), &(rhs->edge_length)))
  {
    return false;
  }
  // dog_stats
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->dog_stats), &(rhs->dog_stats)))
  {
    return false;
  }
  // dog_back_stats
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->dog_back_stats), &(rhs->dog_back_stats)))
  {
    return false;
  }
  // dog_speed
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->dog_speed), &(rhs->dog_speed)))
  {
    return false;
  }
  // edge_state
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->edge_state), &(rhs->edge_state)))
  {
    return false;
  }
  // edge_state_1
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->edge_state_1), &(rhs->edge_state_1)))
  {
    return false;
  }
  // edge_state_2
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->edge_state_2), &(rhs->edge_state_2)))
  {
    return false;
  }
  // edge_state_3
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->edge_state_3), &(rhs->edge_state_3)))
  {
    return false;
  }
  // edge_state_4
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->edge_state_4), &(rhs->edge_state_4)))
  {
    return false;
  }
  // edge_state_list
  if (!std_msgs__msg__Float32MultiArray__Sequence__are_equal(
      &(lhs->edge_state_list), &(rhs->edge_state_list)))
  {
    return false;
  }
  return true;
}

bool
graph_msg__msg__Edge__copy(
  const graph_msg__msg__Edge * input,
  graph_msg__msg__Edge * output)
{
  if (!input || !output) {
    return false;
  }
  // edge_name
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->edge_name), &(output->edge_name)))
  {
    return false;
  }
  // start_node_name
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->start_node_name), &(output->start_node_name)))
  {
    return false;
  }
  // end_node_name
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->end_node_name), &(output->end_node_name)))
  {
    return false;
  }
  // edge_length
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->edge_length), &(output->edge_length)))
  {
    return false;
  }
  // dog_stats
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->dog_stats), &(output->dog_stats)))
  {
    return false;
  }
  // dog_back_stats
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->dog_back_stats), &(output->dog_back_stats)))
  {
    return false;
  }
  // dog_speed
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->dog_speed), &(output->dog_speed)))
  {
    return false;
  }
  // edge_state
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->edge_state), &(output->edge_state)))
  {
    return false;
  }
  // edge_state_1
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->edge_state_1), &(output->edge_state_1)))
  {
    return false;
  }
  // edge_state_2
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->edge_state_2), &(output->edge_state_2)))
  {
    return false;
  }
  // edge_state_3
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->edge_state_3), &(output->edge_state_3)))
  {
    return false;
  }
  // edge_state_4
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->edge_state_4), &(output->edge_state_4)))
  {
    return false;
  }
  // edge_state_list
  if (!std_msgs__msg__Float32MultiArray__Sequence__copy(
      &(input->edge_state_list), &(output->edge_state_list)))
  {
    return false;
  }
  return true;
}

graph_msg__msg__Edge *
graph_msg__msg__Edge__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__Edge * msg = (graph_msg__msg__Edge *)allocator.allocate(sizeof(graph_msg__msg__Edge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msg__msg__Edge));
  bool success = graph_msg__msg__Edge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_msg__msg__Edge__destroy(graph_msg__msg__Edge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_msg__msg__Edge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_msg__msg__Edge__Sequence__init(graph_msg__msg__Edge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__Edge * data = NULL;

  if (size) {
    data = (graph_msg__msg__Edge *)allocator.zero_allocate(size, sizeof(graph_msg__msg__Edge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msg__msg__Edge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msg__msg__Edge__fini(&data[i - 1]);
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
graph_msg__msg__Edge__Sequence__fini(graph_msg__msg__Edge__Sequence * array)
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
      graph_msg__msg__Edge__fini(&array->data[i]);
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

graph_msg__msg__Edge__Sequence *
graph_msg__msg__Edge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__Edge__Sequence * array = (graph_msg__msg__Edge__Sequence *)allocator.allocate(sizeof(graph_msg__msg__Edge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_msg__msg__Edge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_msg__msg__Edge__Sequence__destroy(graph_msg__msg__Edge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_msg__msg__Edge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_msg__msg__Edge__Sequence__are_equal(const graph_msg__msg__Edge__Sequence * lhs, const graph_msg__msg__Edge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_msg__msg__Edge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_msg__msg__Edge__Sequence__copy(
  const graph_msg__msg__Edge__Sequence * input,
  graph_msg__msg__Edge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_msg__msg__Edge);
    graph_msg__msg__Edge * data =
      (graph_msg__msg__Edge *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_msg__msg__Edge__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          graph_msg__msg__Edge__fini(&data[i]);
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
    if (!graph_msg__msg__Edge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
