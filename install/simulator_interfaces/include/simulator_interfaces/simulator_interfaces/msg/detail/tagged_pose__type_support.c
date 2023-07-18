// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulator_interfaces:msg/TaggedPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulator_interfaces/msg/detail/tagged_pose__rosidl_typesupport_introspection_c.h"
#include "simulator_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulator_interfaces/msg/detail/tagged_pose__functions.h"
#include "simulator_interfaces/msg/detail/tagged_pose__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulator_interfaces__msg__TaggedPose__init(message_memory);
}

void simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_fini_function(void * message_memory)
{
  simulator_interfaces__msg__TaggedPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulator_interfaces__msg__TaggedPose, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulator_interfaces__msg__TaggedPose, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulator_interfaces__msg__TaggedPose, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_message_members = {
  "simulator_interfaces__msg",  // message namespace
  "TaggedPose",  // message name
  3,  // number of fields
  sizeof(simulator_interfaces__msg__TaggedPose),
  simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_message_member_array,  // message members
  simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_init_function,  // function to initialize message memory (memory has to be allocated)
  simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_message_type_support_handle = {
  0,
  &simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulator_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulator_interfaces, msg, TaggedPose)() {
  simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_message_type_support_handle.typesupport_identifier) {
    simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulator_interfaces__msg__TaggedPose__rosidl_typesupport_introspection_c__TaggedPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
