// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from graph_msg:srv/Astarcal.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__SRV__DETAIL__ASTARCAL__FUNCTIONS_H_
#define GRAPH_MSG__SRV__DETAIL__ASTARCAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "graph_msg/msg/rosidl_generator_c__visibility_control.h"

#include "graph_msg/srv/detail/astarcal__struct.h"

/// Initialize srv/Astarcal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * graph_msg__srv__Astarcal_Request
 * )) before or use
 * graph_msg__srv__Astarcal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__srv__Astarcal_Request__init(graph_msg__srv__Astarcal_Request * msg);

/// Finalize srv/Astarcal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
void
graph_msg__srv__Astarcal_Request__fini(graph_msg__srv__Astarcal_Request * msg);

/// Create srv/Astarcal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * graph_msg__srv__Astarcal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
graph_msg__srv__Astarcal_Request *
graph_msg__srv__Astarcal_Request__create();

/// Destroy srv/Astarcal message.
/**
 * It calls
 * graph_msg__srv__Astarcal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
void
graph_msg__srv__Astarcal_Request__destroy(graph_msg__srv__Astarcal_Request * msg);

/// Check for srv/Astarcal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__srv__Astarcal_Request__are_equal(const graph_msg__srv__Astarcal_Request * lhs, const graph_msg__srv__Astarcal_Request * rhs);

/// Copy a srv/Astarcal message.
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
graph_msg__srv__Astarcal_Request__copy(
  const graph_msg__srv__Astarcal_Request * input,
  graph_msg__srv__Astarcal_Request * output);

/// Initialize array of srv/Astarcal messages.
/**
 * It allocates the memory for the number of elements and calls
 * graph_msg__srv__Astarcal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__srv__Astarcal_Request__Sequence__init(graph_msg__srv__Astarcal_Request__Sequence * array, size_t size);

/// Finalize array of srv/Astarcal messages.
/**
 * It calls
 * graph_msg__srv__Astarcal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
void
graph_msg__srv__Astarcal_Request__Sequence__fini(graph_msg__srv__Astarcal_Request__Sequence * array);

/// Create array of srv/Astarcal messages.
/**
 * It allocates the memory for the array and calls
 * graph_msg__srv__Astarcal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
graph_msg__srv__Astarcal_Request__Sequence *
graph_msg__srv__Astarcal_Request__Sequence__create(size_t size);

/// Destroy array of srv/Astarcal messages.
/**
 * It calls
 * graph_msg__srv__Astarcal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
void
graph_msg__srv__Astarcal_Request__Sequence__destroy(graph_msg__srv__Astarcal_Request__Sequence * array);

/// Check for srv/Astarcal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__srv__Astarcal_Request__Sequence__are_equal(const graph_msg__srv__Astarcal_Request__Sequence * lhs, const graph_msg__srv__Astarcal_Request__Sequence * rhs);

/// Copy an array of srv/Astarcal messages.
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
graph_msg__srv__Astarcal_Request__Sequence__copy(
  const graph_msg__srv__Astarcal_Request__Sequence * input,
  graph_msg__srv__Astarcal_Request__Sequence * output);

/// Initialize srv/Astarcal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * graph_msg__srv__Astarcal_Response
 * )) before or use
 * graph_msg__srv__Astarcal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__srv__Astarcal_Response__init(graph_msg__srv__Astarcal_Response * msg);

/// Finalize srv/Astarcal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
void
graph_msg__srv__Astarcal_Response__fini(graph_msg__srv__Astarcal_Response * msg);

/// Create srv/Astarcal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * graph_msg__srv__Astarcal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
graph_msg__srv__Astarcal_Response *
graph_msg__srv__Astarcal_Response__create();

/// Destroy srv/Astarcal message.
/**
 * It calls
 * graph_msg__srv__Astarcal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
void
graph_msg__srv__Astarcal_Response__destroy(graph_msg__srv__Astarcal_Response * msg);

/// Check for srv/Astarcal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__srv__Astarcal_Response__are_equal(const graph_msg__srv__Astarcal_Response * lhs, const graph_msg__srv__Astarcal_Response * rhs);

/// Copy a srv/Astarcal message.
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
graph_msg__srv__Astarcal_Response__copy(
  const graph_msg__srv__Astarcal_Response * input,
  graph_msg__srv__Astarcal_Response * output);

/// Initialize array of srv/Astarcal messages.
/**
 * It allocates the memory for the number of elements and calls
 * graph_msg__srv__Astarcal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__srv__Astarcal_Response__Sequence__init(graph_msg__srv__Astarcal_Response__Sequence * array, size_t size);

/// Finalize array of srv/Astarcal messages.
/**
 * It calls
 * graph_msg__srv__Astarcal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
void
graph_msg__srv__Astarcal_Response__Sequence__fini(graph_msg__srv__Astarcal_Response__Sequence * array);

/// Create array of srv/Astarcal messages.
/**
 * It allocates the memory for the array and calls
 * graph_msg__srv__Astarcal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
graph_msg__srv__Astarcal_Response__Sequence *
graph_msg__srv__Astarcal_Response__Sequence__create(size_t size);

/// Destroy array of srv/Astarcal messages.
/**
 * It calls
 * graph_msg__srv__Astarcal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
void
graph_msg__srv__Astarcal_Response__Sequence__destroy(graph_msg__srv__Astarcal_Response__Sequence * array);

/// Check for srv/Astarcal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msg
bool
graph_msg__srv__Astarcal_Response__Sequence__are_equal(const graph_msg__srv__Astarcal_Response__Sequence * lhs, const graph_msg__srv__Astarcal_Response__Sequence * rhs);

/// Copy an array of srv/Astarcal messages.
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
graph_msg__srv__Astarcal_Response__Sequence__copy(
  const graph_msg__srv__Astarcal_Response__Sequence * input,
  graph_msg__srv__Astarcal_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSG__SRV__DETAIL__ASTARCAL__FUNCTIONS_H_
