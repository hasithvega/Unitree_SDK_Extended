import os

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory

nav2_costmap_path = os.path.join(os.path.abspath('.'), 'config_files', 'nav2_costmap_config')

def generate_launch_description():
 
    inflation_param_dir = launch.substitutions.LaunchConfiguration(
        'inflation_param_dir',
        default=os.path.join(
            nav2_costmap_path,
            'inflation.yaml'))

    inflation = launch_ros.actions.Node(
        package='nav2_costmap',
        executable='nav2_costmap_inflation_layer',
        parameters=[{inflation_param_dir}],
        output='screen'
        )
    
    collision_checker = launch_ros.actions.Node(
        package='nav2_costmap',
        executable='nav2_costmap_collision_checker',
        parameters=[{inflation_param_dir}],
        output='screen'
        )

    static_layer = launch_ros.actions.Node(
        package='nav2_costmap',
        executable='nav2_costmap_static_layer',
        parameters=[{inflation_param_dir}],
        output='screen'
        )

    cloud_to_scan_for_costmap = launch_ros.actions.Node(
        package='nav2_costmap',
        executable='CloudToScanForCostmap',
        parameters=[{inflation_param_dir}],
        output='screen'
        )


    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'inflation_param_dir',
            default_value=inflation_param_dir,
            description='Full path to mapping parameter file to load'),
        inflation,
        collision_checker,
        cloud_to_scan_for_costmap,
        static_layer,
            ])