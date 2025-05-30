# FAQs for SLAM package

intros...

## Announcement

For the upgrading information of firmware 1.1.7 about developing.

|         | DDS SDK                                                                                           | Python | ROS2 |
| ------- | ------------------------------------------------------------------------------------------------- | ------ | ---- |
| Support | ✅New interface[here](https://support.unitree.com/home/en/developer/Motion_Services_Interface_V2.0). | ❌     | ❌   |

More informations about the module not supported by new firmware.

* Adjust the body height.
* Remote control on the App (Vertical-screen operable controller in "Functions")
* Auto entering locking mode when you carry the dog in arm. (Beware of robotic dog leg kicks to avoid injury)
* Aruco Recharge service interface


## Unsorted

### Q: No response from the dog when using AI mode or upgrade to 1.1.7.

⚠️This answer is provided by the R&D department, but havn't been tested.

This issue is caused by the internal control logic of AI mode or the mixing mode. Have you notice that, when you control the dog with the high level cmd or controller, the body of the dog will start to move towards, then it will step on after a small delay, different from the normal mode.

The SLAM demo is designed for the normal mode. There's been a long time since the last update. To solve the issue, you try to increase the KI parameter for the Y direction at `original_SDK\unitree_slam\module\graph_pid_ws\config_files\local_planner_config\params.yaml`:

```python
    # y方向
    PID_y_Limmax: 30.0
    PID_y_Vmax: 0.1
    PID_y_KP: 1.0     
    PID_y_KI: 0.004 # Change this one
    PID_y_KD: 1.0
```

### Q: Can I install L2 LiDAR on the robot dog with L1 installed on it?

Only support firmware >=1.1.7.
