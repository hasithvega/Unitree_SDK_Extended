#消息头
std_msgs/Header header  

#起始点和当前边信息
graph_msg/Node node
graph_msg/Edge edge

#状态维护
int8 goal_flag 
bool err_flag
bool back_flag #倒着走为1 不允许为0

#预留空间 第一位为步态状态 
int8[] undefined