"""autogenerated by genpy from Common_files/msg_available.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class msg_available(genpy.Message):
  _md5sum = "c7a5549b98bc1534d37670462e49eac6"
  _type = "Common_files/msg_available"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool[13] available
"""
  __slots__ = ['available']
  _slot_types = ['bool[13]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       available

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(msg_available, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.available is None:
        self.available = [False,False,False,False,False,False,False,False,False,False,False,False,False]
    else:
      self.available = [False,False,False,False,False,False,False,False,False,False,False,False,False]

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
      buff.write(_struct_13B.pack(*self.available))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 13
      self.available = _struct_13B.unpack(str[start:end])
      self.available = map(bool, self.available)
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
      buff.write(self.available.tostring())
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 13
      self.available = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=13)
      self.available = map(bool, self.available)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_13B = struct.Struct("<13B")
