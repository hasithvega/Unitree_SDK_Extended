#消息头
std_msgs/Header header  

#执行标识位
int8 flag

#点数量和边数量
uint64 node_num
uint64 edge_num

#点信息和编信息
graph_msg/Node node
graph_msg/Edge edge

#预留空间
int8[] undefined