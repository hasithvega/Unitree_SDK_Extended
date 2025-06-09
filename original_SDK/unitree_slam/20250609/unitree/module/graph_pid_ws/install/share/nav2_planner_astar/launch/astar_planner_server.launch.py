import os

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory
from launch.actions import IncludeLaunchDescription,TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
def generate_launch_description():
 
    navfn_planner_astar_param = launch.substitutions.LaunchConfiguration(
        'navfn_planner_astar_param',
        default=os.path.join(
            get_package_share_directory('nav2_planner_astar'),
            'config',
            'config_srv.yaml'))


    navfn_planner_astar_node = launch_ros.actions.Node(
        package='nav2_planner_astar',
        executable='navfn_planner_astar',
        parameters=[{navfn_planner_astar_param}],
        output='screen'
        )

    costmap = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('nav2_costmap'), 'launch'),
            '/nav2_costmap_inflation_layer.launch.py'])
    )
    #加载地图
    multiMap = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('multimap_server'), 'launch'),
            '/load_multimap.launch.py'])
    )


    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'navfn_planner_astar_param',
            default_value=navfn_planner_astar_param,
            description='Full path to mapping parameter file to load'),
            navfn_planner_astar_node,
            costmap,
            multiMap,
            ])