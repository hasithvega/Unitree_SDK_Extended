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

## ToDo List

* [ ] Finish this readme.
* [ ] Migrate G1 extend program (I've wrote that, didn't test yet).
* [ ] Docs for G1
* [ ] Support Go2
* [ ] Support SLAM demo for Go2 and B2
* [ ] Support B2
* [ ] Support Z1
