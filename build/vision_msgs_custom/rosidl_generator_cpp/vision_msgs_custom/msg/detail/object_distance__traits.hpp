// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vision_msgs_custom:msg/ObjectDistance.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__TRAITS_HPP_
#define VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vision_msgs_custom/msg/detail/object_distance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace vision_msgs_custom
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectDistance & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tracking_id
  {
    out << "tracking_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_id, out);
    out << ", ";
  }

  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: azimuth
  {
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectDistance & msg,
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

  // member: tracking_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_id, out);
    out << "\n";
  }

  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectDistance & msg, bool use_flow_style = false)
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

}  // namespace vision_msgs_custom

namespace rosidl_generator_traits
{

[[deprecated("use vision_msgs_custom::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vision_msgs_custom::msg::ObjectDistance & msg,
  std::ostream & out, size_t indentation = 0)
{
  vision_msgs_custom::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vision_msgs_custom::msg::to_yaml() instead")]]
inline std::string to_yaml(const vision_msgs_custom::msg::ObjectDistance & msg)
{
  return vision_msgs_custom::msg::to_yaml(msg);
}

template<>
inline const char * data_type<vision_msgs_custom::msg::ObjectDistance>()
{
  return "vision_msgs_custom::msg::ObjectDistance";
}

template<>
inline const char * name<vision_msgs_custom::msg::ObjectDistance>()
{
  return "vision_msgs_custom/msg/ObjectDistance";
}

template<>
struct has_fixed_size<vision_msgs_custom::msg::ObjectDistance>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vision_msgs_custom::msg::ObjectDistance>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vision_msgs_custom::msg::ObjectDistance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__TRAITS_HPP_
