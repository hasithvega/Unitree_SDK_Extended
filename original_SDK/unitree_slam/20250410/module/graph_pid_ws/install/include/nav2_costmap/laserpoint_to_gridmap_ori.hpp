#pragma once
#ifndef _LASERPOINT_TO_GRIDMAP_H_
#define _LASERPOINT_TO_GRIDMAP_H_

#include <memory>
#include <string>
#include <cstring>

#include "line.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <boost/bind.hpp>

#include <iostream>
#include <limits>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>

#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/exact_time.h>
#include "message_filters/sync_policies/approximate_time.h"
#include "message_filters/time_synchronizer.h"

#include "pcl/point_cloud.h"
#include "pcl_conversions/pcl_conversions.h"
#include "pcl/point_types.h"
#include "pcl/conversions.h"
#include <pcl/common/common.h>
#include <pcl/common/transforms.h>

#include "tf2_msgs/msg/tf_message.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"

#include "sensor_msgs/msg/point_cloud.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "geometry_msgs/msg/point32.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "nav_msgs/msg/occupancy_grid.hpp"
#include "map_msgs/msg/occupancy_grid_update.hpp"
#include "nav2_costmap/msg/cost_map.hpp"

#include <eigen3/Eigen/Core>

#include <local_inflation.hpp>
#include <pcl/point_types.h>
#include <pcl/filters/radius_outlier_removal.h>
#include <pcl/filters/conditional_removal.h>

#include <chrono>
#include <iostream>

using namespace std;
using namespace sensor_msgs;
using namespace Eigen;

class point_to_gridmap : public rclcpp::Node {
private:
    //激光里程计的实时位置
    double p_x, p_y, p_z, theta;

    //用于同步各个话题发布的时间
    sensor_msgs::msg::PointCloud2 scanMsg_time;

    //加载局部膨胀地图的参数
    double local_inscribed_radius_temp_1;
    double local_cost_scaling_factor_temp;
    double local_resolution_temp_1;
    double local_distance_temp;

    std::mutex mtx;
    std::deque<nav_msgs::msg::Odometry> laserOdomQueue;
    std::deque<sensor_msgs::msg::PointCloud2> laserQueue;

    // rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odometry_sub;
    // rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr PCloud_sub;

      //ExactTime     ApproximateTime
    // message_filters::Subscriber<nav_msgs::msg::Odometry> odometry_sub;
    // message_filters::Subscriber<sensor_msgs::msg::PointCloud2> PCloud_sub;
    // std::shared_ptr<message_filters::TimeSynchronizer<nav_msgs::msg::Odometry, sensor_msgs::msg::PointCloud2>> sync_;

    std::shared_ptr<message_filters::Subscriber<nav_msgs::msg::Odometry>> odomSubPtr_;
    std::shared_ptr<message_filters::Subscriber<sensor_msgs::msg::PointCloud2>> pointcloudSubPtr_;
    
    typedef message_filters::sync_policies::ApproximateTime<nav_msgs::msg::Odometry, sensor_msgs::msg::PointCloud2> MySyncPolicy;
    std::shared_ptr<message_filters::Synchronizer<MySyncPolicy>> syncPtr_;

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_costmap_flag;//lz:订阅door flag to change costmap configs

    //发布当前帧对应的局部激光点云
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pubLocalCloud;

    rclcpp::Publisher<nav_msgs::msg::OccupancyGrid>::SharedPtr pubGridMap;

    rclcpp::Publisher<nav_msgs::msg::OccupancyGrid>::SharedPtr pubInflationLayer;

    rclcpp::Publisher<nav2_costmap::msg::CostMap>::SharedPtr pubCostMap;

    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pubCloud3;

    // 实例化一个 local_inflation_layer 
    local_inflation local_inflation_layer;



public:

    double local_inscribed_radius_temp;
    double local_resolution_temp;

    double getYaw(const nav_msgs::msg::Odometry odomMsg);

    void pub_Current_LocalCloud(const sensor_msgs::msg::PointCloud2::ConstSharedPtr& scanMsg, sensor_msgs::msg::PointCloud2 scanMsg_time);

    point_to_gridmap(/* args */);

    void grid_onInitialize();

