// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vision_msgs_custom:msg/Detection2DExtended.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vision_msgs_custom/msg/detail/detection2_d_extended__rosidl_typesupport_introspection_c.h"
#include "vision_msgs_custom/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vision_msgs_custom/msg/detail/detection2_d_extended__functions.h"
#include "vision_msgs_custom/msg/detail/detection2_d_extended__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `bbox`
#include "vision_msgs/msg/bounding_box2_d.h"
// Member `bbox`
#include "vision_msgs/msg/detail/bounding_box2_d__rosidl_typesupport_introspection_c.h"
// Member `results`
#include "vision_msgs/msg/object_hypothesis_with_pose.h"
// Member `results`
#include "vision_msgs/msg/detail/object_hypothesis_with_pose__rosidl_typesupport_introspection_c.h"
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position_3d`
#include "geometry_msgs/msg/point.h"
// Member `position_3d`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vision_msgs_custom__msg__Detection2DExtended__init(message_memory);
}

void vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_fini_function(void * message_memory)
{
  vision_msgs_custom__msg__Detection2DExtended__fini(message_memory);
}

size_t vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__size_function__Detection2DExtended__results(
  const void * untyped_member)
{
  const vision_msgs__msg__ObjectHypothesisWithPose__Sequence * member =
    (const vision_msgs__msg__ObjectHypothesisWithPose__Sequence *)(untyped_member);
  return member->size;
}

const void * vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__get_const_function__Detection2DExtended__results(
  const void * untyped_member, size_t index)
{
  const vision_msgs__msg__ObjectHypothesisWithPose__Sequence * member =
    (const vision_msgs__msg__ObjectHypothesisWithPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__get_function__Detection2DExtended__results(
  void * untyped_member, size_t index)
{
  vision_msgs__msg__ObjectHypothesisWithPose__Sequence * member =
    (vision_msgs__msg__ObjectHypothesisWithPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__fetch_function__Detection2DExtended__results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const vision_msgs__msg__ObjectHypothesisWithPose * item =
    ((const vision_msgs__msg__ObjectHypothesisWithPose *)
    vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__get_const_function__Detection2DExtended__results(untyped_member, index));
  vision_msgs__msg__ObjectHypothesisWithPose * value =
    (vision_msgs__msg__ObjectHypothesisWithPose *)(untyped_value);
  *value = *item;
}

void vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__assign_function__Detection2DExtended__results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  vision_msgs__msg__ObjectHypothesisWithPose * item =
    ((vision_msgs__msg__ObjectHypothesisWithPose *)
    vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__get_function__Detection2DExtended__results(untyped_member, index));
  const vision_msgs__msg__ObjectHypothesisWithPose * value =
    (const vision_msgs__msg__ObjectHypothesisWithPose *)(untyped_value);
  *item = *value;
}

bool vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__resize_function__Detection2DExtended__results(
  void * untyped_member, size_t size)
{
  vision_msgs__msg__ObjectHypothesisWithPose__Sequence * member =
    (vision_msgs__msg__ObjectHypothesisWithPose__Sequence *)(untyped_member);
  vision_msgs__msg__ObjectHypothesisWithPose__Sequence__fini(member);
  return vision_msgs__msg__ObjectHypothesisWithPose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs_custom__msg__Detection2DExtended, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs_custom__msg__Detection2DExtended, bbox),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs_custom__msg__Detection2DExtended, results),  // bytes offset in struct
    NULL,  // default value
    vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__size_function__Detection2DExtended__results,  // size() function pointer
    vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__get_const_function__Detection2DExtended__results,  // get_const(index) function pointer
    vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__get_function__Detection2DExtended__results,  // get(index) function pointer
    vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__fetch_function__Detection2DExtended__results,  // fetch(index, &value) function pointer
    vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__assign_function__Detection2DExtended__results,  // assign(index, value) function pointer
    vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__resize_function__Detection2DExtended__results  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs_custom__msg__Detection2DExtended, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs_custom__msg__Detection2DExtended, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs_custom__msg__Detection2DExtended, class_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs_custom__msg__Detection2DExtended, class_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_3d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs_custom__msg__Detection2DExtended, position_3d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_message_members = {
  "vision_msgs_custom__msg",  // message namespace
  "Detection2DExtended",  // message name
  8,  // number of fields
  sizeof(vision_msgs_custom__msg__Detection2DExtended),
  vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_message_member_array,  // message members
  vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_init_function,  // function to initialize message memory (memory has to be allocated)
  vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_message_type_support_handle = {
  0,
  &vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vision_msgs_custom
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_msgs_custom, msg, Detection2DExtended)() {
  vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_msgs, msg, BoundingBox2D)();
  vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_msgs, msg, ObjectHypothesisWithPose)();
  vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_message_type_support_handle.typesupport_identifier) {
    vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vision_msgs_custom__msg__Detection2DExtended__rosidl_typesupport_introspection_c__Detection2DExtended_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
