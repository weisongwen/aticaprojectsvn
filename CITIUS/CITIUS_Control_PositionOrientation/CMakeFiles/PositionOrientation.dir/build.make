# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation

# Include any dependencies generated for this target.
include CMakeFiles/PositionOrientation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PositionOrientation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PositionOrientation.dir/flags.make

CMakeFiles/PositionOrientation.dir/src/main.cpp.o: CMakeFiles/PositionOrientation.dir/flags.make
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: manifest.xml
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: /opt/ros/groovy/share/cpp_common/package.xml
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: /opt/ros/groovy/share/rostime/package.xml
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: /opt/ros/groovy/share/roscpp_traits/package.xml
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: /opt/ros/groovy/share/roscpp_serialization/package.xml
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: /opt/ros/groovy/share/genmsg/package.xml
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: /opt/ros/groovy/share/genpy/package.xml
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: /opt/ros/groovy/share/message_runtime/package.xml
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: /opt/ros/groovy/share/rosconsole/package.xml
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: /opt/ros/groovy/share/std_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: /opt/ros/groovy/share/rosgraph_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: /opt/ros/groovy/share/xmlrpcpp/package.xml
CMakeFiles/PositionOrientation.dir/src/main.cpp.o: /opt/ros/groovy/share/roscpp/package.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/PositionOrientation.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/PositionOrientation.dir/src/main.cpp.o -c /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/main.cpp

CMakeFiles/PositionOrientation.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PositionOrientation.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/main.cpp > CMakeFiles/PositionOrientation.dir/src/main.cpp.i

CMakeFiles/PositionOrientation.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PositionOrientation.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/main.cpp -o CMakeFiles/PositionOrientation.dir/src/main.cpp.s

CMakeFiles/PositionOrientation.dir/src/main.cpp.o.requires:
.PHONY : CMakeFiles/PositionOrientation.dir/src/main.cpp.o.requires

CMakeFiles/PositionOrientation.dir/src/main.cpp.o.provides: CMakeFiles/PositionOrientation.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/PositionOrientation.dir/build.make CMakeFiles/PositionOrientation.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/PositionOrientation.dir/src/main.cpp.o.provides

CMakeFiles/PositionOrientation.dir/src/main.cpp.o.provides.build: CMakeFiles/PositionOrientation.dir/src/main.cpp.o

CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: CMakeFiles/PositionOrientation.dir/flags.make
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: src/RosNodePositionOrientation.cpp
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: manifest.xml
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: /opt/ros/groovy/share/cpp_common/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: /opt/ros/groovy/share/rostime/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: /opt/ros/groovy/share/roscpp_traits/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: /opt/ros/groovy/share/roscpp_serialization/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: /opt/ros/groovy/share/genmsg/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: /opt/ros/groovy/share/genpy/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: /opt/ros/groovy/share/message_runtime/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: /opt/ros/groovy/share/rosconsole/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: /opt/ros/groovy/share/std_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: /opt/ros/groovy/share/rosgraph_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: /opt/ros/groovy/share/xmlrpcpp/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o: /opt/ros/groovy/share/roscpp/package.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o -c /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/RosNodePositionOrientation.cpp

CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/RosNodePositionOrientation.cpp > CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.i

CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/RosNodePositionOrientation.cpp -o CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.s

CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o.requires:
.PHONY : CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o.requires

CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o.provides: CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o.requires
	$(MAKE) -f CMakeFiles/PositionOrientation.dir/build.make CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o.provides.build
.PHONY : CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o.provides

CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o.provides.build: CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o

CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: CMakeFiles/PositionOrientation.dir/flags.make
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: src/XSensMTi700Driver.cpp
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: manifest.xml
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/cpp_common/package.xml
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/rostime/package.xml
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/roscpp_traits/package.xml
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/roscpp_serialization/package.xml
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/genmsg/package.xml
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/genpy/package.xml
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/message_runtime/package.xml
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/rosconsole/package.xml
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/std_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/rosgraph_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/xmlrpcpp/package.xml
CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/roscpp/package.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o -c /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/XSensMTi700Driver.cpp

CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/XSensMTi700Driver.cpp > CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.i

CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/XSensMTi700Driver.cpp -o CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.s

CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o.requires:
.PHONY : CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o.requires

CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o.provides: CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o.requires
	$(MAKE) -f CMakeFiles/PositionOrientation.dir/build.make CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o.provides.build
.PHONY : CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o.provides

CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o.provides.build: CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o

CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: CMakeFiles/PositionOrientation.dir/flags.make
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: src/TraxAHRSModuleDriver.cpp
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: manifest.xml
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: /opt/ros/groovy/share/cpp_common/package.xml
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: /opt/ros/groovy/share/rostime/package.xml
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: /opt/ros/groovy/share/roscpp_traits/package.xml
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: /opt/ros/groovy/share/roscpp_serialization/package.xml
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: /opt/ros/groovy/share/genmsg/package.xml
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: /opt/ros/groovy/share/genpy/package.xml
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: /opt/ros/groovy/share/message_runtime/package.xml
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: /opt/ros/groovy/share/rosconsole/package.xml
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: /opt/ros/groovy/share/std_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: /opt/ros/groovy/share/rosgraph_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: /opt/ros/groovy/share/xmlrpcpp/package.xml
CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o: /opt/ros/groovy/share/roscpp/package.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o -c /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/TraxAHRSModuleDriver.cpp

CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/TraxAHRSModuleDriver.cpp > CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.i

CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/TraxAHRSModuleDriver.cpp -o CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.s

CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o.requires:
.PHONY : CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o.requires

CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o.provides: CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o.requires
	$(MAKE) -f CMakeFiles/PositionOrientation.dir/build.make CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o.provides.build
.PHONY : CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o.provides

CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o.provides.build: CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o

CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: CMakeFiles/PositionOrientation.dir/flags.make
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: src/crc16calc.cpp
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: manifest.xml
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: /opt/ros/groovy/share/cpp_common/package.xml
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: /opt/ros/groovy/share/rostime/package.xml
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: /opt/ros/groovy/share/roscpp_traits/package.xml
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: /opt/ros/groovy/share/roscpp_serialization/package.xml
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: /opt/ros/groovy/share/genmsg/package.xml
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: /opt/ros/groovy/share/genpy/package.xml
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: /opt/ros/groovy/share/message_runtime/package.xml
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: /opt/ros/groovy/share/rosconsole/package.xml
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: /opt/ros/groovy/share/std_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: /opt/ros/groovy/share/rosgraph_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: /opt/ros/groovy/share/xmlrpcpp/package.xml
CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o: /opt/ros/groovy/share/roscpp/package.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o -c /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/crc16calc.cpp

CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/crc16calc.cpp > CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.i

CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/crc16calc.cpp -o CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.s

CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o.requires:
.PHONY : CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o.requires

CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o.provides: CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o.requires
	$(MAKE) -f CMakeFiles/PositionOrientation.dir/build.make CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o.provides.build
.PHONY : CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o.provides

CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o.provides.build: CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o

CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: CMakeFiles/PositionOrientation.dir/flags.make
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: src/RosNode.cpp
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: manifest.xml
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: /opt/ros/groovy/share/cpp_common/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: /opt/ros/groovy/share/rostime/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: /opt/ros/groovy/share/roscpp_traits/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: /opt/ros/groovy/share/roscpp_serialization/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: /opt/ros/groovy/share/genmsg/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: /opt/ros/groovy/share/genpy/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: /opt/ros/groovy/share/message_runtime/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: /opt/ros/groovy/share/rosconsole/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: /opt/ros/groovy/share/std_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: /opt/ros/groovy/share/rosgraph_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: /opt/ros/groovy/share/xmlrpcpp/package.xml
CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o: /opt/ros/groovy/share/roscpp/package.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o -c /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/RosNode.cpp

CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/RosNode.cpp > CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.i

CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/RosNode.cpp -o CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.s

CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o.requires:
.PHONY : CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o.requires

CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o.provides: CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o.requires
	$(MAKE) -f CMakeFiles/PositionOrientation.dir/build.make CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o.provides.build
