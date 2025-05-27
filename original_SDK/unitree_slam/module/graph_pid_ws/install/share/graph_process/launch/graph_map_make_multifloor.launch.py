import os
import sys
# from readline import get_history_item
# from sysconfig import get_path, get_path_names, get_paths

import launch
import launch_ros.actions
from launch.actions import IncludeLaunchDescription,TimerAction
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource

graph_process_path = os.path.join(os.path.abspath('.'), 'src', 'graph_process')

#####
#开始建图
#####
def generate_launch_description():
 

    # mapping_param_dir = launch.substitutions.LaunchConfiguration(
    #     'mapping_param_dir',
    #     default=os.path.join(
    #         get_package_share_directory('lio_sam_ros2'),
    #         'config',
    #         'params.yaml'))

    # rviz_config = os.path.join(os.path.abspath('.'), 'src', 'task', 'rviz2', 'bulid_map.rviz')

    # use_sim_time = launch.substitutions.LaunchConfiguration('use_sim_time', default= 'False' )

    graph_config_dir = launch.substitutions.LaunchConfiguration(
        'graph_config_dir',
        default=os.path.join(
            graph_process_path,  
            # get_package_share_directory('pid_tracing'),    # 获取 功能包 名称
            'config',
            'graph_params.yaml')) 


    graph_map_change = launch_ros.actions.Node(
        package='graph_process',
        executable='graph_make_map_new_multifloor',
        #parameters=[{mapping_param_dir},{'use_sim_time':use_sim_time}],
        parameters=[graph_config_dir],
        output='screen'
        )

    graph_map_make_self = launch_ros.actions.Node(
        package='graph_process',
        executable='graph_make_map_noedge_multifloor',
        parameters=[graph_config_dir],
        output='screen'
        )

    graph_visual = launch_ros.actions.Node(
        package='graph_process',
        executable='graph_visual',
        #parameters=[{mapping_param_dir},{'use_sim_time': use_sim_time}],
        output='screen'
        )
    remote_pid = launch_ros.actions.Node(
        package='pid_tracing',
        executable='remote_add_point',
        #parameters=[{mapping_param_dir},{'use_sim_time': use_sim_time}],
        output='screen'
        )
    # TimerAction(period=2.0,actions= [
    #         # IncludeLaunchDescription(
    #         #     PythonLaunchDescriptionSource([os.path.join(
    #         #         get_package_share_directory('nav2_costmap'), 'launch'),
    #         #         '/nav2_costmap_inflation_layer.launch.py'])
    #         # )
    #     ]),
        

    return launch.LaunchDescription([
        graph_map_make_self,
        # graph_map_change,
        graph_visual,
        # remote_pid
            ])