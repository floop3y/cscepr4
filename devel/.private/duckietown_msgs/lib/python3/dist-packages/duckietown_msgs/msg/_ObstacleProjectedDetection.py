# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from duckietown_msgs/ObstacleProjectedDetection.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import duckietown_msgs.msg
import geometry_msgs.msg

class ObstacleProjectedDetection(genpy.Message):
  _md5sum = "cb503445da742d4aa1f69f0b72163c00"
  _type = "duckietown_msgs/ObstacleProjectedDetection"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Point location
duckietown_msgs/ObstacleType type
float32 distance
================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: duckietown_msgs/ObstacleType
uint8 DUCKIE=0
uint8 CONE=1
uint8 type"""
  __slots__ = ['location','type','distance']
  _slot_types = ['geometry_msgs/Point','duckietown_msgs/ObstacleType','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       location,type,distance

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ObstacleProjectedDetection, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.location is None:
        self.location = geometry_msgs.msg.Point()
      if self.type is None:
        self.type = duckietown_msgs.msg.ObstacleType()
      if self.distance is None:
        self.distance = 0.
    else:
      self.location = geometry_msgs.msg.Point()
      self.type = duckietown_msgs.msg.ObstacleType()
      self.distance = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3dBf().pack(_x.location.x, _x.location.y, _x.location.z, _x.type.type, _x.distance))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.location is None:
        self.location = geometry_msgs.msg.Point()
      if self.type is None:
        self.type = duckietown_msgs.msg.ObstacleType()
      end = 0
      _x = self
      start = end
      end += 29
      (_x.location.x, _x.location.y, _x.location.z, _x.type.type, _x.distance,) = _get_struct_3dBf().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3dBf().pack(_x.location.x, _x.location.y, _x.location.z, _x.type.type, _x.distance))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.location is None:
        self.location = geometry_msgs.msg.Point()
      if self.type is None:
        self.type = duckietown_msgs.msg.ObstacleType()
      end = 0
      _x = self
      start = end
      end += 29
      (_x.location.x, _x.location.y, _x.location.z, _x.type.type, _x.distance,) = _get_struct_3dBf().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3dBf = None
def _get_struct_3dBf():
    global _struct_3dBf
    if _struct_3dBf is None:
        _struct_3dBf = struct.Struct("<3dBf")
    return _struct_3dBf
