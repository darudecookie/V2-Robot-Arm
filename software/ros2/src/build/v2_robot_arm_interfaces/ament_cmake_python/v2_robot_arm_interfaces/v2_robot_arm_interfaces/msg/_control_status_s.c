// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2_robot_arm_interfaces:msg/ControlStatus.idl
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
#include "v2_robot_arm_interfaces/msg/detail/control_status__struct.h"
#include "v2_robot_arm_interfaces/msg/detail/control_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2_robot_arm_interfaces__msg__control_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("v2_robot_arm_interfaces.msg._control_status.ControlStatus", full_classname_dest, 57) == 0);
  }
  v2_robot_arm_interfaces__msg__ControlStatus * ros_message = _ros_message;
  {  // trajectory_controller
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_controller");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trajectory_controller = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ik_solver
    PyObject * field = PyObject_GetAttrString(_pymsg, "ik_solver");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ik_solver = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // peripheral_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "peripheral_interface");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->peripheral_interface = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // master_controller
    PyObject * field = PyObject_GetAttrString(_pymsg, "master_controller");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->master_controller = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2_robot_arm_interfaces__msg__control_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2_robot_arm_interfaces.msg._control_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2_robot_arm_interfaces__msg__ControlStatus * ros_message = (v2_robot_arm_interfaces__msg__ControlStatus *)raw_ros_message;
  {  // trajectory_controller
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->trajectory_controller);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_controller", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ik_solver
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ik_solver);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ik_solver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // peripheral_interface
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->peripheral_interface);
    {
      int rc = PyObject_SetAttrString(_pymessage, "peripheral_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // master_controller
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->master_controller);
    {
      int rc = PyObject_SetAttrString(_pymessage, "master_controller", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
