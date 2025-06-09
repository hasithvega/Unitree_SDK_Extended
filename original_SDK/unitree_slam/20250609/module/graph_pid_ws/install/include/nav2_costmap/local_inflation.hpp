#pragma once
#ifndef _LOCAL_INFLATION_H_
#define _LOCAL_INFLATION_H_

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

using namespace std;

class CellData
{
public:
  /**
   * @brief  Constructor for a CellData objects
   * @param  i The index of the cell in the cost map
   * @param  x The x coordinate of the cell in the cost map
   * @param  y The y coordinate of the cell in the cost map
   * @param  sx The x coordinate of the closest obstacle cell in the costmap
   * @param  sy The y coordinate of the closest obstacle cell in the costmap
   * @return
   */
  CellData(double i, unsigned int x, unsigned int y, unsigned int sx, unsigned int sy)
  : index_(static_cast<unsigned int>(i)), x_(x), y_(y), src_x_(sx), src_y_(sy)
  {
  }
  unsigned int index_;
  unsigned int x_, y_;
  unsigned int src_x_, src_y_;
};


// class local_inflation: public rclcpp::Node
class local_inflation
{
public:
    double local_inscribed_radius_;
    double local_cost_scaling_factor;
    double local_resolution;
    double local_distance_;
    bool inflate_unknown_ = false;
    int local_width;
    int local_height;

    double cell_inflation_radius_;

    std::vector<std::vector<CellData>> inflation_cells_;

    /** Provides a mapping for often used cost values */
    static constexpr unsigned char NO_INFORMATION = 255;
    static constexpr unsigned char LETHAL_OBSTACLE = 254;
    static constexpr unsigned char INSCRIBED_INFLATED_OBSTACLE = 253;
    static constexpr unsigned char FREE_SPACE = 0;

    unsigned int cache_length_ = 0;
    unsigned int cached_cell_inflation_radius_ = 0;
    std::vector<unsigned char> cached_costs_;
    std::vector<double> cached_distances_;
    std::vector<std::vector<int>> distance_matrix_;

    std::vector<bool> seen_;

    //为地图指针申请空间
    unsigned char* pMap;//给代价地图使用

// public:
    void onInitialize(double inscribed_radius, double cost_scaling_factor, double distance_, double resolution);
    void onInitializeOccMap(double inscribed_radius, double cost_scaling_factor, nav_msgs::msg::OccupancyGrid msg, double resolution);

    void computeCaches();
    int generateIntegerDistances();
    unsigned char computeCost(double distance_temp1);
    void get_costmap( pcl::PointCloud<pcl::PointXYZ>P_scan ,double theta);
    void get_costmap_form_occmap(const nav_msgs::msg::OccupancyGrid msg);
    nav_msgs::msg::OccupancyGrid RosOccGridMap(double p_x, double p_y, sensor_msgs::msg::PointCloud2 scanMsg_time);
    unsigned char* updateCosts(int min_i, int min_j, int max_i, int max_j);
    unsigned int getIndex(unsigned int mx, unsigned int my);
    unsigned char costLookup(unsigned int mx, unsigned int my, unsigned int src_x, unsigned int src_y);
    void enqueue( unsigned int index, unsigned int mx, unsigned int my, unsigned int src_x, unsigned int src_y);
    double distanceLookup( unsigned int mx, unsigned int my, unsigned int src_x, unsigned int src_y);
    void DestoryMap();
    local_inflation();

};

local_inflation::local_inflation(/* args */) 
{
    // this->onInitialize();
    cout<<"***********************onInitialize***********************"<<endl;
}

//参数初始化
void local_inflation::onInitialize(double inscribed_radius, double cost_scaling_factor, double distance_, double resolution){
    local_inscribed_radius_ = inscribed_radius;

    local_cost_scaling_factor = cost_scaling_factor;

    local_distance_ = distance_;
    local_resolution = resolution;

    //局部膨胀地图的宽、高
    local_width = (local_distance_ * 2.0) / local_resolution;
    local_height = (local_distance_ * 2.0) / local_resolution;

    //以米为单位转换为以cell为单位
    cell_inflation_radius_ = std::max(0.0, ceil(local_inscribed_radius_ / local_resolution));

    cached_distances_.clear();
    cached_costs_.clear();
    seen_.clear();
    seen_ = std::vector<bool>(local_width * local_height, false);
}

//参数初始化
void local_inflation::onInitializeOccMap(double inscribed_radius, double cost_scaling_factor, nav_msgs::msg::OccupancyGrid msg, double resolution){

    local_inscribed_radius_ = inscribed_radius;

    local_cost_scaling_factor = cost_scaling_factor;

    local_resolution = resolution;

    //栅格地图的宽、高
    local_width =  msg.info.width;
    local_height = msg.info.height;

    //以米为单位转换为以cell为单位
    cell_inflation_radius_ = std::max(0.0, ceil(local_inscribed_radius_ / local_resolution));

    cached_distances_.clear();
    cached_costs_.clear();
    seen_.clear();
    seen_ = std::vector<bool>(local_width * local_height, false);
}

