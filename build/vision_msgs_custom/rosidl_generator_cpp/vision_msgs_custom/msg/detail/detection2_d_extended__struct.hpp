// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_msgs_custom:msg/Detection2DExtended.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS_CUSTOM__MSG__DETAIL__DETECTION2_D_EXTENDED__STRUCT_HPP_
#define VISION_MSGS_CUSTOM__MSG__DETAIL__DETECTION2_D_EXTENDED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'bbox'
#include "vision_msgs/msg/detail/bounding_box2_d__struct.hpp"
// Member 'results'
#include "vision_msgs/msg/detail/object_hypothesis_with_pose__struct.hpp"
// Member 'position_3d'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vision_msgs_custom__msg__Detection2DExtended __attribute__((deprecated))
#else
# define DEPRECATED__vision_msgs_custom__msg__Detection2DExtended __declspec(deprecated)
#endif

namespace vision_msgs_custom
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection2DExtended_
{
  using Type = Detection2DExtended_<ContainerAllocator>;

  explicit Detection2DExtended_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    bbox(_init),
    position_3d(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->confidence = 0.0f;
      this->class_id = 0l;
      this->class_name = "";
    }
  }

  explicit Detection2DExtended_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    bbox(_alloc, _init),
    class_name(_alloc),
    position_3d(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->confidence = 0.0f;
      this->class_id = 0l;
      this->class_name = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bbox_type =
    vision_msgs::msg::BoundingBox2D_<ContainerAllocator>;
  _bbox_type bbox;
  using _results_type =
    std::vector<vision_msgs::msg::ObjectHypothesisWithPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_msgs::msg::ObjectHypothesisWithPose_<ContainerAllocator>>>;
  _results_type results;
  using _distance_type =
    float;
  _distance_type distance;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _class_id_type =
    int32_t;
  _class_id_type class_id;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;
  using _position_3d_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_3d_type position_3d;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bbox(
    const vision_msgs::msg::BoundingBox2D_<ContainerAllocator> & _arg)
  {
    this->bbox = _arg;
    return *this;
  }
  Type & set__results(
    const std::vector<vision_msgs::msg::ObjectHypothesisWithPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_msgs::msg::ObjectHypothesisWithPose_<ContainerAllocator>>> & _arg)
  {
    this->results = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__class_id(
    const int32_t & _arg)
  {
    this->class_id = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__position_3d(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position_3d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_msgs_custom::msg::Detection2DExtended_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_msgs_custom::msg::Detection2DExtended_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_msgs_custom::msg::Detection2DExtended_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_msgs_custom::msg::Detection2DExtended_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_msgs_custom::msg::Detection2DExtended_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_msgs_custom::msg::Detection2DExtended_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_msgs_custom::msg::Detection2DExtended_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_msgs_custom::msg::Detection2DExtended_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_msgs_custom::msg::Detection2DExtended_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_msgs_custom::msg::Detection2DExtended_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_msgs_custom__msg__Detection2DExtended
    std::shared_ptr<vision_msgs_custom::msg::Detection2DExtended_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_msgs_custom__msg__Detection2DExtended
    std::shared_ptr<vision_msgs_custom::msg::Detection2DExtended_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection2DExtended_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bbox != other.bbox) {
      return false;
    }
    if (this->results != other.results) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->class_id != other.class_id) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->position_3d != other.position_3d) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection2DExtended_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection2DExtended_

// alias to use template instance with default allocator
using Detection2DExtended =
  vision_msgs_custom::msg::Detection2DExtended_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vision_msgs_custom

#endif  // VISION_MSGS_CUSTOM__MSG__DETAIL__DETECTION2_D_EXTENDED__STRUCT_HPP_
