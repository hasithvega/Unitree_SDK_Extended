// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_interfaces:msg/QtCommand.idl
// generated code does not contain a copyright notice
#include "unitree_interfaces/msg/detail/qt_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `seq`
#include "std_msgs/msg/detail/string__functions.h"
// Member `floor_index`
// Member `pcdmap_index`
// Member `topomap_index`
// Member `node_edge_name`
// Member `state_1`
// Member `state_2`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
unitree_interfaces__msg__QtCommand__init(unitree_interfaces__msg__QtCommand * msg)
{
  if (!msg) {
    return false;
  }
  // command
  // seq
  if (!std_msgs__msg__String__init(&msg->seq)) {
    unitree_interfaces__msg__QtCommand__fini(msg);
    return false;
  }
  // attribute
  // floor_index
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->floor_index, 0)) {
    unitree_interfaces__msg__QtCommand__fini(msg);
    return false;
  }
  // pcdmap_index
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->pcdmap_index, 0)) {
    unitree_interfaces__msg__QtCommand__fini(msg);
    return false;
  }
  // topomap_index
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->topomap_index, 0)) {
    unitree_interfaces__msg__QtCommand__fini(msg);
    return false;
  }
  // node_edge_name
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->node_edge_name, 0)) {
    unitree_interfaces__msg__QtCommand__fini(msg);
    return false;
  }
  // quaternion_x
  // quaternion_y
  // quaternion_z
  // quaternion_w
  // euler_roll
  // euler_pitch
  // euler_yaw
  // translation_x
  // translation_y
  // translation_z
  // state_1
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->state_1, 0)) {
    unitree_interfaces__msg__QtCommand__fini(msg);
    return false;
  }
  // state_2
  if (!rosidl_runtime_c__float__Sequence__init(&msg->state_2, 0)) {
    unitree_interfaces__msg__QtCommand__fini(msg);
    return false;
  }
  return true;
}

void
unitree_interfaces__msg__QtCommand__fini(unitree_interfaces__msg__QtCommand * msg)
{
  if (!msg) {
    return;
  }
  // command
  // seq
  std_msgs__msg__String__fini(&msg->seq);
  // attribute
  // floor_index
  rosidl_runtime_c__uint16__Sequence__fini(&msg->floor_index);
  // pcdmap_index
  rosidl_runtime_c__uint16__Sequence__fini(&msg->pcdmap_index);
  // topomap_index
  rosidl_runtime_c__uint16__Sequence__fini(&msg->topomap_index);
  // node_edge_name
  rosidl_runtime_c__uint16__Sequence__fini(&msg->node_edge_name);
  // quaternion_x
  // quaternion_y
  // quaternion_z
  // quaternion_w
  // euler_roll
  // euler_pitch
  // euler_yaw
  // translation_x
  // translation_y
  // translation_z
  // state_1
  rosidl_runtime_c__uint16__Sequence__fini(&msg->state_1);
  // state_2
  rosidl_runtime_c__float__Sequence__fini(&msg->state_2);
}

bool
unitree_interfaces__msg__QtCommand__are_equal(const unitree_interfaces__msg__QtCommand * lhs, const unitree_interfaces__msg__QtCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  // seq
  if (!std_msgs__msg__String__are_equal(
      &(lhs->seq), &(rhs->seq)))
  {
    return false;
  }
  // attribute
  if (lhs->attribute != rhs->attribute) {
    return false;
  }
  // floor_index
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->floor_index), &(rhs->floor_index)))
  {
    return false;
  }
  // pcdmap_index
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->pcdmap_index), &(rhs->pcdmap_index)))
  {
    return false;
  }
  // topomap_index
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->topomap_index), &(rhs->topomap_index)))
  {
    return false;
  }
  // node_edge_name
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->node_edge_name), &(rhs->node_edge_name)))
  {
    return false;
  }
  // quaternion_x
  if (lhs->quaternion_x != rhs->quaternion_x) {
    return false;
  }
  // quaternion_y
  if (lhs->quaternion_y != rhs->quaternion_y) {
    return false;
  }
  // quaternion_z
  if (lhs->quaternion_z != rhs->quaternion_z) {
    return false;
  }
  // quaternion_w
  if (lhs->quaternion_w != rhs->quaternion_w) {
    return false;
  }
  // euler_roll
  if (lhs->euler_roll != rhs->euler_roll) {
    return false;
  }
  // euler_pitch
  if (lhs->euler_pitch != rhs->euler_pitch) {
    return false;
  }
  // euler_yaw
  if (lhs->euler_yaw != rhs->euler_yaw) {
    return false;
  }
  // translation_x
  if (lhs->translation_x != rhs->translation_x) {
    return false;
  }
  // translation_y
  if (lhs->translation_y != rhs->translation_y) {
    return false;
  }
  // translation_z
  if (lhs->translation_z != rhs->translation_z) {
    return false;
  }
  // state_1
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->state_1), &(rhs->state_1)))
  {
    return false;
  }
  // state_2
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->state_2), &(rhs->state_2)))
  {
    return false;
  }
  return true;
}

