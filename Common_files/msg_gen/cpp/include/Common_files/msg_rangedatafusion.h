/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/Common_files/msg/msg_rangedatafusion.msg */
#ifndef COMMON_FILES_MESSAGE_MSG_RANGEDATAFUSION_H
#define COMMON_FILES_MESSAGE_MSG_RANGEDATAFUSION_H
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


namespace Common_files
{
template <class ContainerAllocator>
struct msg_rangedatafusion_ {
  typedef msg_rangedatafusion_<ContainerAllocator> Type;

  msg_rangedatafusion_()
  : angle()
  , distance()
  , latitude(0.0)
  , longitude(0.0)
  {
  }

  msg_rangedatafusion_(const ContainerAllocator& _alloc)
  : angle(_alloc)
  , distance(_alloc)
  , latitude(0.0)
  , longitude(0.0)
  {
  }

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _angle_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  angle;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _distance_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  distance;

  typedef double _latitude_type;
  double latitude;

  typedef double _longitude_type;
  double longitude;


  typedef boost::shared_ptr< ::Common_files::msg_rangedatafusion_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Common_files::msg_rangedatafusion_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct msg_rangedatafusion
typedef  ::Common_files::msg_rangedatafusion_<std::allocator<void> > msg_rangedatafusion;

typedef boost::shared_ptr< ::Common_files::msg_rangedatafusion> msg_rangedatafusionPtr;
typedef boost::shared_ptr< ::Common_files::msg_rangedatafusion const> msg_rangedatafusionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::Common_files::msg_rangedatafusion_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::Common_files::msg_rangedatafusion_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace Common_files

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Common_files::msg_rangedatafusion_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Common_files::msg_rangedatafusion_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Common_files::msg_rangedatafusion_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0c1d292aedb1c8986c72983cd90399b8";
  }

  static const char* value(const  ::Common_files::msg_rangedatafusion_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0c1d292aedb1c898ULL;
  static const uint64_t static_value2 = 0x6c72983cd90399b8ULL;
};

template<class ContainerAllocator>
struct DataType< ::Common_files::msg_rangedatafusion_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Common_files/msg_rangedatafusion";
  }

  static const char* value(const  ::Common_files::msg_rangedatafusion_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Common_files::msg_rangedatafusion_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32[] angle\n\
float32[] distance\n\
float64 latitude\n\
float64 longitude\n\
";
  }

  static const char* value(const  ::Common_files::msg_rangedatafusion_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Common_files::msg_rangedatafusion_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.angle);
    stream.next(m.distance);
    stream.next(m.latitude);
    stream.next(m.longitude);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct msg_rangedatafusion_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::Common_files::msg_rangedatafusion_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::Common_files::msg_rangedatafusion_<ContainerAllocator> & v) 
  {
    s << indent << "angle[]" << std::endl;
    for (size_t i = 0; i < v.angle.size(); ++i)
    {
      s << indent << "  angle[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.angle[i]);
    }
    s << indent << "distance[]" << std::endl;
    for (size_t i = 0; i < v.distance.size(); ++i)
    {
      s << indent << "  distance[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.distance[i]);
    }
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
  }
};


} // namespace message_operations
} // namespace ros

#endif // COMMON_FILES_MESSAGE_MSG_RANGEDATAFUSION_H

