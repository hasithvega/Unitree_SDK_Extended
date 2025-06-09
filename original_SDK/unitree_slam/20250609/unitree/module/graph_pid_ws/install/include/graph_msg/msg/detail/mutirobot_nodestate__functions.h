// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from graph_msg:msg/MutirobotNodestate.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__MUTIROBOT_NODESTATE__FUNCTIONS_H_
#define GRAPH_MSG__MSG__DETAIL__MUTIROBOT_NODESTATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "graph_msg/msg/rosidl_generator_c__visibility_control.h"

#include "graph_msg/msg/detail/mutirobot_nodestate__struct.h"

/// Initialize msg/MutirobotNodestate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * graph_msg__msg__MutirobotNodestate
 * )) before or use
 * graph_msg__msg__MutirobotNodestate__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__msg__MutirobotNodestate__init(graph_msg__msg__MutirobotNodestate * msg);

/// Finalize msg/MutirobotNodestate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
void
graph_msg__msg__MutirobotNodestate__fini(graph_msg__msg__MutirobotNodestate * msg);

/// Create msg/MutirobotNodestate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * graph_msg__msg__MutirobotNodestate__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
graph_msg__msg__MutirobotNodestate *
graph_msg__msg__MutirobotNodestate__create();

/// Destroy msg/MutirobotNodestate message.
/**
 * It calls
 * graph_msg__msg__MutirobotNodestate__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
void
graph_msg__msg__MutirobotNodestate__destroy(graph_msg__msg__MutirobotNodestate * msg);

/// Check for msg/MutirobotNodestate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__msg__MutirobotNodestate__are_equal(const graph_msg__msg__MutirobotNodestate * lhs, const graph_msg__msg__MutirobotNodestate * rhs);

/// Copy a msg/MutirobotNodestate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__msg__MutirobotNodestate__copy(
  const graph_msg__msg__MutirobotNodestate * input,
  graph_msg__msg__MutirobotNodestate * output);

/// Initialize array of msg/MutirobotNodestate messages.
/**
 * It allocates the memory for the number of elements and calls
 * graph_msg__msg__MutirobotNodestate__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__msg__MutirobotNodestate__Sequence__init(graph_msg__msg__MutirobotNodestate__Sequence * array, size_t size);

/// Finalize array of msg/MutirobotNodestate messages.
/**
 * It calls
 * graph_msg__msg__MutirobotNodestate__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
void
graph_msg__msg__MutirobotNodestate__Sequence__fini(graph_msg__msg__MutirobotNodestate__Sequence * array);

/// Create array of msg/MutirobotNodestate messages.
/**
 * It allocates the memory for the array and calls
 * graph_msg__msg__MutirobotNodestate__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
graph_msg__msg__MutirobotNodestate__Sequence *
graph_msg__msg__MutirobotNodestate__Sequence__create(size_t size);

/// Destroy array of msg/MutirobotNodestate messages.
/**
 * It calls
 * graph_msg__msg__MutirobotNodestate__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
void
graph_msg__msg__MutirobotNodestate__Sequence__destroy(graph_msg__msg__MutirobotNodestate__Sequence * array);

/// Check for msg/MutirobotNodestate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__msg__MutirobotNodestate__Sequence__are_equal(const graph_msg__msg__MutirobotNodestate__Sequence * lhs, const graph_msg__msg__MutirobotNodestate__Sequence * rhs);

/// Copy an array of msg/MutirobotNodestate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__msg__MutirobotNodestate__Sequence__copy(
  const graph_msg__msg__MutirobotNodestate__Sequence * input,
  graph_msg__msg__MutirobotNodestate__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSG__MSG__DETAIL__MUTIROBOT_NODESTATE__FUNCTIONS_H_
