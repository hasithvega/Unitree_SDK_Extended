// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msg:msg/MutirobotMission.idl
// generated code does not contain a copyright notice
#include "graph_msg/msg/detail/mutirobot_mission__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robotid`
// Member `missionid`
// Member `missionstate`
#include "std_msgs/msg/detail/int64__functions.h"

bool
graph_msg__msg__MutirobotMission__init(graph_msg__msg__MutirobotMission * msg)
{
  if (!msg) {
    return false;
  }
  // robotid
  if (!std_msgs__msg__Int64__init(&msg->robotid)) {
    graph_msg__msg__MutirobotMission__fini(msg);
    return false;
  }
  // missionid
  if (!std_msgs__msg__Int64__init(&msg->missionid)) {
    graph_msg__msg__MutirobotMission__fini(msg);
    return false;
  }
  // missionstate
  if (!std_msgs__msg__Int64__init(&msg->missionstate)) {
    graph_msg__msg__MutirobotMission__fini(msg);
    return false;
  }
  return true;
}

void
graph_msg__msg__MutirobotMission__fini(graph_msg__msg__MutirobotMission * msg)
{
  if (!msg) {
    return;
  }
  // robotid
  std_msgs__msg__Int64__fini(&msg->robotid);
  // missionid
  std_msgs__msg__Int64__fini(&msg->missionid);
  // missionstate
  std_msgs__msg__Int64__fini(&msg->missionstate);
}

bool
graph_msg__msg__MutirobotMission__are_equal(const graph_msg__msg__MutirobotMission * lhs, const graph_msg__msg__MutirobotMission * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robotid
  if (!std_msgs__msg__Int64__are_equal(
      &(lhs->robotid), &(rhs->robotid)))
  {
    return false;
  }
  // missionid
  if (!std_msgs__msg__Int64__are_equal(
      &(lhs->missionid), &(rhs->missionid)))
  {
    return false;
  }
  // missionstate
  if (!std_msgs__msg__Int64__are_equal(
      &(lhs->missionstate), &(rhs->missionstate)))
  {
    return false;
  }
  return true;
}

bool
graph_msg__msg__MutirobotMission__copy(
  const graph_msg__msg__MutirobotMission * input,
  graph_msg__msg__MutirobotMission * output)
{
  if (!input || !output) {
    return false;
  }
  // robotid
  if (!std_msgs__msg__Int64__copy(
      &(input->robotid), &(output->robotid)))
  {
    return false;
  }
  // missionid
  if (!std_msgs__msg__Int64__copy(
      &(input->missionid), &(output->missionid)))
  {
    return false;
  }
  // missionstate
  if (!std_msgs__msg__Int64__copy(
      &(input->missionstate), &(output->missionstate)))
  {
    return false;
  }
  return true;
}

graph_msg__msg__MutirobotMission *
graph_msg__msg__MutirobotMission__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__MutirobotMission * msg = (graph_msg__msg__MutirobotMission *)allocator.allocate(sizeof(graph_msg__msg__MutirobotMission), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msg__msg__MutirobotMission));
  bool success = graph_msg__msg__MutirobotMission__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_msg__msg__MutirobotMission__destroy(graph_msg__msg__MutirobotMission * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_msg__msg__MutirobotMission__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_msg__msg__MutirobotMission__Sequence__init(graph_msg__msg__MutirobotMission__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__MutirobotMission * data = NULL;

  if (size) {
    data = (graph_msg__msg__MutirobotMission *)allocator.zero_allocate(size, sizeof(graph_msg__msg__MutirobotMission), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msg__msg__MutirobotMission__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msg__msg__MutirobotMission__fini(&data[i - 1]);
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
graph_msg__msg__MutirobotMission__Sequence__fini(graph_msg__msg__MutirobotMission__Sequence * array)
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
      graph_msg__msg__MutirobotMission__fini(&array->data[i]);
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

graph_msg__msg__MutirobotMission__Sequence *
graph_msg__msg__MutirobotMission__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msg__msg__MutirobotMission__Sequence * array = (graph_msg__msg__MutirobotMission__Sequence *)allocator.allocate(sizeof(graph_msg__msg__MutirobotMission__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_msg__msg__MutirobotMission__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_msg__msg__MutirobotMission__Sequence__destroy(graph_msg__msg__MutirobotMission__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_msg__msg__MutirobotMission__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_msg__msg__MutirobotMission__Sequence__are_equal(const graph_msg__msg__MutirobotMission__Sequence * lhs, const graph_msg__msg__MutirobotMission__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_msg__msg__MutirobotMission__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_msg__msg__MutirobotMission__Sequence__copy(
  const graph_msg__msg__MutirobotMission__Sequence * input,
  graph_msg__msg__MutirobotMission__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_msg__msg__MutirobotMission);
    graph_msg__msg__MutirobotMission * data =
      (graph_msg__msg__MutirobotMission *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_msg__msg__MutirobotMission__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          graph_msg__msg__MutirobotMission__fini(&data[i]);
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
    if (!graph_msg__msg__MutirobotMission__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
