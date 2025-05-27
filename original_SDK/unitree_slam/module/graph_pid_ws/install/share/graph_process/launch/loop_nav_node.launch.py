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

# graph_process_path = os.path.join(os.path.abspath('.'), 'src', 'graph_process')
graph_process_path = os.path.join(os.path.abspath('.'), 'config_files', 'graph_process_config')

#####
#开始循环导航
###
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
            # 'config',
            'graph_params.yaml'))


    nav_loop = launch_ros.actions.Node(
        package='graph_process',
        executable='pub_goal_charging_new',
        #parameters=[{mapping_param_dir},{'use_sim_time':use_sim_time}],
        parameters=[graph_config_dir],
        output='screen'
        )

   

    return launch.LaunchDescription([
        # launch.actions.DeclareLaunchArgument(
        #     'mapping_param_dir',
        #     default_value=mapping_param_dir,
        #     description='Full path to mapping parameter file to load'),
        nav_loop,
        # graph_pub,
        # featurex,   
        # map_opt,
        # tf_static,
        # occ_grid_map,
        #rviz_node,
            ])