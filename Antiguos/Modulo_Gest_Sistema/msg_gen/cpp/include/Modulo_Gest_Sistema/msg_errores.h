/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/Modulo_Gest_Sistema/msg/msg_errores.msg */
#ifndef MODULO_GEST_SISTEMA_MESSAGE_MSG_ERRORES_H
#define MODULO_GEST_SISTEMA_MESSAGE_MSG_ERRORES_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace Modulo_Gest_Sistema
{
template <class ContainerAllocator>
struct msg_errores_ {
  typedef msg_errores_<ContainerAllocator> Type;

  msg_errores_()
  : id_subsistema(0)
  , id_error(0)
  , tipo_error(0)
  {
  }

  msg_errores_(const ContainerAllocator& _alloc)
  : id_subsistema(0)
  , id_error(0)
  , tipo_error(0)
  {
  }

  typedef uint8_t _id_subsistema_type;
  uint8_t id_subsistema;

  typedef uint16_t _id_error_type;
  uint16_t id_error;

  typedef uint16_t _tipo_error_type;
  uint16_t tipo_error;


  typedef boost::shared_ptr< ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct msg_errores
typedef  ::Modulo_Gest_Sistema::msg_errores_<std::allocator<void> > msg_errores;

typedef boost::shared_ptr< ::Modulo_Gest_Sistema::msg_errores> msg_erroresPtr;
typedef boost::shared_ptr< ::Modulo_Gest_Sistema::msg_errores const> msg_erroresConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace Modulo_Gest_Sistema

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> > {
  static const char* value() 
  {
    return "452f360bd2b2519d5c8cd86e73b758d0";
  }

  static const char* value(const  ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x452f360bd2b2519dULL;
  static const uint64_t static_value2 = 0x5c8cd86e73b758d0ULL;
};

template<class ContainerAllocator>
struct DataType< ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Modulo_Gest_Sistema/msg_errores";
  }

  static const char* value(const  ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 id_subsistema\n\
uint16 id_error\n\
uint16 tipo_error\n\
";
  }

  static const char* value(const  ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id_subsistema);
    stream.next(m.id_error);
    stream.next(m.tipo_error);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct msg_errores_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::Modulo_Gest_Sistema::msg_errores_<ContainerAllocator> & v) 
  {
    s << indent << "id_subsistema: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id_subsistema);
    s << indent << "id_error: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.id_error);
    s << indent << "tipo_error: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.tipo_error);
  }
};


} // namespace message_operations
} // namespace ros

#endif // MODULO_GEST_SISTEMA_MESSAGE_MSG_ERRORES_H

