#pragma once

#ifndef _STASIC_LAYER_H_
#define _STASIC_LAYER_H_

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

using namespace std;
using namespace sensor_msgs;
using namespace Eigen;

class static_layer : public rclcpp::Node{
private:
    //加载全局膨胀地图的参数
    double global_inscribed_radiu_temp;
    double global_cost_scaling_factor_temp;
    double global_resolution_temp;
    double global_distance_temp;

    //订阅栅格地图
    rclcpp::Subscription<nav_msgs::msg::OccupancyGrid>::SharedPtr sub_OccMap;

    rclcpp::Publisher<nav_msgs::msg::OccupancyGrid>::SharedPtr pubStaticLayer;

    // 实例化一个 local_inflation_layer 
    local_inflation global_inflation_layer;

public:
    static_layer();
    void occMap_callback(const nav_msgs::msg::OccupancyGrid::SharedPtr occMapMsg);
    void grid_onInitialize();
    void pub_StaticLayer(unsigned char* cost_arr, double width, double height, const nav_msgs::msg::OccupancyGrid msg);

};




//notGround_pointCloud3的回调函数
void static_layer::occMap_callback(const nav_msgs::msg::OccupancyGrid::SharedPtr occMapMsg){
    nav_msgs::msg::OccupancyGrid msg;
    // Copy the image data into the map structure
    msg.header.stamp = occMapMsg->header.stamp;
    msg.info.width = occMapMsg->info.width;
    msg.info.height = occMapMsg->info.height;

    msg.info.resolution = occMapMsg->info.resolution;
    msg.info.origin.position.x = occMapMsg->info.origin.position.x;
    msg.info.origin.position.y = occMapMsg->info.origin.position.y;
    msg.info.origin.position.z = occMapMsg->info.origin.position.z;
    msg.info.origin.orientation = occMapMsg->info.origin.orientation;

    msg.data.resize(msg.info.width * msg.info.height);

    // Copy pixel data into the map structure
    for (size_t y = 0; y < msg.info.height; y++) {
        for (size_t x = 0; x < msg.info.width; x++) {
            if(occMapMsg->data[msg.info.width * (msg.info.height - y - 1) + x] > 0)
                msg.data[msg.info.width * (msg.info.height - y - 1) + x] = occMapMsg->data[msg.info.width * (msg.info.height - y - 1) + x];
            else 
                msg.data[msg.info.width * (msg.info.height - y - 1) + x] = 0;
        }
    }
   
    // global_inflation_layer
    global_inflation_layer.onInitializeOccMap(global_inscribed_radiu_temp, global_cost_scaling_factor_temp, msg, global_resolution_temp);
  
    global_inflation_layer.computeCaches();

    global_inflation_layer.get_costmap_form_occmap(msg);

    auto cost_array =  global_inflation_layer.updateCosts(0, 0, global_inflation_layer.local_width, global_inflation_layer.local_height);

    pub_StaticLayer(cost_array, global_inflation_layer.local_width, global_inflation_layer.local_height, msg);

}

void static_layer::grid_onInitialize(){
    //从yaml中获取参数
    declare_parameter("global_inscribed_radiu", 0.25);
    get_parameter("global_inscribed_radiu", global_inscribed_radiu_temp);  

    declare_parameter("global_cost_scaling_factor", 10.0);
    get_parameter("global_cost_scaling_factor", global_cost_scaling_factor_temp); 

    declare_parameter("global_distance_", 2.5);
    get_parameter("global_distance_", global_distance_temp); 

    declare_parameter("global_resolution", 0.05);
    get_parameter("global_resolution", global_resolution_temp); 
}

// 发布static layer
void static_layer::pub_StaticLayer(unsigned char* cost_arr, double width, double height, const nav_msgs::msg::OccupancyGrid msg){
    nav_msgs::msg::OccupancyGrid rosMap_;
    rosMap_.info.resolution = msg.info.resolution;
    rosMap_.info.origin.position.x = msg.info.origin.position.x;
    rosMap_.info.origin.position.y = msg.info.origin.position.y;
    rosMap_.info.origin.position.z = msg.info.origin.position.z;
    rosMap_.info.origin.orientation = msg.info.origin.orientation;


    rosMap_.info.width = msg.info.width;
    rosMap_.info.height = msg.info.height;
    rosMap_.data.resize(msg.info.width * msg.info.height);
    //0 ~ local_width * local_height
    for(int i = 0; i < msg.info.width * msg.info.height;i++){
        if(cost_arr[i] == 255) 
            rosMap_.data[i] = -1;
        else if (cost_arr[i] == 254) 
            rosMap_.data[i] = 100;
        else if (cost_arr[i] < 254 && cost_arr[i] > 0) 
            rosMap_.data[i] = int8_t(int(cost_arr[i]/2.53));
        else;

    }
    rosMap_.header.stamp = msg.header.stamp;
    rosMap_.header.frame_id = "map";
    pubStaticLayer->publish(rosMap_);

}


// 主函数
static_layer::static_layer():Node("static_layer_node")
{
    grid_onInitialize();

    //订阅栅格地图,用于发布static_layer
    sub_OccMap = this->create_subscription<nav_msgs::msg::OccupancyGrid>("global/global_map", 1, std::bind(&static_layer::occMap_callback,this,std::placeholders::_1));

    pubStaticLayer = this->create_publisher<nav_msgs::msg::OccupancyGrid>("static_layer",1);

}

#endif