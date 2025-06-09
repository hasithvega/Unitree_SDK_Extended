#错误打印log
std_msgs/String error_log
#错误码
#0:目标点不在轨迹中 1:遇到障碍物无法重新规划,返回充电房 2:返回充电房也失败，完全无法规划
std_msgs/Int8 error_flag