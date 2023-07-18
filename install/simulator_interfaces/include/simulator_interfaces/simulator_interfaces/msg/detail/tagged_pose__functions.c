// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simulator_interfaces:msg/TaggedPose.idl
// generated code does not contain a copyright notice
#include "simulator_interfaces/msg/detail/tagged_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
simulator_interfaces__msg__TaggedPose__init(simulator_interfaces__msg__TaggedPose * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    simulator_interfaces__msg__TaggedPose__fini(msg);
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    simulator_interfaces__msg__TaggedPose__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    simulator_interfaces__msg__TaggedPose__fini(msg);
    return false;
  }
  return true;
}

void
simulator_interfaces__msg__TaggedPose__fini(simulator_interfaces__msg__TaggedPose * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
simulator_interfaces__msg__TaggedPose__are_equal(const simulator_interfaces__msg__TaggedPose * lhs, const simulator_interfaces__msg__TaggedPose * rhs)
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
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
simulator_interfaces__msg__TaggedPose__copy(
  const simulator_interfaces__msg__TaggedPose * input,
  simulator_interfaces__msg__TaggedPose * output)
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
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

simulator_interfaces__msg__TaggedPose *
simulator_interfaces__msg__TaggedPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulator_interfaces__msg__TaggedPose * msg = (simulator_interfaces__msg__TaggedPose *)allocator.allocate(sizeof(simulator_interfaces__msg__TaggedPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulator_interfaces__msg__TaggedPose));
  bool success = simulator_interfaces__msg__TaggedPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulator_interfaces__msg__TaggedPose__destroy(simulator_interfaces__msg__TaggedPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulator_interfaces__msg__TaggedPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulator_interfaces__msg__TaggedPose__Sequence__init(simulator_interfaces__msg__TaggedPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulator_interfaces__msg__TaggedPose * data = NULL;

  if (size) {
    data = (simulator_interfaces__msg__TaggedPose *)allocator.zero_allocate(size, sizeof(simulator_interfaces__msg__TaggedPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulator_interfaces__msg__TaggedPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulator_interfaces__msg__TaggedPose__fini(&data[i - 1]);
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
simulator_interfaces__msg__TaggedPose__Sequence__fini(simulator_interfaces__msg__TaggedPose__Sequence * array)
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
      simulator_interfaces__msg__TaggedPose__fini(&array->data[i]);
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

simulator_interfaces__msg__TaggedPose__Sequence *
simulator_interfaces__msg__TaggedPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulator_interfaces__msg__TaggedPose__Sequence * array = (simulator_interfaces__msg__TaggedPose__Sequence *)allocator.allocate(sizeof(simulator_interfaces__msg__TaggedPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulator_interfaces__msg__TaggedPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulator_interfaces__msg__TaggedPose__Sequence__destroy(simulator_interfaces__msg__TaggedPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulator_interfaces__msg__TaggedPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulator_interfaces__msg__TaggedPose__Sequence__are_equal(const simulator_interfaces__msg__TaggedPose__Sequence * lhs, const simulator_interfaces__msg__TaggedPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulator_interfaces__msg__TaggedPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulator_interfaces__msg__TaggedPose__Sequence__copy(
  const simulator_interfaces__msg__TaggedPose__Sequence * input,
  simulator_interfaces__msg__TaggedPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulator_interfaces__msg__TaggedPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulator_interfaces__msg__TaggedPose * data =
      (simulator_interfaces__msg__TaggedPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulator_interfaces__msg__TaggedPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulator_interfaces__msg__TaggedPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulator_interfaces__msg__TaggedPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
