cmake_minimum_required(VERSION 2.4.6)
include($ENV{ROS_ROOT}/core/rosbuild/rosbuild.cmake)

# Set the build type.  Options are:
#  Coverage       : w/ debug symbols, w/o optimization, w/ code-coverage
#  Debug          : w/ debug symbols, w/o optimization
#  Release        : w/o debug symbols, w/ optimization
#  RelWithDebInfo : w/ debug symbols, w/ optimization
#  MinSizeRel     : w/o debug symbols, w/ optimization, stripped binaries
#set(ROS_BUILD_TYPE RelWithDebInfo)

rosbuild_init()

#set the default path for built executables to the "bin" directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#set the default path for built libraries to the "lib" directory
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

#uncomment if you have defined messages
rosbuild_genmsg()
#uncomment if you have defined services
#rosbuild_gensrv()

#common commands for building c++ executables and libraries
#rosbuild_add_library(${PROJECT_NAME} src/example.cpp)
#target_link_libraries(${PROJECT_NAME} another_library)
#rosbuild_add_boost_directories()
#rosbuild_link_boost(${PROJECT_NAME} thread)
include_directories(libjaus/include libopenJaus/include)
link_directories(libjaus/lib libopenJaus/lib)
#rosbuild_add_executable(comunicaciones src/interaction.cpp src/comunicaciones.cpp src/handlerJAUS.cpp)
rosbuild_add_executable(comunicaciones src/NodeROSCommunication.cpp src/ConverterTypes.cpp src/JausSubsystemVehicle.cpp src/HandlerJAUS.cpp src/communication.cpp src/interaction.cpp src/Files.cpp)
target_link_libraries(comunicaciones libjaus.so libopenJaus.so)
#target_link_libraries(example ${PROJECT_NAME})

