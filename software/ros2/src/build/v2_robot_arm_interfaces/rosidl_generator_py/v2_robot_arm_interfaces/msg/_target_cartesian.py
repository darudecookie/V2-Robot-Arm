# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2_robot_arm_interfaces:msg/TargetCartesian.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position'
# Member 'rotation'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TargetCartesian(type):
    """Metaclass of message 'TargetCartesian'."""

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
                'v2_robot_arm_interfaces.msg.TargetCartesian')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__target_cartesian
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__target_cartesian
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__target_cartesian
            cls._TYPE_SUPPORT = module.type_support_msg__msg__target_cartesian
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__target_cartesian

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TRANSLATION_SPEED__DEFAULT': 10.0,
            'ROTATION_SPEED__DEFAULT': 0.523599,
        }

    @property
    def TRANSLATION_SPEED__DEFAULT(cls):
        """Return default value for message field 'translation_speed'."""
        return 10.0

    @property
    def ROTATION_SPEED__DEFAULT(cls):
        """Return default value for message field 'rotation_speed'."""
        return 0.523599


class TargetCartesian(metaclass=Metaclass_TargetCartesian):
    """Message class 'TargetCartesian'."""

    __slots__ = [
        '_header',
        '_position',
        '_rotation',
        '_translation_speed',
        '_rotation_speed',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'position': 'float[3]',
        'rotation': 'float[3]',
        'translation_speed': 'float',
        'rotation_speed': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        if 'position' not in kwargs:
            self.position = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.position = numpy.array(kwargs.get('position'), dtype=numpy.float32)
            assert self.position.shape == (3, )
        if 'rotation' not in kwargs:
            self.rotation = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.rotation = numpy.array(kwargs.get('rotation'), dtype=numpy.float32)
            assert self.rotation.shape == (3, )
        self.translation_speed = kwargs.get(
            'translation_speed', TargetCartesian.TRANSLATION_SPEED__DEFAULT)
        self.rotation_speed = kwargs.get(
            'rotation_speed', TargetCartesian.ROTATION_SPEED__DEFAULT)

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
        if all(self.position != other.position):
            return False
        if all(self.rotation != other.rotation):
            return False
        if self.translation_speed != other.translation_speed:
            return False
        if self.rotation_speed != other.rotation_speed:
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
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'position' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 3, \
                    "The 'position' numpy.ndarray() must have a size of 3"
                self._position = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'position' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._position = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def rotation(self):
        """Message field 'rotation'."""
        return self._rotation

    @rotation.setter
    def rotation(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'rotation' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 3, \
                    "The 'rotation' numpy.ndarray() must have a size of 3"
                self._rotation = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'rotation' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._rotation = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def translation_speed(self):
        """Message field 'translation_speed'."""
        return self._translation_speed

    @translation_speed.setter
    def translation_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'translation_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'translation_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._translation_speed = value

    @builtins.property
    def rotation_speed(self):
        """Message field 'rotation_speed'."""
        return self._rotation_speed

    @rotation_speed.setter
    def rotation_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'rotation_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rotation_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rotation_speed = value
