## Unitree SDK2 Extended

This project serves as an extension package for the Unitree SDKs Family, built upon Unitree SDK2, Unitree SLAM, Unitree Z1 SDK, and others. Please note this repository is unofficial and its contents are not officially supported by Unitree.

The project includes the following components:

* Refactoring/repackaging certain elements from Unitree SDKs into more user-friendly formats (i.e., sample extension packages)
* Bundling frequently used extension packages into libraries (this will be gradually implemented)
* Creating explanatory documentation and development guides for some sample codes in Unitree SDKs
* Providing additional explanations for common development issues

This project currently/plans to support the following Unitree devices:
**Unitree G1, H1, Go2, B2, D1, and Z1.**
*Note: Basic models (Air/Pro variants) across all devices are **not** supported.*
If development progresses smoothly, support may extend to **L1, L2**, and some older devices like **K1 and AlienGo**.

Since this project builds upon Unitree Technology's original SDK suite, it **does not support** any devices that cannot be modified or reprogrammed. Additionally, **no assistance will be provided for jailbreaking or firmware cracking.** Your understanding is appreciated.

## Current State

▶️On Going ✅Finished and checked ⚠️Finished but haven't tested ❌Haven't create the folder

* ▶️Docs
  * ▶️G1
    * ▶️High Level
      * ▶️Locomotion
      * ✅Arm
    * ❌Low Level
  * ❌Go2
  * ❌... (More Models)
* ▶️Extended Example
  * ▶️G1
    * ✅High Level
      * ✅Locomotion(g1_global_highlevel.cpp)
      * ✅Arm(g1_global_armcontroller.cpp)
      * ✅Combination between Locomotion and arm(g1_loco_with_arm_example.cpp)
    * ▶️Low Level
      * ⚠️Low level universal controller(g1_low_universal_example.cpp)
  * ❌Go2
  * ❌... (More Models)
* ❌Extended Libraries
* ▶️FAQs

## **Announcement**

* Update 2025/5/29: Due to end-of-month warehouse management policies, our department is unable to borrow available robots for test. Currently, the new program cannot be tested temporarily, so I'll focus on advancing the documentation first.

## **Contact Information**

If there are any issues for this project, please raise them in the issue, don't ask for the official help. This project is not supported by Unitree.

If you encounter any issues while using the robot/robotic dog, please utilize Unitree's [customer service platform](https://global-serviceconsole.unitree.com/), select **"Manual Consultation"**, and create a new ticket for assistance.

 ( *Note: Do not use "Complain" for non-experience-related issues. "Manual Consultation" includes a chat window for ongoing communication, whereas "Complain" does not. Both have the same internal response priority, but if your issue requires continuous discussion, you will still be advised to submit a ticket even if initially placed under "Complain."* )

Technical support operates from **9:00 AM to 9:00 PM (UTC+8)**, with responses typically starting around **9:30 AM** and concluding by **9:40 PM**. 

*Rest assured, no ticket will be overlooked. If you haven’t received a reply, please wait patiently.*

When the ticket interface displays **"Assigned technical support engineer [Name] for you"**, it means a support engineer has begun working on your issue. *They may not respond immediately, as some unprecedented problems require local reproduction and testing first.*

If you believe the issue has been resolved, please inform the support team so they can **close the ticket**. Your cooperation in this process is greatly appreciated—it helps a lot.

For **urgent issues**, please contact: **support@unitree.com**. When technical support reaches out via email, remember to **CC support@unitree.com** in your replies.

## ToDo List

* [ ] Finish this readme.
* [ ] Migrate G1 extend program (I've wrote that, didn't test yet).
* [ ] Docs for G1
* [ ] Support Go2
* [ ] Support SLAM demo for Go2 and B2
* [ ] Support B2
* [ ] Support Z1
