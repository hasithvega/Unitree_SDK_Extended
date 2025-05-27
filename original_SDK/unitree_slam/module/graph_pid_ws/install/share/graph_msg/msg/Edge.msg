#边名称序列
uint16[] edge_name

#起始点名称序列和终止点名称序列
uint16[] start_node_name
uint16[] end_node_name

#边的长度序列
float32[] edge_length

#狗步态信息 0:普通行走 3:爬楼梯
uint16[] dog_stats
#狗正反走状态信息 0:普通行走 1:允许倒着走
uint16[] dog_back_stats
#狗的速度
float32[] dog_speed
#边的方向属性
uint16[] edge_state

float32[] edge_state_1
uint16[] edge_state_2
uint16[] edge_state_3
uint16[] edge_state_4

std_msgs/Float32MultiArray[] edge_state_list
# nav_msgs/Path[] path
