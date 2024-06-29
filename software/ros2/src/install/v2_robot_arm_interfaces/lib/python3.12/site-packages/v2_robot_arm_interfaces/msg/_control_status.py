# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2_robot_arm_interfaces:msg/ControlStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlStatus(type):
    """Metaclass of message 'ControlStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('v2_robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'v2_robot_arm_interfaces.msg.ControlStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TRAJECTORY_CONTROLLER__DEFAULT': 0,
            'IK_SOLVER__DEFAULT': 1,
            'PERIPHERAL_INTERFACE__DEFAULT': 0,
            'MAIN_CONTROLLER__DEFAULT': 1,
        }

    @property
    def TRAJECTORY_CONTROLLER__DEFAULT(cls):
        """Return default value for message field 'trajectory_controller'."""
        return 0

    @property
    def IK_SOLVER__DEFAULT(cls):
        """Return default value for message field 'ik_solver'."""
        return 1

    @property
    def PERIPHERAL_INTERFACE__DEFAULT(cls):
        """Return default value for message field 'peripheral_interface'."""
        return 0

    @property
    def MAIN_CONTROLLER__DEFAULT(cls):
        """Return default value for message field 'main_controller'."""
        return 1


class ControlStatus(metaclass=Metaclass_ControlStatus):
    """Message class 'ControlStatus'."""

    __slots__ = [
        '_trajectory_controller',
        '_ik_solver',
        '_peripheral_interface',
        '_main_controller',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'trajectory_controller': 'int8',
        'ik_solver': 'int8',
        'peripheral_interface': 'int8',
        'main_controller': 'int8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.trajectory_controller = kwargs.get(
            'trajectory_controller', ControlStatus.TRAJECTORY_CONTROLLER__DEFAULT)
        self.ik_solver = kwargs.get(
            'ik_solver', ControlStatus.IK_SOLVER__DEFAULT)
        self.peripheral_interface = kwargs.get(
            'peripheral_interface', ControlStatus.PERIPHERAL_INTERFACE__DEFAULT)
        self.main_controller = kwargs.get(
            'main_controller', ControlStatus.MAIN_CONTROLLER__DEFAULT)

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.trajectory_controller != other.trajectory_controller:
            return False
        if self.ik_solver != other.ik_solver:
            return False
        if self.peripheral_interface != other.peripheral_interface:
            return False
        if self.main_controller != other.main_controller:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def trajectory_controller(self):
        """Message field 'trajectory_controller'."""
        return self._trajectory_controller

    @trajectory_controller.setter
    def trajectory_controller(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'trajectory_controller' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'trajectory_controller' field must be an integer in [-128, 127]"
        self._trajectory_controller = value

    @builtins.property
    def ik_solver(self):
        """Message field 'ik_solver'."""
        return self._ik_solver

    @ik_solver.setter
    def ik_solver(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ik_solver' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'ik_solver' field must be an integer in [-128, 127]"
        self._ik_solver = value

    @builtins.property
    def peripheral_interface(self):
        """Message field 'peripheral_interface'."""
        return self._peripheral_interface

    @peripheral_interface.setter
    def peripheral_interface(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'peripheral_interface' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'peripheral_interface' field must be an integer in [-128, 127]"
        self._peripheral_interface = value

    @builtins.property
    def main_controller(self):
        """Message field 'main_controller'."""
        return self._main_controller

    @main_controller.setter
    def main_controller(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'main_controller' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'main_controller' field must be an integer in [-128, 127]"
        self._main_controller = value
