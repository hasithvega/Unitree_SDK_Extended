# FAQs for SLAM package

intros...

## Announcement

For Go2, currently 1.1.7 firmware is not supported for SLAM package.

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
