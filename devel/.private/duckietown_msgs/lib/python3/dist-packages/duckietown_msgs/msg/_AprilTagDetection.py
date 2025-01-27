# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from duckietown_msgs/AprilTagDetection.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class AprilTagDetection(genpy.Message):
  _md5sum = "a831190390fbef881c141df7b86598db"
  _type = "duckietown_msgs/AprilTagDetection"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Transform transform
int32 tag_id
string tag_family
int32 hamming
float32 decision_margin
float32[9] homography
float32[2] center
float32[8] corners
float32 pose_error

================================================================================
MSG: geometry_msgs/Transform
# This represents the transform between two coordinate frames in free space.

Vector3 translation
Quaternion rotation

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['transform','tag_id','tag_family','hamming','decision_margin','homography','center','corners','pose_error']
  _slot_types = ['geometry_msgs/Transform','int32','string','int32','float32','float32[9]','float32[2]','float32[8]','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       transform,tag_id,tag_family,hamming,decision_margin,homography,center,corners,pose_error

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AprilTagDetection, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.transform is None:
        self.transform = geometry_msgs.msg.Transform()
      if self.tag_id is None:
        self.tag_id = 0
      if self.tag_family is None:
        self.tag_family = ''
      if self.hamming is None:
        self.hamming = 0
      if self.decision_margin is None:
        self.decision_margin = 0.
      if self.homography is None:
        self.homography = [0.] * 9
      if self.center is None:
        self.center = [0.] * 2
      if self.corners is None:
        self.corners = [0.] * 8
      if self.pose_error is None:
        self.pose_error = 0.
    else:
      self.transform = geometry_msgs.msg.Transform()
      self.tag_id = 0
      self.tag_family = ''
      self.hamming = 0
      self.decision_margin = 0.
      self.homography = [0.] * 9
      self.center = [0.] * 2
      self.corners = [0.] * 8
      self.pose_error = 0.

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
      buff.write(_get_struct_7di().pack(_x.transform.translation.x, _x.transform.translation.y, _x.transform.translation.z, _x.transform.rotation.x, _x.transform.rotation.y, _x.transform.rotation.z, _x.transform.rotation.w, _x.tag_id))
      _x = self.tag_family
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_if().pack(_x.hamming, _x.decision_margin))
      buff.write(_get_struct_9f().pack(*self.homography))
      buff.write(_get_struct_2f().pack(*self.center))
      buff.write(_get_struct_8f().pack(*self.corners))
      _x = self.pose_error
      buff.write(_get_struct_f().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.transform is None:
        self.transform = geometry_msgs.msg.Transform()
      end = 0
      _x = self
      start = end
      end += 60
      (_x.transform.translation.x, _x.transform.translation.y, _x.transform.translation.z, _x.transform.rotation.x, _x.transform.rotation.y, _x.transform.rotation.z, _x.transform.rotation.w, _x.tag_id,) = _get_struct_7di().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.tag_family = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.tag_family = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.hamming, _x.decision_margin,) = _get_struct_if().unpack(str[start:end])
      start = end
      end += 36
      self.homography = _get_struct_9f().unpack(str[start:end])
      start = end
      end += 8
      self.center = _get_struct_2f().unpack(str[start:end])
      start = end
      end += 32
      self.corners = _get_struct_8f().unpack(str[start:end])
      start = end
      end += 4
      (self.pose_error,) = _get_struct_f().unpack(str[start:end])
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
      buff.write(_get_struct_7di().pack(_x.transform.translation.x, _x.transform.translation.y, _x.transform.translation.z, _x.transform.rotation.x, _x.transform.rotation.y, _x.transform.rotation.z, _x.transform.rotation.w, _x.tag_id))
      _x = self.tag_family
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_if().pack(_x.hamming, _x.decision_margin))
      buff.write(self.homography.tostring())
      buff.write(self.center.tostring())
      buff.write(self.corners.tostring())
      _x = self.pose_error
      buff.write(_get_struct_f().pack(_x))
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
      if self.transform is None:
        self.transform = geometry_msgs.msg.Transform()
      end = 0
      _x = self
      start = end
      end += 60
      (_x.transform.translation.x, _x.transform.translation.y, _x.transform.translation.z, _x.transform.rotation.x, _x.transform.rotation.y, _x.transform.rotation.z, _x.transform.rotation.w, _x.tag_id,) = _get_struct_7di().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.tag_family = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.tag_family = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.hamming, _x.decision_margin,) = _get_struct_if().unpack(str[start:end])
      start = end
      end += 36
      self.homography = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=9)
      start = end
      end += 8
      self.center = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=2)
      start = end
      end += 32
      self.corners = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=8)
      start = end
      end += 4
      (self.pose_error,) = _get_struct_f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2f = None
def _get_struct_2f():
    global _struct_2f
    if _struct_2f is None:
        _struct_2f = struct.Struct("<2f")
    return _struct_2f
_struct_7di = None
def _get_struct_7di():
    global _struct_7di
    if _struct_7di is None:
        _struct_7di = struct.Struct("<7di")
    return _struct_7di
_struct_8f = None
def _get_struct_8f():
    global _struct_8f
    if _struct_8f is None:
        _struct_8f = struct.Struct("<8f")
    return _struct_8f
_struct_9f = None
def _get_struct_9f():
    global _struct_9f
    if _struct_9f is None:
        _struct_9f = struct.Struct("<9f")
    return _struct_9f
_struct_f = None
def _get_struct_f():
    global _struct_f
    if _struct_f is None:
        _struct_f = struct.Struct("<f")
    return _struct_f
_struct_if = None
def _get_struct_if():
    global _struct_if
    if _struct_if is None:
        _struct_if = struct.Struct("<if")
    return _struct_if
