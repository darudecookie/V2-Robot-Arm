# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2_robot_arm_interfaces:msg/SystemDiagnosticInfo.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'temperatures'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemDiagnosticInfo(type):
    """Metaclass of message 'SystemDiagnosticInfo'."""

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
                'v2_robot_arm_interfaces.msg.SystemDiagnosticInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__system_diagnostic_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__system_diagnostic_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__system_diagnostic_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__system_diagnostic_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__system_diagnostic_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ESTOP__DEFAULT': 0,
            'JOINTHOLD__DEFAULT': 0,
        }

    @property
    def ESTOP__DEFAULT(cls):
        """Return default value for message field 'estop'."""
        return 0

    @property
    def JOINTHOLD__DEFAULT(cls):
        """Return default value for message field 'jointhold'."""
        return 0


class SystemDiagnosticInfo(metaclass=Metaclass_SystemDiagnosticInfo):
    """Message class 'SystemDiagnosticInfo'."""

    __slots__ = [
        '_estop',
        '_jointhold',
        '_temperatures',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'estop': 'int8',
        'jointhold': 'int8',
        'temperatures': 'sequence<float>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
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
        self.estop = kwargs.get(
            'estop', SystemDiagnosticInfo.ESTOP__DEFAULT)
        self.jointhold = kwargs.get(
            'jointhold', SystemDiagnosticInfo.JOINTHOLD__DEFAULT)
        self.temperatures = array.array('f', kwargs.get('temperatures', []))

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
        if self.estop != other.estop:
            return False
        if self.jointhold != other.jointhold:
            return False
        if self.temperatures != other.temperatures:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def estop(self):
        """Message field 'estop'."""
        return self._estop

    @estop.setter
    def estop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'estop' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'estop' field must be an integer in [-128, 127]"
        self._estop = value

    @builtins.property
    def jointhold(self):
        """Message field 'jointhold'."""
        return self._jointhold

    @jointhold.setter
    def jointhold(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'jointhold' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'jointhold' field must be an integer in [-128, 127]"
        self._jointhold = value

    @builtins.property
    def temperatures(self):
        """Message field 'temperatures'."""
        return self._temperatures

    @temperatures.setter
    def temperatures(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'temperatures' array.array() must have the type code of 'f'"
                self._temperatures = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'temperatures' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._temperatures = array.array('f', value)
