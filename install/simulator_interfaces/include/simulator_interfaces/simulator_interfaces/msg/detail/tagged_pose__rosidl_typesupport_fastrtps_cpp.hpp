// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from simulator_interfaces:msg/TaggedPose.idl
// generated code does not contain a copyright notice

#ifndef SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "simulator_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "simulator_interfaces/msg/detail/tagged_pose__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace simulator_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulator_interfaces
cdr_serialize(
  const simulator_interfaces::msg::TaggedPose & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulator_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  simulator_interfaces::msg::TaggedPose & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulator_interfaces
get_serialized_size(
  const simulator_interfaces::msg::TaggedPose & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulator_interfaces
max_serialized_size_TaggedPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace simulator_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulator_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, simulator_interfaces, msg, TaggedPose)();

#ifdef __cplusplus
}
#endif

#endif  // SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_