    void grid_onInitialize_for_door();

    void grid_onInitialize_for_normal();

    void pub_InflationLayer(unsigned char* cost_arr, double width, double height, sensor_msgs::msg::PointCloud2 scanmsg_Time);

    void pub_CostMap(unsigned char* cost_arr, double width, double height, sensor_msgs::msg::PointCloud2 scanmsg_Time);
       
    void pointCloud_callback(const sensor_msgs::msg::PointCloud2::ConstSharedPtr scanMsg);

    void odom_callback(const nav_msgs::msg::Odometry::ConstSharedPtr odomMsg);

    void costmap_flag_callback(const std_msgs::msg::String::ConstSharedPtr door_flag);

    void odomAndPointcloudCallback(nav_msgs::msg::Odometry::ConstSharedPtr odomMsg,
                                           sensor_msgs::msg::PointCloud2::ConstSharedPtr notGround);

};


void point_to_gridmap::grid_onInitialize(){
    //从yaml中获取参数
    declare_parameter("local_inscribed_radiu", 0.25);
    get_parameter("local_inscribed_radiu", local_inscribed_radius_temp_1);  

    declare_parameter("local_cost_scaling_factor", 10.0);
    get_parameter("local_cost_scaling_factor", local_cost_scaling_factor_temp); 

    declare_parameter("local_distance_", 2.5);
    get_parameter("local_distance_", local_distance_temp); 

    declare_parameter("local_resolution", 0.05);
    get_parameter("local_resolution", local_resolution_temp_1); 

}

void point_to_gridmap::grid_onInitialize_for_normal(){
    //从yaml中获取参数
    local_inscribed_radius_temp = local_inscribed_radius_temp_1;
    local_resolution_temp = local_resolution_temp_1;
}

void point_to_gridmap::grid_onInitialize_for_door(){
    //从yaml中获取参数
    local_inscribed_radius_temp = 0.05;  
    local_resolution_temp = 0.01;
}


void point_to_gridmap::costmap_flag_callback(const std_msgs::msg::String::ConstSharedPtr foor_flag){

    auto flag = foor_flag->data;
    if(flag == "door"){
        cout<<"door flag!!!!!!!!!!!!!!!!"<<endl;
        grid_onInitialize_for_door();
    }
    else
        grid_onInitialize_for_normal();


}
//发布膨胀地图
void point_to_gridmap::pub_InflationLayer(unsigned char* cost_arr, double width, double height, sensor_msgs::msg::PointCloud2 scanmsg_Time){
    nav_msgs::msg::OccupancyGrid rosMap_;
    rosMap_.info.resolution = local_resolution_temp;
    rosMap_.info.origin.position.x = p_x - local_distance_temp;
    rosMap_.info.origin.position.y = p_y - local_distance_temp;
    rosMap_.info.origin.position.z = 0.0;
    rosMap_.info.origin.orientation.x = 0.0;
    rosMap_.info.origin.orientation.y = 0.0;
    rosMap_.info.origin.orientation.z = 0.0;
    rosMap_.info.origin.orientation.w = 1.0;

    rosMap_.info.width = width;
    rosMap_.info.height = height;
    rosMap_.data.resize(width * height);
    //0 ~ local_width * local_height
    for(int i = 0; i < width * height;i++){
        rosMap_.data[i] = int8_t(int(cost_arr[i])/2.0);
    }
    rosMap_.header.stamp = scanmsg_Time.header.stamp;
    rosMap_.header.frame_id = "map";
    pubInflationLayer->publish(rosMap_);

    // laserCloudTemp.header.stamp = notGround->header.stamp;
    // laserCloudTemp.header.frame_id = "base_link"; 
    // pubNotGroundCloud3->publish(laserCloudTemp);
}

void point_to_gridmap::pub_CostMap(unsigned char* cost_arr, double width, double height, sensor_msgs::msg::PointCloud2 scanmsg_Time){
    // publisher pMap for collision checker
    nav2_costmap::msg::CostMap pMap_temp;
    pMap_temp.data.resize(width * height);
    for(int i = 0; i < width * height;i++){
        pMap_temp.data[i] = cost_arr[i];
    }
    pMap_temp.header.stamp = scanmsg_Time.header.stamp;
    pMap_temp.header.frame_id = "map";
    //此处存储的是当前膨胀地图对应的机器人位姿
    pMap_temp.origin.position.x = p_x;
    pMap_temp.origin.position.y = p_y;
    pMap_temp.origin.position.z = theta;

    pubCostMap->publish(pMap_temp);
}

