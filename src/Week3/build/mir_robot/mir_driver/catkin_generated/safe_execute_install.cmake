execute_process(COMMAND "/home/shao/Desktop/Gitlab/furp-agv-23summer/src/Week3/build/mir_robot/mir_driver/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/shao/Desktop/Gitlab/furp-agv-23summer/src/Week3/build/mir_robot/mir_driver/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
