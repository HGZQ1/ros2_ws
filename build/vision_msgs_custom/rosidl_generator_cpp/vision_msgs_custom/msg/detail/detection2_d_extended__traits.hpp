// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vision_msgs_custom:msg/Detection2DExtended.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS_CUSTOM__MSG__DETAIL__DETECTION2_D_EXTENDED__TRAITS_HPP_
#define VISION_MSGS_CUSTOM__MSG__DETAIL__DETECTION2_D_EXTENDED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vision_msgs_custom/msg/detail/detection2_d_extended__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'bbox'
#include "vision_msgs/msg/detail/bounding_box2_d__traits.hpp"
// Member 'results'
#include "vision_msgs/msg/detail/object_hypothesis_with_pose__traits.hpp"
// Member 'position_3d'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace vision_msgs_custom
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection2DExtended & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: bbox
  {
    out << "bbox: ";
    to_flow_style_yaml(msg.bbox, out);
    out << ", ";
  }

  // member: results
  {
    if (msg.results.size() == 0) {
      out << "results: []";
    } else {
      out << "results: [";
      size_t pending_items = msg.results.size();
      for (auto item : msg.results) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: class_id
  {
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << ", ";
  }

  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << ", ";
  }

  // member: position_3d
  {
    out << "position_3d: ";
    to_flow_style_yaml(msg.position_3d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detection2DExtended & msg,
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

  // member: bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox:\n";
    to_block_style_yaml(msg.bbox, out, indentation + 2);
  }

  // member: results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.results.size() == 0) {
      out << "results: []\n";
    } else {
      out << "results:\n";
      for (auto item : msg.results) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
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

  // member: position_3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_3d:\n";
    to_block_style_yaml(msg.position_3d, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection2DExtended & msg, bool use_flow_style = false)
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
  const vision_msgs_custom::msg::Detection2DExtended & msg,
  std::ostream & out, size_t indentation = 0)
{
  vision_msgs_custom::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vision_msgs_custom::msg::to_yaml() instead")]]
inline std::string to_yaml(const vision_msgs_custom::msg::Detection2DExtended & msg)
{
  return vision_msgs_custom::msg::to_yaml(msg);
}

template<>
inline const char * data_type<vision_msgs_custom::msg::Detection2DExtended>()
{
  return "vision_msgs_custom::msg::Detection2DExtended";
}

template<>
inline const char * name<vision_msgs_custom::msg::Detection2DExtended>()
{
  return "vision_msgs_custom/msg/Detection2DExtended";
}

template<>
struct has_fixed_size<vision_msgs_custom::msg::Detection2DExtended>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vision_msgs_custom::msg::Detection2DExtended>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vision_msgs_custom::msg::Detection2DExtended>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISION_MSGS_CUSTOM__MSG__DETAIL__DETECTION2_D_EXTENDED__TRAITS_HPP_