// 通过odom四元数获取对应的欧拉角roll, pitch, yaw，并返回yaw 也就是机器人的偏航角
double point_to_gridmap::getYaw(const nav_msgs::msg::Odometry odomMsg){
    tf2::Quaternion orientation;
    double roll, pitch, yaw;

    tf2::fromMsg(odomMsg.pose.pose.orientation, orientation);
    tf2::Matrix3x3(orientation).getRPY(roll, pitch, yaw); // 得到计算得到对应的 roll, pitch, yaw

    return yaw; //返回yaw
}

//发布当前帧激光点云
void point_to_gridmap::pub_Current_LocalCloud(const sensor_msgs::msg::PointCloud2::ConstSharedPtr& scanMsg, sensor_msgs::msg::PointCloud2 scanMsg_time){
    pcl::PointCloud<pcl::PointXYZ> PCscan;
    pcl::fromROSMsg(*scanMsg, PCscan);

    for(int i = 0; i < PCscan.size(); ++i){
        PCscan.points[i].z = 0;
    }

    sensor_msgs::msg::PointCloud2 scanMsg_;
    pcl::toROSMsg(PCscan, scanMsg_);
    scanMsg_.header.stamp = scanMsg_time.header.stamp;
    pubLocalCloud->publish(scanMsg_);

}

void point_to_gridmap::odom_callback(const nav_msgs::msg::Odometry::ConstSharedPtr odomMsg)
{
    // cout<<" odom_callback "<<endl;
    std::lock_guard<std::mutex> lock(mtx);
    // laserOdomQueue.push_back(*odomMsg);
    
    // cout<<"odom_callback odometry time : "<< fixed << double(odomMsg->header.stamp.sec + odomMsg->header.stamp.nanosec * 1e-9) <<endl;
    double odomTimeCur = odomMsg->header.stamp.sec + odomMsg->header.stamp.nanosec * 1e-9;
    // cout<<"odomTimeCur time : "<< fixed << odomTimeCur <<endl;

    // cout<<" laserQueue.size() : "<<laserQueue.size()<<endl;

    while (!laserQueue.empty())
    {
        // cout<<"current dif time : "<< fixed << laserQueue.front().header.stamp.sec + laserQueue.front().header.stamp.nanosec * 1e-9 - odomTimeCur <<endl;
        if (((laserQueue.front().header.stamp.sec + laserQueue.front().header.stamp.nanosec * 1e-9) )< odomTimeCur - 0.05)
                laserQueue.pop_front();
        else
            break;
    }

    if(laserQueue.empty())
        return;

    // cout<<"lase time : "<< fixed << double(laserQueue.front().header.stamp.sec + laserQueue.front().header.stamp.nanosec * 1e-9) <<endl;
    // cout<<"now dif time : "<< fixed << double(laserQueue.front().header.stamp.sec + laserQueue.front().header.stamp.nanosec * 1e-9) - odomTimeCur <<endl;
    // cout<<" after laserQueue.size() : "<<laserQueue.size()<<endl;

    // nav_msgs::msg::Odometry  laserOdom= laserOdomQueue.front();
    // cout<<"in here !!!"<<endl;
    
        // //获取激光里程计信息
        // p_x = odomMsg->pose.pose.position.x;
        // p_y = odomMsg->pose.pose.position.y;
        // p_z = odomMsg->pose.pose.position.z;

        // auto time_temp = odomMsg->header.stamp;

        // theta = getYaw(*odomMsg);
        // //获取当前激光帧的时间戳
        // scanMsg_time.header.stamp = laserQueue.front().header.stamp;

        // /*****************************对点云进行滤波*******************************/
        // pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_src(new pcl::PointCloud<pcl::PointXYZ>());
        // pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_filtered(new pcl::PointCloud<pcl::PointXYZ>());

        // pcl::PointCloud<pcl::PointXYZ> PCscan_0;
        // pcl::fromROSMsg(laserQueue.front(), PCscan_0);
        // *cloud_src = PCscan_0;

        // // 创建半径滤波（模板）类对象
        // pcl::RadiusOutlierRemoval<pcl::PointXYZ> ror;
        // // 设置输入点云
        // ror.setInputCloud(cloud_src);
        // // 设置搜索半径
        // ror.setRadiusSearch(0.15);//0.1
        // // 设置半径范围内的最少点数阈值
        // ror.setMinNeighborsInRadius(5);//3
        // // 执行滤波，并带出结果数据
        // ror.filter(*cloud_filtered);  //保存滤波结果到cloud_filtered

        // pcl::PointCloud<pcl::PointXYZ> PCscan_;

        // PCscan_ = *cloud_filtered;

        // /*************pub for test******************/
        // sensor_msgs::msg::PointCloud2 laserCloudTemp;
        // pcl::toROSMsg(PCscan_,laserCloudTemp);
        // laserCloudTemp.header.stamp = odomMsg->header.stamp;
        // laserCloudTemp.header.frame_id = "base_link"; 
        // pubCloud3->publish(laserCloudTemp);
        // /************************************************************/

        // local_inflation_layer.onInitialize(local_inscribed_radius_temp, local_cost_scaling_factor_temp, local_distance_temp, local_resolution_temp);

        // local_inflation_layer.computeCaches();

        // local_inflation_layer.get_costmap(PCscan_, theta);

        // scanMsg_time.header.stamp = time_temp;

        // auto rosMap = local_inflation_layer.RosOccGridMap(p_x, p_y,scanMsg_time);
        // pubGridMap->publish(rosMap);

        // auto cost_array =  local_inflation_layer.updateCosts(0, 0, local_inflation_layer.local_width, local_inflation_layer.local_height);

        // pub_InflationLayer(cost_array, local_inflation_layer.local_width, local_inflation_layer.local_height, scanMsg_time);

        // pub_CostMap(cost_array, local_inflation_layer.local_width, local_inflation_layer.local_height, scanMsg_time);

    // if(laserOdomQueue.size()>20)
    // {
    //     laserOdomQueue.pop_front();
    // }

}  


