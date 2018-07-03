// Generated by gencpp from file cartographer_ros_msgs/TrajectoryStates.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_TRAJECTORYSTATES_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_TRAJECTORYSTATES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct TrajectoryStates_
{
  typedef TrajectoryStates_<ContainerAllocator> Type;

  TrajectoryStates_()
    : header()
    , trajectory_id()
    , trajectory_state()  {
    }
  TrajectoryStates_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , trajectory_id(_alloc)
    , trajectory_state(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _trajectory_id_type;
  _trajectory_id_type trajectory_id;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _trajectory_state_type;
  _trajectory_state_type trajectory_state;



  enum {
    ACTIVE = 0u,
    FINISHED = 1u,
    FROZEN = 2u,
    DELETED = 3u,
  };


  typedef boost::shared_ptr< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> const> ConstPtr;

}; // struct TrajectoryStates_

typedef ::cartographer_ros_msgs::TrajectoryStates_<std::allocator<void> > TrajectoryStates;

typedef boost::shared_ptr< ::cartographer_ros_msgs::TrajectoryStates > TrajectoryStatesPtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::TrajectoryStates const> TrajectoryStatesConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cartographer_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'cartographer_ros_msgs': ['/home/juraj/cartographer_superbuild/cartographer_ros/cartographer_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "85efdd795e95b57a59cb785ecb152345";
  }

  static const char* value(const ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x85efdd795e95b57aULL;
  static const uint64_t static_value2 = 0x59cb785ecb152345ULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/TrajectoryStates";
  }

  static const char* value(const ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright 2018 The Cartographer Authors\n\
#\n\
# Licensed under the Apache License, Version 2.0 (the 'License');\n\
# you may not use this file except in compliance with the License.\n\
# You may obtain a copy of the License at\n\
#\n\
#      http://www.apache.org/licenses/LICENSE-2.0\n\
#\n\
# Unless required by applicable law or agreed to in writing, software\n\
# distributed under the License is distributed on an 'AS IS' BASIS,\n\
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n\
# See the License for the specific language governing permissions and\n\
# limitations under the License.\n\
\n\
uint8 ACTIVE = 0\n\
uint8 FINISHED = 1\n\
uint8 FROZEN = 2\n\
uint8 DELETED = 3\n\
\n\
std_msgs/Header header\n\
int32[] trajectory_id\n\
uint8[] trajectory_state\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.trajectory_id);
      stream.next(m.trajectory_state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrajectoryStates_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cartographer_ros_msgs::TrajectoryStates_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "trajectory_id[]" << std::endl;
    for (size_t i = 0; i < v.trajectory_id.size(); ++i)
    {
      s << indent << "  trajectory_id[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.trajectory_id[i]);
    }
    s << indent << "trajectory_state[]" << std::endl;
    for (size_t i = 0; i < v.trajectory_state.size(); ++i)
    {
      s << indent << "  trajectory_state[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.trajectory_state[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_TRAJECTORYSTATES_H
