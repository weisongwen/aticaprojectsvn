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

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU

# Include any dependencies generated for this target.
include CMakeFiles/example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/example.dir/flags.make

CMakeFiles/example.dir/src/main.cpp.o: CMakeFiles/example.dir/flags.make
CMakeFiles/example.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/example.dir/src/main.cpp.o: manifest.xml
CMakeFiles/example.dir/src/main.cpp.o: /opt/ros/groovy/share/cpp_common/package.xml
CMakeFiles/example.dir/src/main.cpp.o: /opt/ros/groovy/share/rostime/package.xml
CMakeFiles/example.dir/src/main.cpp.o: /opt/ros/groovy/share/roscpp_traits/package.xml
CMakeFiles/example.dir/src/main.cpp.o: /opt/ros/groovy/share/roscpp_serialization/package.xml
CMakeFiles/example.dir/src/main.cpp.o: /opt/ros/groovy/share/genmsg/package.xml
CMakeFiles/example.dir/src/main.cpp.o: /opt/ros/groovy/share/genpy/package.xml
CMakeFiles/example.dir/src/main.cpp.o: /opt/ros/groovy/share/message_runtime/package.xml
CMakeFiles/example.dir/src/main.cpp.o: /opt/ros/groovy/share/rosconsole/package.xml
CMakeFiles/example.dir/src/main.cpp.o: /opt/ros/groovy/share/std_msgs/package.xml
CMakeFiles/example.dir/src/main.cpp.o: /opt/ros/groovy/share/rosgraph_msgs/package.xml
CMakeFiles/example.dir/src/main.cpp.o: /opt/ros/groovy/share/xmlrpcpp/package.xml
CMakeFiles/example.dir/src/main.cpp.o: /opt/ros/groovy/share/roscpp/package.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/example.dir/src/main.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/example.dir/src/main.cpp.o -c /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU/src/main.cpp

CMakeFiles/example.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.dir/src/main.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU/src/main.cpp > CMakeFiles/example.dir/src/main.cpp.i

CMakeFiles/example.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.dir/src/main.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU/src/main.cpp -o CMakeFiles/example.dir/src/main.cpp.s

CMakeFiles/example.dir/src/main.cpp.o.requires:
.PHONY : CMakeFiles/example.dir/src/main.cpp.o.requires

CMakeFiles/example.dir/src/main.cpp.o.provides: CMakeFiles/example.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/example.dir/build.make CMakeFiles/example.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/example.dir/src/main.cpp.o.provides

CMakeFiles/example.dir/src/main.cpp.o.provides.build: CMakeFiles/example.dir/src/main.cpp.o

CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: CMakeFiles/example.dir/flags.make
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: src/XSensMTi700Driver.cpp
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: manifest.xml
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/cpp_common/package.xml
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/rostime/package.xml
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/roscpp_traits/package.xml
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/roscpp_serialization/package.xml
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/genmsg/package.xml
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/genpy/package.xml
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/message_runtime/package.xml
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/rosconsole/package.xml
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/std_msgs/package.xml
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/rosgraph_msgs/package.xml
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/xmlrpcpp/package.xml
CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o: /opt/ros/groovy/share/roscpp/package.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o -c /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU/src/XSensMTi700Driver.cpp

CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU/src/XSensMTi700Driver.cpp > CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.i

CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU/src/XSensMTi700Driver.cpp -o CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.s

CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o.requires:
.PHONY : CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o.requires

CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o.provides: CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o.requires
	$(MAKE) -f CMakeFiles/example.dir/build.make CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o.provides.build
.PHONY : CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o.provides

CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o.provides.build: CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o

# Object files for target example
example_OBJECTS = \
"CMakeFiles/example.dir/src/main.cpp.o" \
"CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o"

# External object files for target example
example_EXTERNAL_OBJECTS =

bin/example: CMakeFiles/example.dir/src/main.cpp.o
bin/example: CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o
bin/example: CMakeFiles/example.dir/build.make
bin/example: CMakeFiles/example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable bin/example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/example.dir/build: bin/example
.PHONY : CMakeFiles/example.dir/build

CMakeFiles/example.dir/requires: CMakeFiles/example.dir/src/main.cpp.o.requires
CMakeFiles/example.dir/requires: CMakeFiles/example.dir/src/XSensMTi700Driver.cpp.o.requires
.PHONY : CMakeFiles/example.dir/requires

CMakeFiles/example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/example.dir/clean

CMakeFiles/example.dir/depend:
	cd /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU /home/atica/catkin_ws/src/CITIUS/Pruebas/TEST_GPS_IMU/CMakeFiles/example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/example.dir/depend