bool
unitree_interfaces__msg__QtCommand__copy(
  const unitree_interfaces__msg__QtCommand * input,
  unitree_interfaces__msg__QtCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  output->command = input->command;
  // seq
  if (!std_msgs__msg__String__copy(
      &(input->seq), &(output->seq)))
  {
    return false;
  }
  // attribute
  output->attribute = input->attribute;
  // floor_index
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->floor_index), &(output->floor_index)))
  {
    return false;
  }
  // pcdmap_index
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->pcdmap_index), &(output->pcdmap_index)))
  {
    return false;
  }
  // topomap_index
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->topomap_index), &(output->topomap_index)))
  {
    return false;
  }
  // node_edge_name
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->node_edge_name), &(output->node_edge_name)))
  {
    return false;
  }
  // quaternion_x
  output->quaternion_x = input->quaternion_x;
  // quaternion_y
  output->quaternion_y = input->quaternion_y;
  // quaternion_z
  output->quaternion_z = input->quaternion_z;
  // quaternion_w
  output->quaternion_w = input->quaternion_w;
  // euler_roll
  output->euler_roll = input->euler_roll;
  // euler_pitch
  output->euler_pitch = input->euler_pitch;
  // euler_yaw
  output->euler_yaw = input->euler_yaw;
  // translation_x
  output->translation_x = input->translation_x;
  // translation_y
  output->translation_y = input->translation_y;
  // translation_z
  output->translation_z = input->translation_z;
  // state_1
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->state_1), &(output->state_1)))
  {
    return false;
  }
  // state_2
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->state_2), &(output->state_2)))
  {
    return false;
  }
  return true;
}

unitree_interfaces__msg__QtCommand *
unitree_interfaces__msg__QtCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__QtCommand * msg = (unitree_interfaces__msg__QtCommand *)allocator.allocate(sizeof(unitree_interfaces__msg__QtCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_interfaces__msg__QtCommand));
  bool success = unitree_interfaces__msg__QtCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unitree_interfaces__msg__QtCommand__destroy(unitree_interfaces__msg__QtCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unitree_interfaces__msg__QtCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unitree_interfaces__msg__QtCommand__Sequence__init(unitree_interfaces__msg__QtCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__QtCommand * data = NULL;

  if (size) {
    data = (unitree_interfaces__msg__QtCommand *)allocator.zero_allocate(size, sizeof(unitree_interfaces__msg__QtCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_interfaces__msg__QtCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_interfaces__msg__QtCommand__fini(&data[i - 1]);
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
unitree_interfaces__msg__QtCommand__Sequence__fini(unitree_interfaces__msg__QtCommand__Sequence * array)
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
      unitree_interfaces__msg__QtCommand__fini(&array->data[i]);
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

unitree_interfaces__msg__QtCommand__Sequence *
unitree_interfaces__msg__QtCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_interfaces__msg__QtCommand__Sequence * array = (unitree_interfaces__msg__QtCommand__Sequence *)allocator.allocate(sizeof(unitree_interfaces__msg__QtCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unitree_interfaces__msg__QtCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unitree_interfaces__msg__QtCommand__Sequence__destroy(unitree_interfaces__msg__QtCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unitree_interfaces__msg__QtCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unitree_interfaces__msg__QtCommand__Sequence__are_equal(const unitree_interfaces__msg__QtCommand__Sequence * lhs, const unitree_interfaces__msg__QtCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unitree_interfaces__msg__QtCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unitree_interfaces__msg__QtCommand__Sequence__copy(
  const unitree_interfaces__msg__QtCommand__Sequence * input,
  unitree_interfaces__msg__QtCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unitree_interfaces__msg__QtCommand);
    unitree_interfaces__msg__QtCommand * data =
      (unitree_interfaces__msg__QtCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unitree_interfaces__msg__QtCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          unitree_interfaces__msg__QtCommand__fini(&data[i]);
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
    if (!unitree_interfaces__msg__QtCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
