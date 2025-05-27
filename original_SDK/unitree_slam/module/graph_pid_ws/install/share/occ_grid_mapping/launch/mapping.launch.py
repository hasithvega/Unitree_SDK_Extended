# 导入库
import os

import launch
import launch_ros.actions

from ament_index_python.packages import get_package_share_directory  # 查询功能包路径的方法

# 定义函数名称为：generate_launch_description
def generate_launch_description():
    config_dir = launch.substitutions.LaunchConfiguration(
        'config_dir',
        default=os.path.join(
            get_package_share_directory('occ_grid_mapping'),
            'config',
            'params.yaml'))    
      
    # 创建Actions.Node对象，标明node所在位置
    CloudToScan = launch_ros.actions.Node(
        package="occ_grid_mapping",
        executable="CloudToScan",
        parameters=[config_dir],
        output='screen'
        )
    mapgrid = launch_ros.actions.Node(
        package="occ_grid_mapping",
        executable="mapgrid",
        parameters=[config_dir],
        output='screen'
        )
    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'config_dir',
            default_value=config_dir,
            description='Full path to mapping parameter file to load'),
        CloudToScan,
        mapgrid
            ])