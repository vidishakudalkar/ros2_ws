// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulator_interfaces:msg/TaggedPose.idl
// generated code does not contain a copyright notice

#ifndef SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__TRAITS_HPP_
#define SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulator_interfaces/msg/detail/tagged_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace simulator_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaggedPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaggedPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaggedPose & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace simulator_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulator_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulator_interfaces::msg::TaggedPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulator_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulator_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const simulator_interfaces::msg::TaggedPose & msg)
{
  return simulator_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<simulator_interfaces::msg::TaggedPose>()
{
  return "simulator_interfaces::msg::TaggedPose";
}

template<>
inline const char * name<simulator_interfaces::msg::TaggedPose>()
{
  return "simulator_interfaces/msg/TaggedPose";
}

template<>
struct has_fixed_size<simulator_interfaces::msg::TaggedPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulator_interfaces::msg::TaggedPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulator_interfaces::msg::TaggedPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__TRAITS_HPP_
