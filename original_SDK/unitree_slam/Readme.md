## Unitree SLAM package

| Version  | Information                                                                                                                                  |
| -------- | -------------------------------------------------------------------------------------------------------------------------------------------- |
| 20250410 | Optimize the obstacle avoidance effect of xt16;                                                                                              |
| 20250606 | Adapt to the latest version of operation control SDK, UnitreeSDK 2.0; Added the setting of default operation control status for SLAM module; |

## Announcement

Updated 2025/06/09:

For the updating of 20250606.

The SLAM update applies to the entire docking station system, so be sure to back up before updating:

If you've already performed SLAM navigation, simply save the following files from this directory:

/unitree/module/graph_pid_ws/config_files/:

graph_process_config and lio_sam_config

Just back up these two files and restore them after the update—leave everything else unchanged.

## What is this?

It's not opened by unitree on github, but you can actually download here: [Go2 SDK-Module Update](https://support.unitree.com/home/en/developer/module_update) at "Expansion Dock Module Update Package".
