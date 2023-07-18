// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulator_interfaces:msg/PosRot.idl
// generated code does not contain a copyright notice

#ifndef SIMULATOR_INTERFACES__MSG__DETAIL__POS_ROT__STRUCT_H_
#define SIMULATOR_INTERFACES__MSG__DETAIL__POS_ROT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PosRot in the package simulator_interfaces.
typedef struct simulator_interfaces__msg__PosRot
{
  float pos_x;
  float pos_y;
  float pos_z;
  float rot_x;
  float rot_y;
  float rot_z;
  float rot_w;
} simulator_interfaces__msg__PosRot;

// Struct for a sequence of simulator_interfaces__msg__PosRot.
typedef struct simulator_interfaces__msg__PosRot__Sequence
{
  simulator_interfaces__msg__PosRot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulator_interfaces__msg__PosRot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATOR_INTERFACES__MSG__DETAIL__POS_ROT__STRUCT_H_
