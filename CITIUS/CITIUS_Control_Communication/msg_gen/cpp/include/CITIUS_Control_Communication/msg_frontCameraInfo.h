/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_Communication/msg/msg_frontCameraInfo.msg */
#ifndef CITIUS_CONTROL_COMMUNICATION_MESSAGE_MSG_FRONTCAMERAINFO_H
#define CITIUS_CONTROL_COMMUNICATION_MESSAGE_MSG_FRONTCAMERAINFO_H
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


namespace CITIUS_Control_Communication
{
template <class ContainerAllocator>
struct msg_frontCameraInfo_ {
  typedef msg_frontCameraInfo_<ContainerAllocator> Type;

  msg_frontCameraInfo_()
  : zoom(0.0)
  , pan(0.0)
  , tilt(0.0)
  {
  }

  msg_frontCameraInfo_(const ContainerAllocator& _alloc)
  : zoom(0.0)
  , pan(0.0)
  , tilt(0.0)
  {
  }

  typedef float _zoom_type;
  float zoom;

  typedef float _pan_type;
  float pan;

  typedef float _tilt_type;
  float tilt;


  typedef boost::shared_ptr< ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct msg_frontCameraInfo
typedef  ::CITIUS_Control_Communication::msg_frontCameraInfo_<std::allocator<void> > msg_frontCameraInfo;

typedef boost::shared_ptr< ::CITIUS_Control_Communication::msg_frontCameraInfo> msg_frontCameraInfoPtr;
typedef boost::shared_ptr< ::CITIUS_Control_Communication::msg_frontCameraInfo const> msg_frontCameraInfoConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace CITIUS_Control_Communication

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e2a7f63b6b1b1f31c8378177bc0e68a9";
  }

  static const char* value(const  ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe2a7f63b6b1b1f31ULL;
  static const uint64_t static_value2 = 0xc8378177bc0e68a9ULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Communication/msg_frontCameraInfo";
  }

  static const char* value(const  ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 zoom\n\
float32 pan\n\
float32 tilt\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.zoom);
    stream.next(m.pan);
    stream.next(m.tilt);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct msg_frontCameraInfo_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::CITIUS_Control_Communication::msg_frontCameraInfo_<ContainerAllocator> & v) 
  {
    s << indent << "zoom: ";
    Printer<float>::stream(s, indent + "  ", v.zoom);
    s << indent << "pan: ";
    Printer<float>::stream(s, indent + "  ", v.pan);
    s << indent << "tilt: ";
    Printer<float>::stream(s, indent + "  ", v.tilt);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CITIUS_CONTROL_COMMUNICATION_MESSAGE_MSG_FRONTCAMERAINFO_H

