// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2_robot_arm_interfaces:msg/PeripheralSpeed.idl
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
#include "v2_robot_arm_interfaces/msg/detail/peripheral_speed__struct.h"
#include "v2_robot_arm_interfaces/msg/detail/peripheral_speed__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2_robot_arm_interfaces__msg__peripheral_speed__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("v2_robot_arm_interfaces.msg._peripheral_speed.PeripheralSpeed", full_classname_dest, 61) == 0);
  }
  v2_robot_arm_interfaces__msg__PeripheralSpeed * ros_message = _ros_message;
  {  // translation_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "translation_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->translation_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotation_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotation_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2_robot_arm_interfaces__msg__peripheral_speed__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PeripheralSpeed */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2_robot_arm_interfaces.msg._peripheral_speed");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PeripheralSpeed");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2_robot_arm_interfaces__msg__PeripheralSpeed * ros_message = (v2_robot_arm_interfaces__msg__PeripheralSpeed *)raw_ros_message;
  {  // translation_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->translation_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "translation_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotation_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