//计算参考矩阵cached_distances_和cached_costs_，因为它们是后续膨胀计算的参照物
void local_inflation::computeCaches(){

    if(cell_inflation_radius_ == 0){
      return;
    }
    
    cache_length_ = cell_inflation_radius_ + 5;  //默认是2  8 now

    if(cell_inflation_radius_ != cached_cell_inflation_radius_){
        cached_costs_.resize(cache_length_ * cache_length_);
        cached_distances_.resize(cache_length_ * cache_length_);

        for (unsigned int i = 0; i < cache_length_; ++i) {
          for (unsigned int j = 0; j < cache_length_; ++j) {
            cached_distances_[i * cache_length_ + j] = hypot(i, j);//hypot(x,y)=sqrt(x*x + y*y)
          }
        }
        cached_cell_inflation_radius_ = cell_inflation_radius_;
    }

    for (unsigned int i = 0; i < cache_length_; ++i) {
      for (unsigned int j = 0; j < cache_length_; ++j) {
        cached_costs_[i * cache_length_ + j] = computeCost(cached_distances_[i * cache_length_ + j]);
        }
    }

    int max_dist = generateIntegerDistances();
    inflation_cells_.clear();
    inflation_cells_.resize(max_dist + 1);

    /*2024 02 20 for memory clear*/
    cached_distances_.clear();
    cached_costs_.clear();
    seen_.clear();
    seen_ = std::vector<bool>(local_width * local_height, false);

    for (auto & dist : inflation_cells_){
      dist.reserve(local_width * local_height * 10);
    }
    DestoryMap();
    // cout<<"local inflation !!!!!!!!!!!!!!!"<<endl;
}

//计算代价地图
void local_inflation::get_costmap( pcl::PointCloud<pcl::PointXYZ>P_scan ,double theta){
    vector<int> index_x;
    vector<int> index_y;
  
    pMap = new unsigned char[local_width * local_height];
   
    for( int i = 0; i < local_width * local_height;i++){
        pMap[i] = 0;
    }

    for(int j = 0; j < (P_scan.size()); ++j){
      const auto &pointFrom = P_scan.points[j];

      double x = pointFrom.x;
      double y = pointFrom.y;

      double laser_x =  cos(theta)*x - sin(theta)*y;
      double laser_y =  sin(theta)*x + cos(theta)*y;

      double px = laser_x + local_distance_;
      double py = laser_y + local_distance_;

      index_x.push_back(int(px/local_resolution));
      index_y.push_back(int(py/local_resolution));

      if((abs(px) < 10)&&(abs(py) < 10)){

       if((index_x[j] < local_width)&&(index_x[j] > 0)&&(index_y[j] < local_height)&&(index_y[j] > 0)){
          int index = (index_y[j] * local_height) + index_x[j];

          if((index > (local_width * local_height -1))||(index < 0))
            continue;
          pMap[index] = 254;
        }
      }
    }
}

//计算代价地图
void local_inflation::get_costmap_form_occmap(const nav_msgs::msg::OccupancyGrid msg){

  pMap = new unsigned char[msg.info.height * msg.info.width];
  
  for( int i = 0; i <  msg.info.height * msg.info.width;i++){
      pMap[i] = 0;
  }

  for (size_t y = 0; y < msg.info.height; y++) {
    for (size_t x = 0; x < msg.info.width; x++) {
      if(msg.data[msg.info.width * (msg.info.height - y - 1) + x] > 0)

//       pMap[msg.info.width * (msg.info.height - y - 1) + x] = u_char( msg.data[msg.info.width * (msg.info.height - y - 1) + x] * 2.0 );
        pMap[msg.info.width * (msg.info.height - y - 1) + x] = 254;

    }
  }
}


