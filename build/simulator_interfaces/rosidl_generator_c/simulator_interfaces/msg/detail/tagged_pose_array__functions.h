// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from simulator_interfaces:msg/TaggedPoseArray.idl
// generated code does not contain a copyright notice

#ifndef SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__FUNCTIONS_H_
#define SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "simulator_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "simulator_interfaces/msg/detail/tagged_pose_array__struct.h"

/// Initialize msg/TaggedPoseArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simulator_interfaces__msg__TaggedPoseArray
 * )) before or use
 * simulator_interfaces__msg__TaggedPoseArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simulator_interfaces
bool
simulator_interfaces__msg__TaggedPoseArray__init(simulator_interfaces__msg__TaggedPoseArray * msg);

/// Finalize msg/TaggedPoseArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulator_interfaces
void
simulator_interfaces__msg__TaggedPoseArray__fini(simulator_interfaces__msg__TaggedPoseArray * msg);

/// Create msg/TaggedPoseArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simulator_interfaces__msg__TaggedPoseArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simulator_interfaces
simulator_interfaces__msg__TaggedPoseArray *
simulator_interfaces__msg__TaggedPoseArray__create();

/// Destroy msg/TaggedPoseArray message.
/**
 * It calls
 * simulator_interfaces__msg__TaggedPoseArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulator_interfaces
void
simulator_interfaces__msg__TaggedPoseArray__destroy(simulator_interfaces__msg__TaggedPoseArray * msg);

/// Check for msg/TaggedPoseArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulator_interfaces
bool
simulator_interfaces__msg__TaggedPoseArray__are_equal(const simulator_interfaces__msg__TaggedPoseArray * lhs, const simulator_interfaces__msg__TaggedPoseArray * rhs);

/// Copy a msg/TaggedPoseArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_simulator_interfaces
bool
simulator_interfaces__msg__TaggedPoseArray__copy(
  const simulator_interfaces__msg__TaggedPoseArray * input,
  simulator_interfaces__msg__TaggedPoseArray * output);

/// Initialize array of msg/TaggedPoseArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * simulator_interfaces__msg__TaggedPoseArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulator_interfaces
bool
simulator_interfaces__msg__TaggedPoseArray__Sequence__init(simulator_interfaces__msg__TaggedPoseArray__Sequence * array, size_t size);

/// Finalize array of msg/TaggedPoseArray messages.
/**
 * It calls
 * simulator_interfaces__msg__TaggedPoseArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulator_interfaces
void
simulator_interfaces__msg__TaggedPoseArray__Sequence__fini(simulator_interfaces__msg__TaggedPoseArray__Sequence * array);

/// Create array of msg/TaggedPoseArray messages.
/**
 * It allocates the memory for the array and calls
 * simulator_interfaces__msg__TaggedPoseArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simulator_interfaces
simulator_interfaces__msg__TaggedPoseArray__Sequence *
simulator_interfaces__msg__TaggedPoseArray__Sequence__create(size_t size);

/// Destroy array of msg/TaggedPoseArray messages.
/**
 * It calls
 * simulator_interfaces__msg__TaggedPoseArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulator_interfaces
void
simulator_interfaces__msg__TaggedPoseArray__Sequence__destroy(simulator_interfaces__msg__TaggedPoseArray__Sequence * array);

/// Check for msg/TaggedPoseArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulator_interfaces
bool
simulator_interfaces__msg__TaggedPoseArray__Sequence__are_equal(const simulator_interfaces__msg__TaggedPoseArray__Sequence * lhs, const simulator_interfaces__msg__TaggedPoseArray__Sequence * rhs);

/// Copy an array of msg/TaggedPoseArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_simulator_interfaces
bool
simulator_interfaces__msg__TaggedPoseArray__Sequence__copy(
  const simulator_interfaces__msg__TaggedPoseArray__Sequence * input,
  simulator_interfaces__msg__TaggedPoseArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__FUNCTIONS_H_
