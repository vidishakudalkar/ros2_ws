// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulator_interfaces:msg/TaggedPoseArray.idl
// generated code does not contain a copyright notice

#ifndef SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__TRAITS_HPP_
#define SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulator_interfaces/msg/detail/tagged_pose_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'poses'
#include "simulator_interfaces/msg/detail/tagged_pose__traits.hpp"

namespace simulator_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaggedPoseArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaggedPoseArray & msg,
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

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaggedPoseArray & msg, bool use_flow_style = false)
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
  const simulator_interfaces::msg::TaggedPoseArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulator_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulator_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const simulator_interfaces::msg::TaggedPoseArray & msg)
{
  return simulator_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<simulator_interfaces::msg::TaggedPoseArray>()
{
  return "simulator_interfaces::msg::TaggedPoseArray";
}

template<>
inline const char * name<simulator_interfaces::msg::TaggedPoseArray>()
{
  return "simulator_interfaces/msg/TaggedPoseArray";
}

template<>
struct has_fixed_size<simulator_interfaces::msg::TaggedPoseArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulator_interfaces::msg::TaggedPoseArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulator_interfaces::msg::TaggedPoseArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__TRAITS_HPP_
