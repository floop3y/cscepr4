execute_process(COMMAND "/code/catkin_ws/build/lane_control/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/code/catkin_ws/build/lane_control/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
