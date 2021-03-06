"""autogenerated by genpy from CITIUS_Control_Communication/msg_tvinfo.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class msg_tvinfo(genpy.Message):
  _md5sum = "b1a2ff8becb96594ca8e3d19a22225e7"
  _type = "CITIUS_Control_Communication/msg_tvinfo"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 currentZoom
uint8 currentFocus
bool autofocusMode

"""
  __slots__ = ['currentZoom','currentFocus','autofocusMode']
  _slot_types = ['uint8','uint8','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       currentZoom,currentFocus,autofocusMode

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(msg_tvinfo, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.currentZoom is None:
        self.currentZoom = 0
      if self.currentFocus is None:
        self.currentFocus = 0
      if self.autofocusMode is None:
        self.autofocusMode = False
    else:
      self.currentZoom = 0
      self.currentFocus = 0
      self.autofocusMode = False

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
      buff.write(_struct_3B.pack(_x.currentZoom, _x.currentFocus, _x.autofocusMode))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.currentZoom, _x.currentFocus, _x.autofocusMode,) = _struct_3B.unpack(str[start:end])
      self.autofocusMode = bool(self.autofocusMode)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3B.pack(_x.currentZoom, _x.currentFocus, _x.autofocusMode))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.currentZoom, _x.currentFocus, _x.autofocusMode,) = _struct_3B.unpack(str[start:end])
      self.autofocusMode = bool(self.autofocusMode)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3B = struct.Struct("<3B")
