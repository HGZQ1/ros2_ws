// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vision_msgs_custom:msg/ObjectDistance.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__FUNCTIONS_H_
#define VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vision_msgs_custom/msg/rosidl_generator_c__visibility_control.h"

#include "vision_msgs_custom/msg/detail/object_distance__struct.h"

/// Initialize msg/ObjectDistance message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vision_msgs_custom__msg__ObjectDistance
 * )) before or use
 * vision_msgs_custom__msg__ObjectDistance__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs_custom
bool
vision_msgs_custom__msg__ObjectDistance__init(vision_msgs_custom__msg__ObjectDistance * msg);

/// Finalize msg/ObjectDistance message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs_custom
void
vision_msgs_custom__msg__ObjectDistance__fini(vision_msgs_custom__msg__ObjectDistance * msg);

/// Create msg/ObjectDistance message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vision_msgs_custom__msg__ObjectDistance__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs_custom
vision_msgs_custom__msg__ObjectDistance *
vision_msgs_custom__msg__ObjectDistance__create();

/// Destroy msg/ObjectDistance message.
/**
 * It calls
 * vision_msgs_custom__msg__ObjectDistance__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs_custom
void
vision_msgs_custom__msg__ObjectDistance__destroy(vision_msgs_custom__msg__ObjectDistance * msg);

/// Check for msg/ObjectDistance message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs_custom
bool
vision_msgs_custom__msg__ObjectDistance__are_equal(const vision_msgs_custom__msg__ObjectDistance * lhs, const vision_msgs_custom__msg__ObjectDistance * rhs);

/// Copy a msg/ObjectDistance message.
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
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs_custom
bool
vision_msgs_custom__msg__ObjectDistance__copy(
  const vision_msgs_custom__msg__ObjectDistance * input,
  vision_msgs_custom__msg__ObjectDistance * output);

/// Initialize array of msg/ObjectDistance messages.
/**
 * It allocates the memory for the number of elements and calls
 * vision_msgs_custom__msg__ObjectDistance__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs_custom
bool
vision_msgs_custom__msg__ObjectDistance__Sequence__init(vision_msgs_custom__msg__ObjectDistance__Sequence * array, size_t size);

/// Finalize array of msg/ObjectDistance messages.
/**
 * It calls
 * vision_msgs_custom__msg__ObjectDistance__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs_custom
void
vision_msgs_custom__msg__ObjectDistance__Sequence__fini(vision_msgs_custom__msg__ObjectDistance__Sequence * array);

/// Create array of msg/ObjectDistance messages.
/**
 * It allocates the memory for the array and calls
 * vision_msgs_custom__msg__ObjectDistance__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs_custom
vision_msgs_custom__msg__ObjectDistance__Sequence *
vision_msgs_custom__msg__ObjectDistance__Sequence__create(size_t size);

/// Destroy array of msg/ObjectDistance messages.
/**
 * It calls
 * vision_msgs_custom__msg__ObjectDistance__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs_custom
void
vision_msgs_custom__msg__ObjectDistance__Sequence__destroy(vision_msgs_custom__msg__ObjectDistance__Sequence * array);

/// Check for msg/ObjectDistance message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs_custom
bool
vision_msgs_custom__msg__ObjectDistance__Sequence__are_equal(const vision_msgs_custom__msg__ObjectDistance__Sequence * lhs, const vision_msgs_custom__msg__ObjectDistance__Sequence * rhs);

/// Copy an array of msg/ObjectDistance messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs_custom
bool
vision_msgs_custom__msg__ObjectDistance__Sequence__copy(
  const vision_msgs_custom__msg__ObjectDistance__Sequence * input,
  vision_msgs_custom__msg__ObjectDistance__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__FUNCTIONS_H_
