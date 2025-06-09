#点名称序列
uint16[] node_name

#点的坐标和Yaw值
float32[] node_position_x
float32[] node_position_y
float32[] node_position_z
float32[] node_yaw

#点的属性
uint16[] node_attribute

#预留空间
uint16[] undefined

uint16[] node_state_2
uint16[] node_state_3

std_msgs/Float32MultiArray[] node_state_list
