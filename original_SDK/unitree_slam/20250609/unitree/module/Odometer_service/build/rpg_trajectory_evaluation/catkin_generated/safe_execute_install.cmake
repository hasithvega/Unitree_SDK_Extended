execute_process(COMMAND "/unitree/module/Odometer_service/build/rpg_trajectory_evaluation/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/unitree/module/Odometer_service/build/rpg_trajectory_evaluation/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
