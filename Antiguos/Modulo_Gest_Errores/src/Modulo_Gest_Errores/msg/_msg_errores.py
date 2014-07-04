"""autogenerated by genpy from Modulo_Gest_Errores/msg_errores.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class msg_errores(genpy.Message):
  _md5sum = "452f360bd2b2519d5c8cd86e73b758d0"
  _type = "Modulo_Gest_Errores/msg_errores"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 id_subsistema
uint16 id_error
uint16 tipo_error
"""
  __slots__ = ['id_subsistema','id_error','tipo_error']
  _slot_types = ['uint8','uint16','uint16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id_subsistema,id_error,tipo_error

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(msg_errores, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.id_subsistema is None:
        self.id_subsistema = 0
      if self.id_error is None:
        self.id_error = 0
      if self.tipo_error is None:
        self.tipo_error = 0
    else:
      self.id_subsistema = 0
      self.id_error = 0
      self.tipo_error = 0

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
      buff.write(_struct_B2H.pack(_x.id_subsistema, _x.id_error, _x.tipo_error))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 5
      (_x.id_subsistema, _x.id_error, _x.tipo_error,) = _struct_B2H.unpack(str[start:end])
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
      buff.write(_struct_B2H.pack(_x.id_subsistema, _x.id_error, _x.tipo_error))
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
      _x = self
      start = end
      end += 5
      (_x.id_subsistema, _x.id_error, _x.tipo_error,) = _struct_B2H.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B2H = struct.Struct("<B2H")
