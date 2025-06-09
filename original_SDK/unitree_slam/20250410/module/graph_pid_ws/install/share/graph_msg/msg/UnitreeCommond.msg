#数据指令
std_msgs/String cmd  
#任务心跳
std_msgs/String seq  
#错误情况
#0:目标点不在轨迹中 1:遇到障碍物无法重新规划,返回充电房 2:返回充电房也失败，完全无法规划
std_msgs/Int8 faild_flag