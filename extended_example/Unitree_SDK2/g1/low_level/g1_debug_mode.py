from unitree_sdk2py.comm.motion_switcher.motion_switcher_client import MotionSwitcherClient
from unitree_sdk2py.core.channel import ChannelFactoryInitialize

import time

def enter_debug(msc: MotionSwitcherClient, debug=True):
    if debug:
        status, result = msc.CheckMode()
        while result['name']:
            msc.ReleaseMode()
            status, result = msc.CheckMode()
            time.sleep(1)
    else:
        status, result = msc.SelectMode('ai')
    return status, result

if __name__ == '__main__':
    ChannelFactoryInitialize(0, 'eth0')

    msc = MotionSwitcherClient()
    msc.SetTimeout(5.0)
    msc.Init()
    
    status, result = enter_debug(msc, debug=True)  # True: Enter Debug Mode  False: Exit Debug Mode
    print(status, result)