//发布代价地图
nav_msgs::msg::OccupancyGrid local_inflation::RosOccGridMap(double p_x, double p_y, sensor_msgs::msg::PointCloud2 scanMsg_time){

    nav_msgs::msg::OccupancyGrid rosMap;

    rosMap.info.resolution = local_resolution;
    rosMap.info.origin.position.x = 0.0;
    rosMap.info.origin.position.y = 0.0;
    rosMap.info.origin.position.z = 0.0;
    rosMap.info.origin.orientation.x = 0.0;
    rosMap.info.origin.orientation.y = 0.0;
    rosMap.info.origin.orientation.z = 0.0;
    rosMap.info.origin.orientation.w = 1.0;
  
    rosMap.info.origin.position.x =  p_x - local_distance_;
    rosMap.info.origin.position.y =  p_y - local_distance_;
  
    rosMap.info.width = local_width;
    rosMap.info.height = local_height;
    rosMap.data.resize(local_width * local_height,0);

    // for(int i = 0; i< rosMap.data.size(); ++i){
    //     rosMap.data[i] = 0;
    // }

    for(int i = 0; i < local_width * local_height; i++){
       if(pMap[i] == 254)    //未知栅格
       {
          rosMap.data[i] = int8_t(254/2.0);
       }
       else //空闲栅格
       {
           rosMap.data[i] = 0;
       }
    }
    rosMap.header.stamp = scanMsg_time.header.stamp;

    rosMap.header.frame_id = "map";

    return rosMap;
}

unsigned char* local_inflation::updateCosts(int min_i, int min_j, int max_i, int max_j){
    //构建新的栅格地图
    unsigned char * master_array = pMap;
    unsigned int size_x = max_i, size_y = max_j;

    if (seen_.size() != size_x * size_y) {
      RCLCPP_WARN(rclcpp::get_logger("nav2_costmap_2d"), "InflationLayer::updateCosts(): seen_ vector size is wrong");
      seen_ = std::vector<bool>(size_x * size_y, false);
    }

    std::fill(begin(seen_), end(seen_), false);
    
    min_i -= static_cast<int>(cell_inflation_radius_);
    min_j -= static_cast<int>(cell_inflation_radius_);
    max_i += static_cast<int>(cell_inflation_radius_);
    max_j += static_cast<int>(cell_inflation_radius_);

    min_i = std::max(0, min_i);
    min_j = std::max(0, min_j);
    max_i = std::min(static_cast<int>(size_x), max_i);
    max_j = std::min(static_cast<int>(size_y), max_j);

    // 创建obs_bin并进行赋值，提取出障碍物点，存储在obs_bin
    std::vector<CellData>& obs_bin = inflation_cells_[0];
    //迭代障碍物点并更新cost
    for (int j = min_j; j < max_j; j++){
      for (int i = min_i; i < max_i; i++){
        int index = getIndex(i, j);

        unsigned char cost = master_array[index];

        if (cost == LETHAL_OBSTACLE){
          obs_bin.push_back(CellData(index, i, j, i, j));
        }
      }
    }
    //mark  
    for (const auto & dist_bin : inflation_cells_) {
      for (std::size_t i = 0; i < dist_bin.size(); ++i) {
          unsigned int index = dist_bin[i].index_;
          // 如果访问过的网格就不在访问了
          if (seen_[index])
          {
            continue;
          }
        seen_[index] = true;

        unsigned int mx = dist_bin[i].x_;//当前点的索引
        unsigned int my = dist_bin[i].y_;
        unsigned int sx = dist_bin[i].src_x_;//临近当前点的索引
        unsigned int sy = dist_bin[i].src_y_;

        //根据该CELL与障碍的距离来分配cost
        unsigned char cost = costLookup(mx, my, sx, sy);//输入该cell坐标和离它最近的障碍物坐标，返回对应的cached_costs_
        unsigned char old_cost = master_array[index];//旧celcost，是master地图上的cost
        
        if (old_cost == NO_INFORMATION &&
          (inflate_unknown_ ? (cost > FREE_SPACE) : (cost >= INSCRIBED_INFLATED_OBSTACLE)))
        // if((old_cost == -1)||(old_cost == 0)||(old_cost == 1))
        {
          master_array[index] = cost;//通过比较，更新主地图cost
        } else {
          master_array[index] = std::max(old_cost, cost);
        }

        int bound = cell_inflation_radius_ + 5;
        if( ((mx == sx)&&(my == (sy - bound))) || ((mx == sx)&&(my == (sy + bound))))
        {
          master_array[index] = 0;
        }
        //将在膨胀半径内的栅格点加入到膨胀队列里
        // 下面这几句就是将[mx,my]四周的网格点也进行膨胀
        if (mx > 0) {  //mx从右往左移动
          enqueue(index - 1, mx - 1, my, sx, sy);
        }
        if (my > 0) {  //my从下往上移动，每移动一次，index减去size_x大小
          enqueue(index - size_x, mx, my - 1, sx, sy);
        }
        if (mx < size_x - 1) {  //mx从左往右移动
          enqueue(index + 1, mx + 1, my, sx, sy);
        }
        if (my < size_y - 1) {  //my从上往下移动，每移动一次，index加上size_x大小
          enqueue(index + size_x, mx, my + 1, sx, sy);
        }
      }
    }

    return master_array;
  }

