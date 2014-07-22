/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_Communication/msg/msg_posOriInfo.msg */
#ifndef CITIUS_CONTROL_COMMUNICATION_MESSAGE_MSG_POSORIINFO_H
#define CITIUS_CONTROL_COMMUNICATION_MESSAGE_MSG_POSORIINFO_H
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
struct msg_posOriInfo_ {
  typedef msg_posOriInfo_<ContainerAllocator> Type;

  msg_posOriInfo_()
  : positionStatus(0)
  , orientationStatus(0)
  , latitude(0.0)
  , longitude(0.0)
  , altitude(0.0)
  , roll(0.0)
  , pitch(0.0)
  , yaw(0.0)
  , velX(0.0)
  , velY(0.0)
  , velZ(0.0)
  , accX(0.0)
  , accY(0.0)
  , accZ(0.0)
  , rateX(0.0)
  , rateY(0.0)
  , rateZ(0.0)
  {
  }

  msg_posOriInfo_(const ContainerAllocator& _alloc)
  : positionStatus(0)
  , orientationStatus(0)
  , latitude(0.0)
  , longitude(0.0)
  , altitude(0.0)
  , roll(0.0)
  , pitch(0.0)
  , yaw(0.0)
  , velX(0.0)
  , velY(0.0)
  , velZ(0.0)
  , accX(0.0)
  , accY(0.0)
  , accZ(0.0)
  , rateX(0.0)
  , rateY(0.0)
  , rateZ(0.0)
  {
  }

  typedef uint16_t _positionStatus_type;
  uint16_t positionStatus;

  typedef uint16_t _orientationStatus_type;
  uint16_t orientationStatus;

  typedef double _latitude_type;
  double latitude;

  typedef double _longitude_type;
  double longitude;

  typedef float _altitude_type;
  float altitude;

  typedef float _roll_type;
  float roll;

  typedef float _pitch_type;
  float pitch;

  typedef float _yaw_type;
  float yaw;

  typedef float _velX_type;
  float velX;

  typedef float _velY_type;
  float velY;

  typedef float _velZ_type;
  float velZ;

  typedef float _accX_type;
  float accX;

  typedef float _accY_type;
  float accY;

  typedef float _accZ_type;
  float accZ;

  typedef float _rateX_type;
  float rateX;

  typedef float _rateY_type;
  float rateY;

  typedef float _rateZ_type;
  float rateZ;


  typedef boost::shared_ptr< ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct msg_posOriInfo
typedef  ::CITIUS_Control_Communication::msg_posOriInfo_<std::allocator<void> > msg_posOriInfo;

typedef boost::shared_ptr< ::CITIUS_Control_Communication::msg_posOriInfo> msg_posOriInfoPtr;
typedef boost::shared_ptr< ::CITIUS_Control_Communication::msg_posOriInfo const> msg_posOriInfoConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace CITIUS_Control_Communication

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> > {
  static const char* value() 
  {
    return "18dcfbcc11c0eee5c95670f31271590f";
  }

  static const char* value(const  ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x18dcfbcc11c0eee5ULL;
  static const uint64_t static_value2 = 0xc95670f31271590fULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Communication/msg_posOriInfo";
  }

  static const char* value(const  ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint16 positionStatus\n\
uint16 orientationStatus\n\
float64 latitude\n\
float64 longitude\n\
float32 altitude\n\
float32 roll\n\
float32 pitch\n\
float32 yaw\n\
float32 velX\n\
float32 velY\n\
float32 velZ\n\
float32 accX\n\
float32 accY\n\
float32 accZ\n\
float32 rateX\n\
float32 rateY\n\
float32 rateZ\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.positionStatus);
    stream.next(m.orientationStatus);
    stream.next(m.latitude);
    stream.next(m.longitude);
    stream.next(m.altitude);
    stream.next(m.roll);
    stream.next(m.pitch);
    stream.next(m.yaw);
    stream.next(m.velX);
    stream.next(m.velY);
    stream.next(m.velZ);
    stream.next(m.accX);
    stream.next(m.accY);
    stream.next(m.accZ);
    stream.next(m.rateX);
    stream.next(m.rateY);
    stream.next(m.rateZ);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct msg_posOriInfo_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::CITIUS_Control_Communication::msg_posOriInfo_<ContainerAllocator> & v) 
  {
    s << indent << "positionStatus: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.positionStatus);
    s << indent << "orientationStatus: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.orientationStatus);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "altitude: ";
    Printer<float>::stream(s, indent + "  ", v.altitude);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "velX: ";
    Printer<float>::stream(s, indent + "  ", v.velX);
    s << indent << "velY: ";
    Printer<float>::stream(s, indent + "  ", v.velY);
    s << indent << "velZ: ";
    Printer<float>::stream(s, indent + "  ", v.velZ);
    s << indent << "accX: ";
    Printer<float>::stream(s, indent + "  ", v.accX);
    s << indent << "accY: ";
    Printer<float>::stream(s, indent + "  ", v.accY);
    s << indent << "accZ: ";
    Printer<float>::stream(s, indent + "  ", v.accZ);
    s << indent << "rateX: ";
    Printer<float>::stream(s, indent + "  ", v.rateX);
    s << indent << "rateY: ";
    Printer<float>::stream(s, indent + "  ", v.rateY);
    s << indent << "rateZ: ";
    Printer<float>::stream(s, indent + "  ", v.rateZ);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CITIUS_CONTROL_COMMUNICATION_MESSAGE_MSG_POSORIINFO_H

