// Generated by gencpp from file duckietown_msgs/Pose2DStamped.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_POSE2DSTAMPED_H
#define DUCKIETOWN_MSGS_MESSAGE_POSE2DSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct Pose2DStamped_
{
  typedef Pose2DStamped_<ContainerAllocator> Type;

  Pose2DStamped_()
    : header()
    , x(0.0)
    , y(0.0)
    , theta(0.0)  {
    }
  Pose2DStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , x(0.0)
    , y(0.0)
    , theta(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _theta_type;
  _theta_type theta;





  typedef boost::shared_ptr< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> const> ConstPtr;

}; // struct Pose2DStamped_

typedef ::duckietown_msgs::Pose2DStamped_<std::allocator<void> > Pose2DStamped;

typedef boost::shared_ptr< ::duckietown_msgs::Pose2DStamped > Pose2DStampedPtr;
typedef boost::shared_ptr< ::duckietown_msgs::Pose2DStamped const> Pose2DStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::Pose2DStamped_<ContainerAllocator1> & lhs, const ::duckietown_msgs::Pose2DStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.theta == rhs.theta;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::Pose2DStamped_<ContainerAllocator1> & lhs, const ::duckietown_msgs::Pose2DStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "013fad68aad141d90a055e21fb791e63";
  }

  static const char* value(const ::duckietown_msgs::Pose2DStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x013fad68aad141d9ULL;
  static const uint64_t static_value2 = 0x0a055e21fb791e63ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/Pose2DStamped";
  }

  static const char* value(const ::duckietown_msgs::Pose2DStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::duckietown_msgs::Pose2DStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Pose2DStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::Pose2DStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::Pose2DStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "theta: ";
    Printer<double>::stream(s, indent + "  ", v.theta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_POSE2DSTAMPED_H
