# Detail Updating Information.

Updating between 20250410 to 20250606.

1. Adapt to the latest version of operation control SDK, UnitreeSDK 2.0;
2. Added the setting of default operation control status for SLAM module;

The SLAM update applies to the entire docking station system, so be sure to back up before updating:

If you've already performed SLAM navigation, simply save the following files from this directory:

/unitree/module/graph_pid_ws/config_files/:

graph_process_config and lio_sam_config

Just back up these two files and restore them after the update—leave everything else unchanged.

## What's new?

\lib and \services haven't been renew.

Main changes at \module\graph_pid_ws\config_files & \module\graph_pid_ws\install

* config_files\local_planner_config\params.yaml
  * Smooth Ratio, DogLenth/Width, PID paramenters. Adapt for the Motion Services Interface V2.0.
* install\lib\go2_control_by_sdk\send_cmd
  * Bin lib for Motion Service Interface.
* install\lib\go2_control_by_sdk\local_planner\to_charge
  * Updated new automaticly docking interface.
* install\lib\go2_control_by_sdk\python3.8\site-packages
* install\share\dog_control\launch\dogcontrol.launch.py
  * Add a new parament to send_cmd: "100".
* install\share\task\rviz2\costmap.rviz
  * Add /Path1 into Property Tree Width
  * Tree Height change from 363 -> 719
