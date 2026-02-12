// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vision_msgs_custom:msg/ObjectDistance.idl
// generated code does not contain a copyright notice
#include "vision_msgs_custom/msg/detail/object_distance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

bool
vision_msgs_custom__msg__ObjectDistance__init(vision_msgs_custom__msg__ObjectDistance * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vision_msgs_custom__msg__ObjectDistance__fini(msg);
    return false;
  }
  // tracking_id
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    vision_msgs_custom__msg__ObjectDistance__fini(msg);
    return false;
  }
  // distance
  // azimuth
  // elevation
  // confidence
  return true;
}

void
vision_msgs_custom__msg__ObjectDistance__fini(vision_msgs_custom__msg__ObjectDistance * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tracking_id
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // distance
  // azimuth
  // elevation
  // confidence
}

bool
vision_msgs_custom__msg__ObjectDistance__are_equal(const vision_msgs_custom__msg__ObjectDistance * lhs, const vision_msgs_custom__msg__ObjectDistance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // tracking_id
  if (lhs->tracking_id != rhs->tracking_id) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // azimuth
  if (lhs->azimuth != rhs->azimuth) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
vision_msgs_custom__msg__ObjectDistance__copy(
  const vision_msgs_custom__msg__ObjectDistance * input,
  vision_msgs_custom__msg__ObjectDistance * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // tracking_id
  output->tracking_id = input->tracking_id;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // distance
  output->distance = input->distance;
  // azimuth
  output->azimuth = input->azimuth;
  // elevation
  output->elevation = input->elevation;
  // confidence
  output->confidence = input->confidence;
  return true;
}

vision_msgs_custom__msg__ObjectDistance *
vision_msgs_custom__msg__ObjectDistance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs_custom__msg__ObjectDistance * msg = (vision_msgs_custom__msg__ObjectDistance *)allocator.allocate(sizeof(vision_msgs_custom__msg__ObjectDistance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_msgs_custom__msg__ObjectDistance));
  bool success = vision_msgs_custom__msg__ObjectDistance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_msgs_custom__msg__ObjectDistance__destroy(vision_msgs_custom__msg__ObjectDistance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_msgs_custom__msg__ObjectDistance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_msgs_custom__msg__ObjectDistance__Sequence__init(vision_msgs_custom__msg__ObjectDistance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs_custom__msg__ObjectDistance * data = NULL;

  if (size) {
    data = (vision_msgs_custom__msg__ObjectDistance *)allocator.zero_allocate(size, sizeof(vision_msgs_custom__msg__ObjectDistance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_msgs_custom__msg__ObjectDistance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_msgs_custom__msg__ObjectDistance__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vision_msgs_custom__msg__ObjectDistance__Sequence__fini(vision_msgs_custom__msg__ObjectDistance__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vision_msgs_custom__msg__ObjectDistance__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vision_msgs_custom__msg__ObjectDistance__Sequence *
vision_msgs_custom__msg__ObjectDistance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs_custom__msg__ObjectDistance__Sequence * array = (vision_msgs_custom__msg__ObjectDistance__Sequence *)allocator.allocate(sizeof(vision_msgs_custom__msg__ObjectDistance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_msgs_custom__msg__ObjectDistance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_msgs_custom__msg__ObjectDistance__Sequence__destroy(vision_msgs_custom__msg__ObjectDistance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_msgs_custom__msg__ObjectDistance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_msgs_custom__msg__ObjectDistance__Sequence__are_equal(const vision_msgs_custom__msg__ObjectDistance__Sequence * lhs, const vision_msgs_custom__msg__ObjectDistance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_msgs_custom__msg__ObjectDistance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_msgs_custom__msg__ObjectDistance__Sequence__copy(
  const vision_msgs_custom__msg__ObjectDistance__Sequence * input,
  vision_msgs_custom__msg__ObjectDistance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_msgs_custom__msg__ObjectDistance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vision_msgs_custom__msg__ObjectDistance * data =
      (vision_msgs_custom__msg__ObjectDistance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_msgs_custom__msg__ObjectDistance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vision_msgs_custom__msg__ObjectDistance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vision_msgs_custom__msg__ObjectDistance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
