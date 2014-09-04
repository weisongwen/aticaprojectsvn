/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_Communication/srv/srv_dzoom.srv */
#ifndef CITIUS_CONTROL_COMMUNICATION_SERVICE_SRV_DZOOM_H
#define CITIUS_CONTROL_COMMUNICATION_SERVICE_SRV_DZOOM_H
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

#include "ros/service_traits.h"




namespace CITIUS_Control_Communication
{
template <class ContainerAllocator>
struct srv_dzoomRequest_ {
  typedef srv_dzoomRequest_<ContainerAllocator> Type;

  srv_dzoomRequest_()
  : newZoom(0)
  {
  }

  srv_dzoomRequest_(const ContainerAllocator& _alloc)
  : newZoom(0)
  {
  }

  typedef int8_t _newZoom_type;
  int8_t newZoom;


  typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct srv_dzoomRequest
typedef  ::CITIUS_Control_Communication::srv_dzoomRequest_<std::allocator<void> > srv_dzoomRequest;

typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_dzoomRequest> srv_dzoomRequestPtr;
typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_dzoomRequest const> srv_dzoomRequestConstPtr;



template <class ContainerAllocator>
struct srv_dzoomResponse_ {
  typedef srv_dzoomResponse_<ContainerAllocator> Type;

  srv_dzoomResponse_()
  : ret(false)
  {
  }

  srv_dzoomResponse_(const ContainerAllocator& _alloc)
  : ret(false)
  {
  }

  typedef uint8_t _ret_type;
  uint8_t ret;


  typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct srv_dzoomResponse
typedef  ::CITIUS_Control_Communication::srv_dzoomResponse_<std::allocator<void> > srv_dzoomResponse;

typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_dzoomResponse> srv_dzoomResponsePtr;
typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_dzoomResponse const> srv_dzoomResponseConstPtr;


struct srv_dzoom
{

typedef srv_dzoomRequest Request;
typedef srv_dzoomResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct srv_dzoom
} // namespace CITIUS_Control_Communication

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "facaeb24fa441a4189371d81da3e2321";
  }

  static const char* value(const  ::CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xfacaeb24fa441a41ULL;
  static const uint64_t static_value2 = 0x89371d81da3e2321ULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Communication/srv_dzoomRequest";
  }

  static const char* value(const  ::CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int8 newZoom\n\
\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e2cc9e9d8c464550830df49c160979ad";
  }

  static const char* value(const  ::CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe2cc9e9d8c464550ULL;
  static const uint64_t static_value2 = 0x830df49c160979adULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Communication/srv_dzoomResponse";
  }

  static const char* value(const  ::CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool ret\n\
\n\
\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.newZoom);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct srv_dzoomRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.ret);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct srv_dzoomResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<CITIUS_Control_Communication::srv_dzoom> {
  static const char* value() 
  {
    return "61ad2f4b1da8b259e5c027b0d68e3b71";
  }

  static const char* value(const CITIUS_Control_Communication::srv_dzoom&) { return value(); } 
};

template<>
struct DataType<CITIUS_Control_Communication::srv_dzoom> {
  static const char* value() 
  {
    return "CITIUS_Control_Communication/srv_dzoom";
  }

  static const char* value(const CITIUS_Control_Communication::srv_dzoom&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "61ad2f4b1da8b259e5c027b0d68e3b71";
  }

  static const char* value(const CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Communication/srv_dzoom";
  }

  static const char* value(const CITIUS_Control_Communication::srv_dzoomRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "61ad2f4b1da8b259e5c027b0d68e3b71";
  }

  static const char* value(const CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Communication/srv_dzoom";
  }

  static const char* value(const CITIUS_Control_Communication::srv_dzoomResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // CITIUS_CONTROL_COMMUNICATION_SERVICE_SRV_DZOOM_H

