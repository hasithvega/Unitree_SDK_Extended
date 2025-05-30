# FAQs for Go2

....

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

## Unsorted.

### Q: How can I turn off the sport client to use low cmd after upgrade to 1.1.7?

Turn off the `mcf` service on the Unitree Go app or with Motion Switcher Client.

You can infer to the `go2_stand_example` for how to operate the service in program.
