// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lio_sam_ros2:msg/ScoreInfo.idl
// generated code does not contain a copyright notice
#include "lio_sam_ros2/msg/detail/score_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
lio_sam_ros2__msg__ScoreInfo__init(lio_sam_ros2__msg__ScoreInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lio_sam_ros2__msg__ScoreInfo__fini(msg);
    return false;
  }
  // score
  // err_position
  // err_position_z
  // err_angle
  // err_yaw
  return true;
}

void
lio_sam_ros2__msg__ScoreInfo__fini(lio_sam_ros2__msg__ScoreInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // score
  // err_position
  // err_position_z
  // err_angle
  // err_yaw
}

bool
lio_sam_ros2__msg__ScoreInfo__are_equal(const lio_sam_ros2__msg__ScoreInfo * lhs, const lio_sam_ros2__msg__ScoreInfo * rhs)
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
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // err_position
  if (lhs->err_position != rhs->err_position) {
    return false;
  }
  // err_position_z
  if (lhs->err_position_z != rhs->err_position_z) {
    return false;
  }
  // err_angle
  if (lhs->err_angle != rhs->err_angle) {
    return false;
  }
  // err_yaw
  if (lhs->err_yaw != rhs->err_yaw) {
    return false;
  }
  return true;
}

bool
lio_sam_ros2__msg__ScoreInfo__copy(
  const lio_sam_ros2__msg__ScoreInfo * input,
  lio_sam_ros2__msg__ScoreInfo * output)
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
  // score
  output->score = input->score;
  // err_position
  output->err_position = input->err_position;
  // err_position_z
  output->err_position_z = input->err_position_z;
  // err_angle
  output->err_angle = input->err_angle;
  // err_yaw
  output->err_yaw = input->err_yaw;
  return true;
}

lio_sam_ros2__msg__ScoreInfo *
lio_sam_ros2__msg__ScoreInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lio_sam_ros2__msg__ScoreInfo * msg = (lio_sam_ros2__msg__ScoreInfo *)allocator.allocate(sizeof(lio_sam_ros2__msg__ScoreInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lio_sam_ros2__msg__ScoreInfo));
  bool success = lio_sam_ros2__msg__ScoreInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lio_sam_ros2__msg__ScoreInfo__destroy(lio_sam_ros2__msg__ScoreInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lio_sam_ros2__msg__ScoreInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lio_sam_ros2__msg__ScoreInfo__Sequence__init(lio_sam_ros2__msg__ScoreInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lio_sam_ros2__msg__ScoreInfo * data = NULL;

  if (size) {
    data = (lio_sam_ros2__msg__ScoreInfo *)allocator.zero_allocate(size, sizeof(lio_sam_ros2__msg__ScoreInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lio_sam_ros2__msg__ScoreInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lio_sam_ros2__msg__ScoreInfo__fini(&data[i - 1]);
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
lio_sam_ros2__msg__ScoreInfo__Sequence__fini(lio_sam_ros2__msg__ScoreInfo__Sequence * array)
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
      lio_sam_ros2__msg__ScoreInfo__fini(&array->data[i]);
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

lio_sam_ros2__msg__ScoreInfo__Sequence *
lio_sam_ros2__msg__ScoreInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lio_sam_ros2__msg__ScoreInfo__Sequence * array = (lio_sam_ros2__msg__ScoreInfo__Sequence *)allocator.allocate(sizeof(lio_sam_ros2__msg__ScoreInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lio_sam_ros2__msg__ScoreInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lio_sam_ros2__msg__ScoreInfo__Sequence__destroy(lio_sam_ros2__msg__ScoreInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lio_sam_ros2__msg__ScoreInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lio_sam_ros2__msg__ScoreInfo__Sequence__are_equal(const lio_sam_ros2__msg__ScoreInfo__Sequence * lhs, const lio_sam_ros2__msg__ScoreInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lio_sam_ros2__msg__ScoreInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lio_sam_ros2__msg__ScoreInfo__Sequence__copy(
  const lio_sam_ros2__msg__ScoreInfo__Sequence * input,
  lio_sam_ros2__msg__ScoreInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lio_sam_ros2__msg__ScoreInfo);
    lio_sam_ros2__msg__ScoreInfo * data =
      (lio_sam_ros2__msg__ScoreInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lio_sam_ros2__msg__ScoreInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          lio_sam_ros2__msg__ScoreInfo__fini(&data[i]);
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
    if (!lio_sam_ros2__msg__ScoreInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