//输入坐标，输出当前坐标在图中的索引index
unsigned int local_inflation::getIndex(unsigned int mx, unsigned int my){
    unsigned int size_x_ = local_width;
    return my * size_x_ + mx;
}

unsigned char local_inflation::costLookup(unsigned int mx, unsigned int my, unsigned int src_x, unsigned int src_y){
    unsigned int dx = (mx > src_x) ? mx - src_x : src_x - mx;
    unsigned int dy = (my > src_y) ? my - src_y : src_y - my;

    return cached_costs_[dx * cache_length_ + dy];
}

//选取在膨胀半径内的栅格加入到膨胀队列里
void local_inflation::enqueue( unsigned int index, unsigned int mx, unsigned int my, unsigned int src_x, unsigned int src_y){
  if (!seen_[index]) {

    double distance_temp2 = distanceLookup(mx, my, src_x, src_y);
    //找它和最近的障碍物的距离，如果超过了阈值，则直接返回
    //如果不超过阈值，就把它也加入inflation_cells_数组里
    if (distance_temp2 > (cell_inflation_radius_)) {//+5 now
      return;
    }
    const unsigned int r = cell_inflation_radius_ + 5; //+10 now

    // push the cell data onto the inflation list and mark
    //inflation_cells_中将按圈层存储栅格。
    if((mx - src_x + r < 0)||(my - src_y + r < 0)){
      // cout<<"mx - src_x + r = " << mx - src_x + r <<"  my - src_y + r = " << my - src_y + r <<endl;
      return;
    }
    if((mx - src_x + r > (distance_matrix_.size() - 1))||(my - src_y + r > (distance_matrix_.size() - 1)) ){
      // cout<<"distance_matrix_.size() - 1 = "<< distance_matrix_.size() - 1 <<endl;
      // cout<<"mx - src_x + r = " << mx - src_x + r <<"  my - src_y + r = " << my - src_y + r <<endl;
      return;
    }
    inflation_cells_[distance_matrix_[mx - src_x + r][my - src_y + r]].emplace_back(
      index, mx, my, src_x, src_y);    
  }
}

double local_inflation::distanceLookup( unsigned int mx, unsigned int my, unsigned int src_x, unsigned int src_y){
    unsigned int dx = (mx > src_x) ? mx - src_x : src_x - mx;
    unsigned int dy = (my > src_y) ? my - src_y : src_y - my;
   
    if((dx * cache_length_ + dy) >= (cached_distances_.size())){
      //mark attention no useful
      return cached_distances_[cached_distances_.size() - 1];
      // return 0.0;
    }
    else 
      return cached_distances_[dx * cache_length_ + dy];
}

int local_inflation::generateIntegerDistances(){

    const int r = cell_inflation_radius_ + 5;//10 now +5
    const int size = r * 2 + 1;

    std::vector<std::pair<int, int>> points;

    for (int y = -r; y <= r; y++) {
      for (int x = -r; x <= r; x++) {
        if (x * x + y * y <= r * r) {
          points.emplace_back(x, y);
        }
      }
    }

    std::sort(
      points.begin(), points.end(),
      [](const std::pair<int, int> & a, const std::pair<int, int> & b) -> bool {
        return a.first * a.first + a.second * a.second < b.first * b.first + b.second * b.second;
      }
    );

    std::vector<std::vector<int>> distance_matrix(size, std::vector<int>(size, 0));
    std::pair<int, int> last = {0, 0};
    int level = 0;
    for (auto const & p : points) {
      if (p.first * p.first + p.second * p.second !=
        last.first * last.first + last.second * last.second)
      {
        level++;
      }
      distance_matrix[p.first + r][p.second + r] = level;
      last = p;
    }

    distance_matrix_ = distance_matrix;

    // cout<<"size = "<< size <<endl;
    // cout<<"distance_matrix_.size() = "<< distance_matrix_.size() <<endl;
    return level;
}

//通过距离矩阵计算代价矩阵
unsigned char local_inflation::computeCost(double distance_temp1){
    unsigned char cost = 0;
    if (distance_temp1 == 0) {
      cost = LETHAL_OBSTACLE;
    } else if (distance_temp1 * local_resolution <= local_inscribed_radius_) {
      cost = INSCRIBED_INFLATED_OBSTACLE;
    } else {
      // make sure cost falls off by Euclidean distance
      double factor =
        exp(-1.0 * local_cost_scaling_factor * (distance_temp1 * local_resolution - local_inscribed_radius_));
      cost = static_cast<unsigned char>((INSCRIBED_INFLATED_OBSTACLE - 1) * factor);
    }

    return cost;
}

  //销毁地图指针
void local_inflation::DestoryMap(){
      if(pMap != NULL)
          delete []pMap;
}


#endif