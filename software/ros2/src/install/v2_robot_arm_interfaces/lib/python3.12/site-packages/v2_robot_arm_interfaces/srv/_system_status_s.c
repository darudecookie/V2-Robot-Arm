// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2_robot_arm_interfaces:srv/SystemStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "v2_robot_arm_interfaces/srv/detail/system_status__struct.h"
#include "v2_robot_arm_interfaces/srv/detail/system_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2_robot_arm_interfaces__srv__system_status__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("v2_robot_arm_interfaces.srv._system_status.SystemStatus_Request", full_classname_dest, 63) == 0);
  }
  v2_robot_arm_interfaces__srv__SystemStatus_Request * ros_message = _ros_message;
  {  // estop
    PyObject * field = PyObject_GetAttrString(_pymsg, "estop");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->estop = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // jointhold
    PyObject * field = PyObject_GetAttrString(_pymsg, "jointhold");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->jointhold = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // move_home
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_home");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->move_home = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2_robot_arm_interfaces__srv__system_status__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SystemStatus_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2_robot_arm_interfaces.srv._system_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SystemStatus_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2_robot_arm_interfaces__srv__SystemStatus_Request * ros_message = (v2_robot_arm_interfaces__srv__SystemStatus_Request *)raw_ros_message;
  {  // estop
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->estop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // jointhold
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->jointhold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "jointhold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_home
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->move_home);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_home", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/system_status__struct.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/system_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2_robot_arm_interfaces__srv__system_status__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("v2_robot_arm_interfaces.srv._system_status.SystemStatus_Response", full_classname_dest, 64) == 0);
  }
  v2_robot_arm_interfaces__srv__SystemStatus_Response * ros_message = _ros_message;
  {  // returnsuccess
    PyObject * field = PyObject_GetAttrString(_pymsg, "returnsuccess");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->returnsuccess = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2_robot_arm_interfaces__srv__system_status__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SystemStatus_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2_robot_arm_interfaces.srv._system_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SystemStatus_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2_robot_arm_interfaces__srv__SystemStatus_Response * ros_message = (v2_robot_arm_interfaces__srv__SystemStatus_Response *)raw_ros_message;
  {  // returnsuccess
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->returnsuccess);
    {
      int rc = PyObject_SetAttrString(_pymessage, "returnsuccess", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/system_status__struct.h"
// already included above
// #include "v2_robot_arm_interfaces/srv/detail/system_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool v2_robot_arm_interfaces__srv__system_status__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2_robot_arm_interfaces__srv__system_status__request__convert_to_py(void * raw_ros_message);
bool v2_robot_arm_interfaces__srv__system_status__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2_robot_arm_interfaces__srv__system_status__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2_robot_arm_interfaces__srv__system_status__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("v2_robot_arm_interfaces.srv._system_status.SystemStatus_Event", full_classname_dest, 61) == 0);
  }
  v2_robot_arm_interfaces__srv__SystemStatus_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2_robot_arm_interfaces__srv__SystemStatus_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2_robot_arm_interfaces__srv__SystemStatus_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2_robot_arm_interfaces__srv__system_status__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2_robot_arm_interfaces__srv__SystemStatus_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2_robot_arm_interfaces__srv__SystemStatus_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2_robot_arm_interfaces__srv__system_status__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2_robot_arm_interfaces__srv__system_status__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SystemStatus_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2_robot_arm_interfaces.srv._system_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SystemStatus_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2_robot_arm_interfaces__srv__SystemStatus_Event * ros_message = (v2_robot_arm_interfaces__srv__SystemStatus_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2_robot_arm_interfaces__srv__SystemStatus_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = v2_robot_arm_interfaces__srv__system_status__request__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2_robot_arm_interfaces__srv__SystemStatus_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = v2_robot_arm_interfaces__srv__system_status__response__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
