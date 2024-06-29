# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2_robot_arm_interfaces:msg/CurrentJointInfo.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'current_joint_positions'
# Member 'current_joint_velocity'
# Member 'current_joint_acceleration'
# Member 'current_joint_jerks'
# Member 'current_joint_torques'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CurrentJointInfo(type):
    """Metaclass of message 'CurrentJointInfo'."""

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
                'v2_robot_arm_interfaces.msg.CurrentJointInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__current_joint_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__current_joint_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__current_joint_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__current_joint_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__current_joint_info

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CurrentJointInfo(metaclass=Metaclass_CurrentJointInfo):
    """Message class 'CurrentJointInfo'."""

    __slots__ = [
        '_header',
        '_current_joint_positions',
        '_current_joint_velocity',
        '_current_joint_acceleration',
        '_current_joint_jerks',
        '_current_joint_torques',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'current_joint_positions': 'float[7]',
        'current_joint_velocity': 'float[7]',
        'current_joint_acceleration': 'float[7]',
        'current_joint_jerks': 'float[7]',
        'current_joint_torques': 'float[7]',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 7),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        if 'current_joint_positions' not in kwargs:
            self.current_joint_positions = numpy.zeros(7, dtype=numpy.float32)
        else:
            self.current_joint_positions = numpy.array(kwargs.get('current_joint_positions'), dtype=numpy.float32)
            assert self.current_joint_positions.shape == (7, )
        if 'current_joint_velocity' not in kwargs:
            self.current_joint_velocity = numpy.zeros(7, dtype=numpy.float32)
        else:
            self.current_joint_velocity = numpy.array(kwargs.get('current_joint_velocity'), dtype=numpy.float32)
            assert self.current_joint_velocity.shape == (7, )
        if 'current_joint_acceleration' not in kwargs:
            self.current_joint_acceleration = numpy.zeros(7, dtype=numpy.float32)
        else:
            self.current_joint_acceleration = numpy.array(kwargs.get('current_joint_acceleration'), dtype=numpy.float32)
            assert self.current_joint_acceleration.shape == (7, )
        if 'current_joint_jerks' not in kwargs:
            self.current_joint_jerks = numpy.zeros(7, dtype=numpy.float32)
        else:
            self.current_joint_jerks = numpy.array(kwargs.get('current_joint_jerks'), dtype=numpy.float32)
            assert self.current_joint_jerks.shape == (7, )
        if 'current_joint_torques' not in kwargs:
            self.current_joint_torques = numpy.zeros(7, dtype=numpy.float32)
        else:
            self.current_joint_torques = numpy.array(kwargs.get('current_joint_torques'), dtype=numpy.float32)
            assert self.current_joint_torques.shape == (7, )

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
        if self.header != other.header:
            return False
        if all(self.current_joint_positions != other.current_joint_positions):
            return False
        if all(self.current_joint_velocity != other.current_joint_velocity):
            return False
        if all(self.current_joint_acceleration != other.current_joint_acceleration):
            return False
        if all(self.current_joint_jerks != other.current_joint_jerks):
            return False
        if all(self.current_joint_torques != other.current_joint_torques):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def current_joint_positions(self):
        """Message field 'current_joint_positions'."""
        return self._current_joint_positions

    @current_joint_positions.setter
    def current_joint_positions(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'current_joint_positions' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 7, \
                    "The 'current_joint_positions' numpy.ndarray() must have a size of 7"
                self._current_joint_positions = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'current_joint_positions' field must be a set or sequence with length 7 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._current_joint_positions = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def current_joint_velocity(self):
        """Message field 'current_joint_velocity'."""
        return self._current_joint_velocity

    @current_joint_velocity.setter
    def current_joint_velocity(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'current_joint_velocity' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 7, \
                    "The 'current_joint_velocity' numpy.ndarray() must have a size of 7"
                self._current_joint_velocity = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'current_joint_velocity' field must be a set or sequence with length 7 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._current_joint_velocity = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def current_joint_acceleration(self):
        """Message field 'current_joint_acceleration'."""
        return self._current_joint_acceleration

    @current_joint_acceleration.setter
    def current_joint_acceleration(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'current_joint_acceleration' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 7, \
                    "The 'current_joint_acceleration' numpy.ndarray() must have a size of 7"
                self._current_joint_acceleration = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'current_joint_acceleration' field must be a set or sequence with length 7 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._current_joint_acceleration = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def current_joint_jerks(self):
        """Message field 'current_joint_jerks'."""
        return self._current_joint_jerks

    @current_joint_jerks.setter
    def current_joint_jerks(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'current_joint_jerks' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 7, \
                    "The 'current_joint_jerks' numpy.ndarray() must have a size of 7"
                self._current_joint_jerks = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'current_joint_jerks' field must be a set or sequence with length 7 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._current_joint_jerks = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def current_joint_torques(self):
        """Message field 'current_joint_torques'."""
        return self._current_joint_torques

    @current_joint_torques.setter
    def current_joint_torques(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'current_joint_torques' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 7, \
                    "The 'current_joint_torques' numpy.ndarray() must have a size of 7"
                self._current_joint_torques = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'current_joint_torques' field must be a set or sequence with length 7 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._current_joint_torques = numpy.array(value, dtype=numpy.float32)
