// Generated by gencpp from file ros_tcp_endpoint/RosUnitySysCommand.msg
// DO NOT EDIT!


#ifndef ROS_TCP_ENDPOINT_MESSAGE_ROSUNITYSYSCOMMAND_H
#define ROS_TCP_ENDPOINT_MESSAGE_ROSUNITYSYSCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_tcp_endpoint
{
template <class ContainerAllocator>
struct RosUnitySysCommand_
{
  typedef RosUnitySysCommand_<ContainerAllocator> Type;

  RosUnitySysCommand_()
    : command()
    , params_json()  {
    }
  RosUnitySysCommand_(const ContainerAllocator& _alloc)
    : command(_alloc)
    , params_json(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _params_json_type;
  _params_json_type params_json;





  typedef boost::shared_ptr< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> const> ConstPtr;

}; // struct RosUnitySysCommand_

typedef ::ros_tcp_endpoint::RosUnitySysCommand_<std::allocator<void> > RosUnitySysCommand;

typedef boost::shared_ptr< ::ros_tcp_endpoint::RosUnitySysCommand > RosUnitySysCommandPtr;
typedef boost::shared_ptr< ::ros_tcp_endpoint::RosUnitySysCommand const> RosUnitySysCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator1> & lhs, const ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator2> & rhs)
{
  return lhs.command == rhs.command &&
    lhs.params_json == rhs.params_json;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator1> & lhs, const ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_tcp_endpoint

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "136891578342d9ff1f4f30a7e0d8ddac";
  }

  static const char* value(const ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x136891578342d9ffULL;
  static const uint64_t static_value2 = 0x1f4f30a7e0d8ddacULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_tcp_endpoint/RosUnitySysCommand";
  }

  static const char* value(const ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string command\n"
"string params_json\n"
;
  }

  static const char* value(const ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
      stream.next(m.params_json);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RosUnitySysCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_tcp_endpoint::RosUnitySysCommand_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
    s << indent << "params_json: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.params_json);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_TCP_ENDPOINT_MESSAGE_ROSUNITYSYSCOMMAND_H