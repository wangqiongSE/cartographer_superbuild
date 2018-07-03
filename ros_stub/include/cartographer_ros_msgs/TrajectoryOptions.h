// Generated by gencpp from file cartographer_ros_msgs/TrajectoryOptions.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_TRAJECTORYOPTIONS_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_TRAJECTORYOPTIONS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct TrajectoryOptions_
{
  typedef TrajectoryOptions_<ContainerAllocator> Type;

  TrajectoryOptions_()
    : tracking_frame()
    , published_frame()
    , odom_frame()
    , provide_odom_frame(false)
    , use_odometry(false)
    , use_nav_sat(false)
    , use_landmarks(false)
    , publish_frame_projected_to_2d(false)
    , num_laser_scans(0)
    , num_multi_echo_laser_scans(0)
    , num_subdivisions_per_laser_scan(0)
    , num_point_clouds(0)
    , rangefinder_sampling_ratio(0.0)
    , odometry_sampling_ratio(0.0)
    , fixed_frame_pose_sampling_ratio(0.0)
    , imu_sampling_ratio(0.0)
    , landmarks_sampling_ratio(0.0)
    , trajectory_builder_options_proto()  {
    }
  TrajectoryOptions_(const ContainerAllocator& _alloc)
    : tracking_frame(_alloc)
    , published_frame(_alloc)
    , odom_frame(_alloc)
    , provide_odom_frame(false)
    , use_odometry(false)
    , use_nav_sat(false)
    , use_landmarks(false)
    , publish_frame_projected_to_2d(false)
    , num_laser_scans(0)
    , num_multi_echo_laser_scans(0)
    , num_subdivisions_per_laser_scan(0)
    , num_point_clouds(0)
    , rangefinder_sampling_ratio(0.0)
    , odometry_sampling_ratio(0.0)
    , fixed_frame_pose_sampling_ratio(0.0)
    , imu_sampling_ratio(0.0)
    , landmarks_sampling_ratio(0.0)
    , trajectory_builder_options_proto(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _tracking_frame_type;
  _tracking_frame_type tracking_frame;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _published_frame_type;
  _published_frame_type published_frame;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _odom_frame_type;
  _odom_frame_type odom_frame;

   typedef uint8_t _provide_odom_frame_type;
  _provide_odom_frame_type provide_odom_frame;

   typedef uint8_t _use_odometry_type;
  _use_odometry_type use_odometry;

   typedef uint8_t _use_nav_sat_type;
  _use_nav_sat_type use_nav_sat;

   typedef uint8_t _use_landmarks_type;
  _use_landmarks_type use_landmarks;

   typedef uint8_t _publish_frame_projected_to_2d_type;
  _publish_frame_projected_to_2d_type publish_frame_projected_to_2d;

   typedef int32_t _num_laser_scans_type;
  _num_laser_scans_type num_laser_scans;

   typedef int32_t _num_multi_echo_laser_scans_type;
  _num_multi_echo_laser_scans_type num_multi_echo_laser_scans;

   typedef int32_t _num_subdivisions_per_laser_scan_type;
  _num_subdivisions_per_laser_scan_type num_subdivisions_per_laser_scan;

   typedef int32_t _num_point_clouds_type;
  _num_point_clouds_type num_point_clouds;

   typedef double _rangefinder_sampling_ratio_type;
  _rangefinder_sampling_ratio_type rangefinder_sampling_ratio;

   typedef double _odometry_sampling_ratio_type;
  _odometry_sampling_ratio_type odometry_sampling_ratio;

   typedef double _fixed_frame_pose_sampling_ratio_type;
  _fixed_frame_pose_sampling_ratio_type fixed_frame_pose_sampling_ratio;

   typedef double _imu_sampling_ratio_type;
  _imu_sampling_ratio_type imu_sampling_ratio;

   typedef double _landmarks_sampling_ratio_type;
  _landmarks_sampling_ratio_type landmarks_sampling_ratio;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _trajectory_builder_options_proto_type;
  _trajectory_builder_options_proto_type trajectory_builder_options_proto;





  typedef boost::shared_ptr< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> const> ConstPtr;

}; // struct TrajectoryOptions_

typedef ::cartographer_ros_msgs::TrajectoryOptions_<std::allocator<void> > TrajectoryOptions;

typedef boost::shared_ptr< ::cartographer_ros_msgs::TrajectoryOptions > TrajectoryOptionsPtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::TrajectoryOptions const> TrajectoryOptionsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cartographer_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'cartographer_ros_msgs': ['/home/juraj/cartographer_superbuild/cartographer_ros/cartographer_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7eda9b62c16c18fa1563587e73501e47";
  }

  static const char* value(const ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7eda9b62c16c18faULL;
  static const uint64_t static_value2 = 0x1563587e73501e47ULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/TrajectoryOptions";
  }

  static const char* value(const ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright 2016 The Cartographer Authors\n\
#\n\
# Licensed under the Apache License, Version 2.0 (the \"License\");\n\
# you may not use this file except in compliance with the License.\n\
# You may obtain a copy of the License at\n\
#\n\
#      http://www.apache.org/licenses/LICENSE-2.0\n\
#\n\
# Unless required by applicable law or agreed to in writing, software\n\
# distributed under the License is distributed on an \"AS IS\" BASIS,\n\
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n\
# See the License for the specific language governing permissions and\n\
# limitations under the License.\n\
\n\
string tracking_frame\n\
string published_frame\n\
string odom_frame\n\
bool provide_odom_frame\n\
bool use_odometry\n\
bool use_nav_sat\n\
bool use_landmarks\n\
bool publish_frame_projected_to_2d\n\
int32 num_laser_scans\n\
int32 num_multi_echo_laser_scans\n\
int32 num_subdivisions_per_laser_scan\n\
int32 num_point_clouds\n\
float64 rangefinder_sampling_ratio\n\
float64 odometry_sampling_ratio\n\
float64 fixed_frame_pose_sampling_ratio\n\
float64 imu_sampling_ratio\n\
float64 landmarks_sampling_ratio\n\
\n\
# This is a binary-encoded\n\
# 'cartographer.mapping.proto.TrajectoryBuilderOptions' proto.\n\
string trajectory_builder_options_proto\n\
";
  }

  static const char* value(const ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tracking_frame);
      stream.next(m.published_frame);
      stream.next(m.odom_frame);
      stream.next(m.provide_odom_frame);
      stream.next(m.use_odometry);
      stream.next(m.use_nav_sat);
      stream.next(m.use_landmarks);
      stream.next(m.publish_frame_projected_to_2d);
      stream.next(m.num_laser_scans);
      stream.next(m.num_multi_echo_laser_scans);
      stream.next(m.num_subdivisions_per_laser_scan);
      stream.next(m.num_point_clouds);
      stream.next(m.rangefinder_sampling_ratio);
      stream.next(m.odometry_sampling_ratio);
      stream.next(m.fixed_frame_pose_sampling_ratio);
      stream.next(m.imu_sampling_ratio);
      stream.next(m.landmarks_sampling_ratio);
      stream.next(m.trajectory_builder_options_proto);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrajectoryOptions_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator>& v)
  {
    s << indent << "tracking_frame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tracking_frame);
    s << indent << "published_frame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.published_frame);
    s << indent << "odom_frame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.odom_frame);
    s << indent << "provide_odom_frame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.provide_odom_frame);
    s << indent << "use_odometry: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.use_odometry);
    s << indent << "use_nav_sat: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.use_nav_sat);
    s << indent << "use_landmarks: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.use_landmarks);
    s << indent << "publish_frame_projected_to_2d: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.publish_frame_projected_to_2d);
    s << indent << "num_laser_scans: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_laser_scans);
    s << indent << "num_multi_echo_laser_scans: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_multi_echo_laser_scans);
    s << indent << "num_subdivisions_per_laser_scan: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_subdivisions_per_laser_scan);
    s << indent << "num_point_clouds: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_point_clouds);
    s << indent << "rangefinder_sampling_ratio: ";
    Printer<double>::stream(s, indent + "  ", v.rangefinder_sampling_ratio);
    s << indent << "odometry_sampling_ratio: ";
    Printer<double>::stream(s, indent + "  ", v.odometry_sampling_ratio);
    s << indent << "fixed_frame_pose_sampling_ratio: ";
    Printer<double>::stream(s, indent + "  ", v.fixed_frame_pose_sampling_ratio);
    s << indent << "imu_sampling_ratio: ";
    Printer<double>::stream(s, indent + "  ", v.imu_sampling_ratio);
    s << indent << "landmarks_sampling_ratio: ";
    Printer<double>::stream(s, indent + "  ", v.landmarks_sampling_ratio);
    s << indent << "trajectory_builder_options_proto: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.trajectory_builder_options_proto);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_TRAJECTORYOPTIONS_H
