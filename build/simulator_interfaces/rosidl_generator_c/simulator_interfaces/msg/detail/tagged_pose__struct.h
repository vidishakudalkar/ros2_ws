// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulator_interfaces:msg/TaggedPose.idl
// generated code does not contain a copyright notice

#ifndef SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__STRUCT_H_
#define SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__STRUCT_H_

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
// Member 'label'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/TaggedPose in the package simulator_interfaces.
/**
  * Defines the pose of an object with ann associated "tag"
 */
typedef struct simulator_interfaces__msg__TaggedPose
{
  std_msgs__msg__Header header;
  /// Tag/label associated with the object
  rosidl_runtime_c__String label;
  /// Pose of the object
  geometry_msgs__msg__Pose pose;
} simulator_interfaces__msg__TaggedPose;

// Struct for a sequence of simulator_interfaces__msg__TaggedPose.
typedef struct simulator_interfaces__msg__TaggedPose__Sequence
{
  simulator_interfaces__msg__TaggedPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulator_interfaces__msg__TaggedPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__STRUCT_H_