.PHONY : CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o.provides

CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o.provides.build: CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o

CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: CMakeFiles/PositionOrientation.dir/flags.make
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: src/Timer.cpp
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: manifest.xml
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: /opt/ros/groovy/share/cpp_common/package.xml
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: /opt/ros/groovy/share/rostime/package.xml
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: /opt/ros/groovy/share/roscpp_traits/package.xml
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: /opt/ros/groovy/share/roscpp_serialization/package.xml
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: /opt/ros/groovy/share/genmsg/package.xml
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: /opt/ros/groovy/share/genpy/package.xml
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: /opt/ros/groovy/share/message_runtime/package.xml
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: /opt/ros/groovy/share/rosconsole/package.xml
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: /opt/ros/groovy/share/std_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: /opt/ros/groovy/share/rosgraph_msgs/package.xml
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: /opt/ros/groovy/share/xmlrpcpp/package.xml
CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o: /opt/ros/groovy/share/roscpp/package.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o -c /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/Timer.cpp

CMakeFiles/PositionOrientation.dir/src/Timer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PositionOrientation.dir/src/Timer.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/Timer.cpp > CMakeFiles/PositionOrientation.dir/src/Timer.cpp.i

CMakeFiles/PositionOrientation.dir/src/Timer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PositionOrientation.dir/src/Timer.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/src/Timer.cpp -o CMakeFiles/PositionOrientation.dir/src/Timer.cpp.s

CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o.requires:
.PHONY : CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o.requires

CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o.provides: CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o.requires
	$(MAKE) -f CMakeFiles/PositionOrientation.dir/build.make CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o.provides.build
.PHONY : CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o.provides

CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o.provides.build: CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o

# Object files for target PositionOrientation
PositionOrientation_OBJECTS = \
"CMakeFiles/PositionOrientation.dir/src/main.cpp.o" \
"CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o" \
"CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o" \
"CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o" \
"CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o" \
"CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o" \
"CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o"

# External object files for target PositionOrientation
PositionOrientation_EXTERNAL_OBJECTS =

bin/PositionOrientation: CMakeFiles/PositionOrientation.dir/src/main.cpp.o
bin/PositionOrientation: CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o
bin/PositionOrientation: CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o
bin/PositionOrientation: CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o
bin/PositionOrientation: CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o
bin/PositionOrientation: CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o
bin/PositionOrientation: CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o
bin/PositionOrientation: CMakeFiles/PositionOrientation.dir/build.make
bin/PositionOrientation: CMakeFiles/PositionOrientation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable bin/PositionOrientation"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PositionOrientation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PositionOrientation.dir/build: bin/PositionOrientation
.PHONY : CMakeFiles/PositionOrientation.dir/build

CMakeFiles/PositionOrientation.dir/requires: CMakeFiles/PositionOrientation.dir/src/main.cpp.o.requires
CMakeFiles/PositionOrientation.dir/requires: CMakeFiles/PositionOrientation.dir/src/RosNodePositionOrientation.cpp.o.requires
CMakeFiles/PositionOrientation.dir/requires: CMakeFiles/PositionOrientation.dir/src/XSensMTi700Driver.cpp.o.requires
CMakeFiles/PositionOrientation.dir/requires: CMakeFiles/PositionOrientation.dir/src/TraxAHRSModuleDriver.cpp.o.requires
CMakeFiles/PositionOrientation.dir/requires: CMakeFiles/PositionOrientation.dir/src/crc16calc.cpp.o.requires
CMakeFiles/PositionOrientation.dir/requires: CMakeFiles/PositionOrientation.dir/src/RosNode.cpp.o.requires
CMakeFiles/PositionOrientation.dir/requires: CMakeFiles/PositionOrientation.dir/src/Timer.cpp.o.requires
.PHONY : CMakeFiles/PositionOrientation.dir/requires

CMakeFiles/PositionOrientation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PositionOrientation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PositionOrientation.dir/clean

CMakeFiles/PositionOrientation.dir/depend:
	cd /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_PositionOrientation/CMakeFiles/PositionOrientation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PositionOrientation.dir/depend