//notGround_pointCloud3的回调函数
void point_to_gridmap::pointCloud_callback(const sensor_msgs::msg::PointCloud2::ConstSharedPtr scanMsg)
{

    //获取激光里程计信息
    laserQueue.push_back(*scanMsg);
    // std::lock_guard<std::mutex> lock(mtx);
    // cout<<" pointCloud_callback "<<endl;
    if(laserQueue.size()>20)
    {
        laserQueue.pop_front();
    }

}

void point_to_gridmap::odomAndPointcloudCallback(nav_msgs::msg::Odometry::ConstSharedPtr odomMsg,
                                           sensor_msgs::msg::PointCloud2::ConstSharedPtr notGround)
{
    double odomTimeCur = odomMsg->header.stamp.sec + odomMsg->header.stamp.nanosec * 1e-9;
    // cout<<"odomTimeCur time : "<< fixed << odomTimeCur <<endl;

    double notGroundTimeCur = notGround->header.stamp.sec + notGround->header.stamp.nanosec * 1e-9;
    // cout<<"notGroundTimeCur time : "<< fixed << notGroundTimeCur <<endl;
    //获取激光里程计信息
    p_x = odomMsg->pose.pose.position.x;
    p_y = odomMsg->pose.pose.position.y;
    p_z = odomMsg->pose.pose.position.z;

    auto time_temp = odomMsg->header.stamp;

    theta = getYaw(*odomMsg);
    // cout<<" theta : "<< theta <<endl;
    //获取当前激光帧的时间戳
    scanMsg_time.header.stamp = notGround->header.stamp;

    /*****************************对点云进行滤波*******************************/
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_src(new pcl::PointCloud<pcl::PointXYZ>());
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_filtered(new pcl::PointCloud<pcl::PointXYZ>());

    pcl::PointCloud<pcl::PointXYZ> PCscan_0;
    pcl::fromROSMsg(*notGround, PCscan_0);
    *cloud_src = PCscan_0;

    // 创建半径滤波（模板）类对象
    pcl::RadiusOutlierRemoval<pcl::PointXYZ> ror;
    // 设置输入点云
    ror.setInputCloud(cloud_src);
    // 设置搜索半径
    ror.setRadiusSearch(0.15);//0.1
    // 设置半径范围内的最少点数阈值
    ror.setMinNeighborsInRadius(5);//3
    // 执行滤波，并带出结果数据
    ror.filter(*cloud_filtered);  //保存滤波结果到cloud_filtered

    pcl::PointCloud<pcl::PointXYZ> PCscan_;

    PCscan_ = *cloud_filtered;

    /*************pub for test******************/
    sensor_msgs::msg::PointCloud2 laserCloudTemp;
    pcl::toROSMsg(PCscan_,laserCloudTemp);
    laserCloudTemp.header.stamp = odomMsg->header.stamp;
    laserCloudTemp.header.frame_id = "odom"; 
    pubCloud3->publish(laserCloudTemp);
    /************************************************************/

    local_inflation_layer.onInitialize(local_inscribed_radius_temp, local_cost_scaling_factor_temp, local_distance_temp, local_resolution_temp);

    local_inflation_layer.computeCaches();

    local_inflation_layer.get_costmap(PCscan_, theta);

    scanMsg_time.header.stamp = time_temp;

    auto rosMap = local_inflation_layer.RosOccGridMap(p_x, p_y,scanMsg_time);
    pubGridMap->publish(rosMap);

    auto cost_array =  local_inflation_layer.updateCosts(0, 0, local_inflation_layer.local_width, local_inflation_layer.local_height);

    pub_InflationLayer(cost_array, local_inflation_layer.local_width, local_inflation_layer.local_height, scanMsg_time);

    pub_CostMap(cost_array, local_inflation_layer.local_width, local_inflation_layer.local_height, scanMsg_time);
}                                           

