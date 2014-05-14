/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_Manager/srv/srv_vehicle.srv */
#ifndef CITIUS_CONTROL_MANAGER_SERVICE_SRV_VEHICLE_H
#define CITIUS_CONTROL_MANAGER_SERVICE_SRV_VEHICLE_H
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




namespace CITIUS_Control_Manager
{
template <class ContainerAllocator>
struct srv_vehicleRequest_ {
  typedef srv_vehicleRequest_<ContainerAllocator> Type;

  srv_vehicleRequest_()
  : request(false)
  {
  }

  srv_vehicleRequest_(const ContainerAllocator& _alloc)
  : request(false)
  {
  }

  typedef uint8_t _request_type;
  uint8_t request;


  typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct srv_vehicleRequest
typedef  ::CITIUS_Control_Manager::srv_vehicleRequest_<std::allocator<void> > srv_vehicleRequest;

typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_vehicleRequest> srv_vehicleRequestPtr;
typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_vehicleRequest const> srv_vehicleRequestConstPtr;



template <class ContainerAllocator>
struct srv_vehicleResponse_ {
  typedef srv_vehicleResponse_<ContainerAllocator> Type;

  srv_vehicleResponse_()
  : presentThottle(0)
  {
  }

  srv_vehicleResponse_(const ContainerAllocator& _alloc)
  : presentThottle(0)
  {
  }

  typedef uint8_t _presentThottle_type;
  uint8_t presentThottle;


  typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct srv_vehicleResponse
typedef  ::CITIUS_Control_Manager::srv_vehicleResponse_<std::allocator<void> > srv_vehicleResponse;

typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_vehicleResponse> srv_vehicleResponsePtr;
typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_vehicleResponse const> srv_vehicleResponseConstPtr;


struct srv_vehicle
{

typedef srv_vehicleRequest Request;
typedef srv_vehicleResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct srv_vehicle
} // namespace CITIUS_Control_Manager

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6f7e5ad6ab0ddf42c5727a195315a470";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6f7e5ad6ab0ddf42ULL;
  static const uint64_t static_value2 = 0xc5727a195315a470ULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_vehicleRequest";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool request\n\
\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a5e607c54ab4b960719818c97229159d";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa5e607c54ab4b960ULL;
  static const uint64_t static_value2 = 0x719818c97229159dULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_vehicleResponse";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 presentThottle\n\
\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.request);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct srv_vehicleRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.presentThottle);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct srv_vehicleResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<CITIUS_Control_Manager::srv_vehicle> {
  static const char* value() 
  {
    return "89265b91e72c65b55fffce25bc80e81f";
  }

  static const char* value(const CITIUS_Control_Manager::srv_vehicle&) { return value(); } 
};

template<>
struct DataType<CITIUS_Control_Manager::srv_vehicle> {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_vehicle";
  }

  static const char* value(const CITIUS_Control_Manager::srv_vehicle&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "89265b91e72c65b55fffce25bc80e81f";
  }

  static const char* value(const CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_vehicle";
  }

  static const char* value(const CITIUS_Control_Manager::srv_vehicleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "89265b91e72c65b55fffce25bc80e81f";
  }

  static const char* value(const CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_vehicle";
  }

  static const char* value(const CITIUS_Control_Manager::srv_vehicleResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // CITIUS_CONTROL_MANAGER_SERVICE_SRV_VEHICLE_H

