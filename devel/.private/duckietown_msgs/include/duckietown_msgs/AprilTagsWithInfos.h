// Generated by gencpp from file duckietown_msgs/AprilTagsWithInfos.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_APRILTAGSWITHINFOS_H
#define DUCKIETOWN_MSGS_MESSAGE_APRILTAGSWITHINFOS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <duckietown_msgs/AprilTagDetection.h>
#include <duckietown_msgs/TagInfo.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct AprilTagsWithInfos_
{
  typedef AprilTagsWithInfos_<ContainerAllocator> Type;

  AprilTagsWithInfos_()
    : header()
    , detections()
    , infos()  {
    }
  AprilTagsWithInfos_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , detections(_alloc)
    , infos(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> >::other >  _detections_type;
  _detections_type detections;

   typedef std::vector< ::duckietown_msgs::TagInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::duckietown_msgs::TagInfo_<ContainerAllocator> >::other >  _infos_type;
  _infos_type infos;





  typedef boost::shared_ptr< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> const> ConstPtr;

}; // struct AprilTagsWithInfos_

typedef ::duckietown_msgs::AprilTagsWithInfos_<std::allocator<void> > AprilTagsWithInfos;

typedef boost::shared_ptr< ::duckietown_msgs::AprilTagsWithInfos > AprilTagsWithInfosPtr;
typedef boost::shared_ptr< ::duckietown_msgs::AprilTagsWithInfos const> AprilTagsWithInfosConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator1> & lhs, const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.detections == rhs.detections &&
    lhs.infos == rhs.infos;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator1> & lhs, const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "77712a218c71ce85b76155ff87db1adb";
  }

  static const char* value(const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x77712a218c71ce85ULL;
  static const uint64_t static_value2 = 0xb76155ff87db1adbULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/AprilTagsWithInfos";
  }

  static const char* value(const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"duckietown_msgs/AprilTagDetection[] detections\n"
"duckietown_msgs/TagInfo[] infos\n"
"\n"
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
"\n"
"================================================================================\n"
"MSG: duckietown_msgs/AprilTagDetection\n"
"geometry_msgs/Transform transform\n"
"int32 tag_id\n"
"string tag_family\n"
"int32 hamming\n"
"float32 decision_margin\n"
"float32[9] homography\n"
"float32[2] center\n"
"float32[8] corners\n"
"float32 pose_error\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: duckietown_msgs/TagInfo\n"
"Header header\n"
"int32 id\n"
"\n"
"#(StreetName, TrafficSign, Localization, Vehicle)\n"
"uint8 tag_type\n"
"\n"
"uint8 S_NAME=0\n"
"uint8 SIGN=1	\n"
"uint8 LIGHT=2\n"
"uint8 LOCALIZE=3\n"
"uint8 VEHICLE=4\n"
"\n"
"string street_name\n"
"\n"
"uint8 traffic_sign_type\n"
"# (12 possible traffic sign types)\n"
"\n"
"uint8 STOP=5\n"
"uint8 YIELD=6\n"
"uint8 NO_RIGHT_TURN=7\n"
"uint8 NO_LEFT_TURN=8\n"
"uint8 ONEWAY_RIGHT=9\n"
"uint8 ONEWAY_LEFT=10\n"
"uint8 FOUR_WAY=11\n"
"uint8 RIGHT_T_INTERSECT=12\n"
"uint8 LEFT_T_INTERSECT=13\n"
"uint8 T_INTERSECTION=14\n"
"uint8 DO_NOT_ENTER=15\n"
"uint8 PEDESTRIAN=16\n"
"uint8 T_LIGHT_AHEAD=17\n"
"uint8 DUCK_CROSSING=18\n"
"uint8 PARKING=19\n"
"\n"
"string vehicle_name\n"
"\n"
"# Just added a single number for location. Probably want to use Vector2D.msg, but I get errors when I try to add it.\n"
"float32 location\n"
;
  }

  static const char* value(const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.detections);
      stream.next(m.infos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AprilTagsWithInfos_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::AprilTagsWithInfos_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
    s << indent << "infos[]" << std::endl;
    for (size_t i = 0; i < v.infos.size(); ++i)
    {
      s << indent << "  infos[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::duckietown_msgs::TagInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.infos[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_APRILTAGSWITHINFOS_H
