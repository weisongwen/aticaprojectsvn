/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_Electric/msg/msg_electricInfo.msg */
#ifndef CITIUS_CONTROL_ELECTRIC_MESSAGE_MSG_ELECTRICINFO_H
#define CITIUS_CONTROL_ELECTRIC_MESSAGE_MSG_ELECTRICINFO_H
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


namespace CITIUS_Control_Electric
{
template <class ContainerAllocator>
struct msg_electricInfo_ {
  typedef msg_electricInfo_<ContainerAllocator> Type;

  msg_electricInfo_()
  : id_device(0)
  , value(0)
  {
  }

  msg_electricInfo_(const ContainerAllocator& _alloc)
  : id_device(0)
  , value(0)
  {
  }

  typedef uint16_t _id_device_type;
  uint16_t id_device;

  typedef int16_t _value_type;
  int16_t value;


  typedef boost::shared_ptr< ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct msg_electricInfo
typedef  ::CITIUS_Control_Electric::msg_electricInfo_<std::allocator<void> > msg_electricInfo;

typedef boost::shared_ptr< ::CITIUS_Control_Electric::msg_electricInfo> msg_electricInfoPtr;
typedef boost::shared_ptr< ::CITIUS_Control_Electric::msg_electricInfo const> msg_electricInfoConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace CITIUS_Control_Electric

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> > {
  static const char* value() 
  {
    return "99cf754747b52aeb199e99a3aa80459e";
  }

  static const char* value(const  ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x99cf754747b52aebULL;
  static const uint64_t static_value2 = 0x199e99a3aa80459eULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Electric/msg_electricInfo";
  }

  static const char* value(const  ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint16 id_device\n\
int16 value\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id_device);
    stream.next(m.value);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct msg_electricInfo_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::CITIUS_Control_Electric::msg_electricInfo_<ContainerAllocator> & v) 
  {
    s << indent << "id_device: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.id_device);
    s << indent << "value: ";
    Printer<int16_t>::stream(s, indent + "  ", v.value);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CITIUS_CONTROL_ELECTRIC_MESSAGE_MSG_ELECTRICINFO_H

