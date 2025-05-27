import os

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():

    empty_params = launch.substitutions.LaunchConfiguration(
        'occmapping_params',
        default=os.path.join(
            get_package_share_directory('empty_map'),
            'params',
            'empty_map_params.yaml'))


    empty_params_node = launch_ros.actions.Node(
        package='empty_map',
        executable='empty_map_node',
        parameters=[{empty_params}],
        output='screen'
    )

    test_empty_params_node = launch_ros.actions.Node(
        package='empty_map',
        executable='test_map',
        parameters=[{empty_params}],
        output='screen'
    )

    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'merger_map_param_dir',
            default_value=empty_params,
            description='Full path to empty_map parameter file to load'),
        empty_params_node,
        test_empty_params_node,

    ])
