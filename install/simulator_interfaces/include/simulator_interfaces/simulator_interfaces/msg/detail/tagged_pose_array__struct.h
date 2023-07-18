// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulator_interfaces:msg/TaggedPoseArray.idl
// generated code does not contain a copyright notice

#ifndef SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__STRUCT_H_
#define SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'poses'
#include "simulator_interfaces/msg/detail/tagged_pose__struct.h"

/// Struct defined in msg/TaggedPoseArray in the package simulator_interfaces.
/**
  * A list of tagged poses
 */
typedef struct simulator_interfaces__msg__TaggedPoseArray
{
  std_msgs__msg__Header header;
  simulator_interfaces__msg__TaggedPose__Sequence poses;
} simulator_interfaces__msg__TaggedPoseArray;

// Struct for a sequence of simulator_interfaces__msg__TaggedPoseArray.
typedef struct simulator_interfaces__msg__TaggedPoseArray__Sequence
{
  simulator_interfaces__msg__TaggedPoseArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulator_interfaces__msg__TaggedPoseArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__STRUCT_H_
