// Generated by gencpp from file nav_msgs/GetPlan.msg
// DO NOT EDIT!


#ifndef NAV_MSGS_MESSAGE_GETPLAN_H
#define NAV_MSGS_MESSAGE_GETPLAN_H

#include <ros/service_traits.h>


#include <nav_msgs/GetPlanRequest.h>
#include <nav_msgs/GetPlanResponse.h>


namespace nav_msgs
{

struct GetPlan
{

typedef GetPlanRequest Request;
typedef GetPlanResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetPlan
} // namespace nav_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nav_msgs::GetPlan > {
  static const char* value()
  {
    return "421c8ea4d21c6c9db7054b4bbdf1e024";
  }

  static const char* value(const ::nav_msgs::GetPlan&) { return value(); }
};

template<>
struct DataType< ::nav_msgs::GetPlan > {
  static const char* value()
  {
    return "nav_msgs/GetPlan";
  }

  static const char* value(const ::nav_msgs::GetPlan&) { return value(); }
};


// service_traits::MD5Sum< ::nav_msgs::GetPlanRequest> should match 
// service_traits::MD5Sum< ::nav_msgs::GetPlan > 
template<>
struct MD5Sum< ::nav_msgs::GetPlanRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nav_msgs::GetPlan >::value();
  }
  static const char* value(const ::nav_msgs::GetPlanRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nav_msgs::GetPlanRequest> should match 
// service_traits::DataType< ::nav_msgs::GetPlan > 
template<>
struct DataType< ::nav_msgs::GetPlanRequest>
{
  static const char* value()
  {
    return DataType< ::nav_msgs::GetPlan >::value();
  }
  static const char* value(const ::nav_msgs::GetPlanRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nav_msgs::GetPlanResponse> should match 
// service_traits::MD5Sum< ::nav_msgs::GetPlan > 
template<>
struct MD5Sum< ::nav_msgs::GetPlanResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nav_msgs::GetPlan >::value();
  }
  static const char* value(const ::nav_msgs::GetPlanResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nav_msgs::GetPlanResponse> should match 
// service_traits::DataType< ::nav_msgs::GetPlan > 
template<>
struct DataType< ::nav_msgs::GetPlanResponse>
{
  static const char* value()
  {
    return DataType< ::nav_msgs::GetPlan >::value();
  }
  static const char* value(const ::nav_msgs::GetPlanResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NAV_MSGS_MESSAGE_GETPLAN_H
