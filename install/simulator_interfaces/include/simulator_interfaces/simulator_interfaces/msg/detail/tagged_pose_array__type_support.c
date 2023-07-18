// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulator_interfaces:msg/TaggedPoseArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulator_interfaces/msg/detail/tagged_pose_array__rosidl_typesupport_introspection_c.h"
#include "simulator_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulator_interfaces/msg/detail/tagged_pose_array__functions.h"
#include "simulator_interfaces/msg/detail/tagged_pose_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `poses`
#include "simulator_interfaces/msg/tagged_pose.h"
// Member `poses`
#include "simulator_interfaces/msg/detail/tagged_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulator_interfaces__msg__TaggedPoseArray__init(message_memory);
}

void simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_fini_function(void * message_memory)
{
  simulator_interfaces__msg__TaggedPoseArray__fini(message_memory);
}

size_t simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__size_function__TaggedPoseArray__poses(
  const void * untyped_member)
{
  const simulator_interfaces__msg__TaggedPose__Sequence * member =
    (const simulator_interfaces__msg__TaggedPose__Sequence *)(untyped_member);
  return member->size;
}

const void * simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__get_const_function__TaggedPoseArray__poses(
  const void * untyped_member, size_t index)
{
  const simulator_interfaces__msg__TaggedPose__Sequence * member =
    (const simulator_interfaces__msg__TaggedPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__get_function__TaggedPoseArray__poses(
  void * untyped_member, size_t index)
{
  simulator_interfaces__msg__TaggedPose__Sequence * member =
    (simulator_interfaces__msg__TaggedPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__fetch_function__TaggedPoseArray__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const simulator_interfaces__msg__TaggedPose * item =
    ((const simulator_interfaces__msg__TaggedPose *)
    simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__get_const_function__TaggedPoseArray__poses(untyped_member, index));
  simulator_interfaces__msg__TaggedPose * value =
    (simulator_interfaces__msg__TaggedPose *)(untyped_value);
  *value = *item;
}

void simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__assign_function__TaggedPoseArray__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  simulator_interfaces__msg__TaggedPose * item =
    ((simulator_interfaces__msg__TaggedPose *)
    simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__get_function__TaggedPoseArray__poses(untyped_member, index));
  const simulator_interfaces__msg__TaggedPose * value =
    (const simulator_interfaces__msg__TaggedPose *)(untyped_value);
  *item = *value;
}

bool simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__resize_function__TaggedPoseArray__poses(
  void * untyped_member, size_t size)
{
  simulator_interfaces__msg__TaggedPose__Sequence * member =
    (simulator_interfaces__msg__TaggedPose__Sequence *)(untyped_member);
  simulator_interfaces__msg__TaggedPose__Sequence__fini(member);
  return simulator_interfaces__msg__TaggedPose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulator_interfaces__msg__TaggedPoseArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulator_interfaces__msg__TaggedPoseArray, poses),  // bytes offset in struct
    NULL,  // default value
    simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__size_function__TaggedPoseArray__poses,  // size() function pointer
    simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__get_const_function__TaggedPoseArray__poses,  // get_const(index) function pointer
    simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__get_function__TaggedPoseArray__poses,  // get(index) function pointer
    simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__fetch_function__TaggedPoseArray__poses,  // fetch(index, &value) function pointer
    simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__assign_function__TaggedPoseArray__poses,  // assign(index, value) function pointer
    simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__resize_function__TaggedPoseArray__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_message_members = {
  "simulator_interfaces__msg",  // message namespace
  "TaggedPoseArray",  // message name
  2,  // number of fields
  sizeof(simulator_interfaces__msg__TaggedPoseArray),
  simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_message_member_array,  // message members
  simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_init_function,  // function to initialize message memory (memory has to be allocated)
  simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_message_type_support_handle = {
  0,
  &simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulator_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulator_interfaces, msg, TaggedPoseArray)() {
  simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulator_interfaces, msg, TaggedPose)();
  if (!simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_message_type_support_handle.typesupport_identifier) {
    simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulator_interfaces__msg__TaggedPoseArray__rosidl_typesupport_introspection_c__TaggedPoseArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