// 主函数
point_to_gridmap::point_to_gridmap():Node("point_to_gridmap_node")
{
    grid_onInitialize();
    grid_onInitialize_for_normal();

    // odometry_sub = this->create_subscription<nav_msgs::msg::Odometry>("/lio_sam_ros2/mapping/re_location_laser_to_map",10,
    //                                                         std::bind(&point_to_gridmap::odom_callback,this,std::placeholders::_1));    
    // PCloud_sub = this->create_subscription<sensor_msgs::msg::PointCloud2>("/notGround_pointCloud3",10,
    //                                                         std::bind(&point_to_gridmap::pointCloud_callback,this,std::placeholders::_1));                         

    // pubLocalCloud = this->create_publisher<sensor_msgs::msg::PointCloud2>("local_cloud",1);
    pubGridMap = this->create_publisher<nav_msgs::msg::OccupancyGrid>("local/cost_map",1);
    pubInflationLayer = this->create_publisher<nav_msgs::msg::OccupancyGrid>("inflation_layer",1);
    pubCostMap = this->create_publisher<nav2_costmap::msg::CostMap>("p_map",1);
    pubCloud3 = this->create_publisher<sensor_msgs::msg::PointCloud2>("pointCloud3",1);

    sub_costmap_flag = this->create_subscription<std_msgs::msg::String>("/costmap_door_flag",10,
                                        std::bind(&point_to_gridmap::costmap_flag_callback,this,std::placeholders::_1));  
                                            
    odomSubPtr_ = std::make_shared<message_filters::Subscriber<nav_msgs::msg::Odometry>>(this,
                                                                                         "/lio_sam_ros2/mapping/re_location_laser_to_map");
    pointcloudSubPtr_ = std::make_shared<message_filters::Subscriber<sensor_msgs::msg::PointCloud2>>(this,
                                                                                                     "/notGround_pointCloud3");
    syncPtr_ = std::make_shared<message_filters::Synchronizer<MySyncPolicy>>(MySyncPolicy(10), *odomSubPtr_,
                                                                             *pointcloudSubPtr_);
    syncPtr_->registerCallback(boost::bind(&point_to_gridmap::odomAndPointcloudCallback, this, _1, _2));//同步时间callback
}

#endif
