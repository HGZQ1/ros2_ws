// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_msgs_custom:msg/ObjectDistance.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_HPP_
#define VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__vision_msgs_custom__msg__ObjectDistance __attribute__((deprecated))
#else
# define DEPRECATED__vision_msgs_custom__msg__ObjectDistance __declspec(deprecated)
#endif

namespace vision_msgs_custom
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectDistance_
{
  using Type = ObjectDistance_<ContainerAllocator>;

  explicit ObjectDistance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracking_id = 0l;
      this->class_name = "";
      this->distance = 0.0f;
      this->azimuth = 0.0f;
      this->elevation = 0.0f;
      this->confidence = 0.0f;
    }
  }

  explicit ObjectDistance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    class_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracking_id = 0l;
      this->class_name = "";
      this->distance = 0.0f;
      this->azimuth = 0.0f;
      this->elevation = 0.0f;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tracking_id_type =
    int32_t;
  _tracking_id_type tracking_id;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;
  using _distance_type =
    float;
  _distance_type distance;
  using _azimuth_type =
    float;
  _azimuth_type azimuth;
  using _elevation_type =
    float;
  _elevation_type elevation;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tracking_id(
    const int32_t & _arg)
  {
    this->tracking_id = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__azimuth(
    const float & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__elevation(
    const float & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_msgs_custom::msg::ObjectDistance_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_msgs_custom::msg::ObjectDistance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_msgs_custom::msg::ObjectDistance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_msgs_custom::msg::ObjectDistance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_msgs_custom::msg::ObjectDistance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_msgs_custom::msg::ObjectDistance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_msgs_custom::msg::ObjectDistance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_msgs_custom::msg::ObjectDistance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_msgs_custom::msg::ObjectDistance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_msgs_custom::msg::ObjectDistance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_msgs_custom__msg__ObjectDistance
    std::shared_ptr<vision_msgs_custom::msg::ObjectDistance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_msgs_custom__msg__ObjectDistance
    std::shared_ptr<vision_msgs_custom::msg::ObjectDistance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDistance_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tracking_id != other.tracking_id) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDistance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDistance_

// alias to use template instance with default allocator
using ObjectDistance =
  vision_msgs_custom::msg::ObjectDistance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vision_msgs_custom

#endif  // VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_HPP_
