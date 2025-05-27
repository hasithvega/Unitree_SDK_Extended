# 导入库
from launch.substitutions import LaunchConfiguration
from launch import LaunchDescription
import launch_ros.actions

from_dog_pub_odom_imu = launch_ros.actions.Node(
        package ='dog_control',
        executable ='dog_control',
        output ="screen",
    )

sport_switch = launch_ros.actions.Node(
        package ='dog_control',
        executable ='send_sport_cmd',
        output ="screen",
    )

dog_cmd = launch_ros.actions.Node(
        package ='go2_control_by_sdk',
        executable ='send_cmd',
        output ="screen",
        arguments=["eth0"],   #网卡设置   enp1s0
    )

# 定义函数名称为：generate_launch_description
def generate_launch_description():
    return LaunchDescription([
        from_dog_pub_odom_imu,
        dog_cmd,
        sport_switch,
    ])
