import os

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
 
    merger_map_param_dir = launch.substitutions.LaunchConfiguration(
        'merger_map_param_dir',
        default=os.path.join(
            get_package_share_directory('merger_map'),
            'config',
            'params.yaml'))


    merger_map_node = launch_ros.actions.Node(
        package='merger_map',
        executable='merger_map_node',
        parameters=[{merger_map_param_dir}],
        output='screen',
        # prefix = ['deepin-terminal -e gdb -ex run --args']
        # prefix=['xterm -e gdb -ex run --args'] #xterm -e

        )


    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'merger_map_param_dir',
            default_value=merger_map_param_dir,
            description='Full path to mapping parameter file to load'),
            merger_map_node,

            ])