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
CMAKE_SOURCE_DIR = /home/atica/catkin_ws/src/TestXML

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/atica/catkin_ws/src/TestXML

# Include any dependencies generated for this target.
include CMakeFiles/hola.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hola.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hola.dir/flags.make

CMakeFiles/hola.dir/src/mainTest.cpp.o: CMakeFiles/hola.dir/flags.make
CMakeFiles/hola.dir/src/mainTest.cpp.o: src/mainTest.cpp
CMakeFiles/hola.dir/src/mainTest.cpp.o: manifest.xml
CMakeFiles/hola.dir/src/mainTest.cpp.o: /opt/ros/groovy/share/cpp_common/package.xml
CMakeFiles/hola.dir/src/mainTest.cpp.o: /opt/ros/groovy/share/rostime/package.xml
CMakeFiles/hola.dir/src/mainTest.cpp.o: /opt/ros/groovy/share/roscpp_traits/package.xml
CMakeFiles/hola.dir/src/mainTest.cpp.o: /opt/ros/groovy/share/roscpp_serialization/package.xml
CMakeFiles/hola.dir/src/mainTest.cpp.o: /opt/ros/groovy/share/genmsg/package.xml
CMakeFiles/hola.dir/src/mainTest.cpp.o: /opt/ros/groovy/share/genpy/package.xml
CMakeFiles/hola.dir/src/mainTest.cpp.o: /opt/ros/groovy/share/message_runtime/package.xml
CMakeFiles/hola.dir/src/mainTest.cpp.o: /opt/ros/groovy/share/rosconsole/package.xml
CMakeFiles/hola.dir/src/mainTest.cpp.o: /opt/ros/groovy/share/std_msgs/package.xml
CMakeFiles/hola.dir/src/mainTest.cpp.o: /opt/ros/groovy/share/rosgraph_msgs/package.xml
CMakeFiles/hola.dir/src/mainTest.cpp.o: /opt/ros/groovy/share/xmlrpcpp/package.xml
CMakeFiles/hola.dir/src/mainTest.cpp.o: /opt/ros/groovy/share/roscpp/package.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/atica/catkin_ws/src/TestXML/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/hola.dir/src/mainTest.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/hola.dir/src/mainTest.cpp.o -c /home/atica/catkin_ws/src/TestXML/src/mainTest.cpp

CMakeFiles/hola.dir/src/mainTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hola.dir/src/mainTest.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/atica/catkin_ws/src/TestXML/src/mainTest.cpp > CMakeFiles/hola.dir/src/mainTest.cpp.i

CMakeFiles/hola.dir/src/mainTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hola.dir/src/mainTest.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/atica/catkin_ws/src/TestXML/src/mainTest.cpp -o CMakeFiles/hola.dir/src/mainTest.cpp.s

CMakeFiles/hola.dir/src/mainTest.cpp.o.requires:
.PHONY : CMakeFiles/hola.dir/src/mainTest.cpp.o.requires

CMakeFiles/hola.dir/src/mainTest.cpp.o.provides: CMakeFiles/hola.dir/src/mainTest.cpp.o.requires
	$(MAKE) -f CMakeFiles/hola.dir/build.make CMakeFiles/hola.dir/src/mainTest.cpp.o.provides.build
.PHONY : CMakeFiles/hola.dir/src/mainTest.cpp.o.provides

CMakeFiles/hola.dir/src/mainTest.cpp.o.provides.build: CMakeFiles/hola.dir/src/mainTest.cpp.o

# Object files for target hola
hola_OBJECTS = \
"CMakeFiles/hola.dir/src/mainTest.cpp.o"

# External object files for target hola
hola_EXTERNAL_OBJECTS =

bin/hola: CMakeFiles/hola.dir/src/mainTest.cpp.o
bin/hola: CMakeFiles/hola.dir/build.make
bin/hola: CMakeFiles/hola.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable bin/hola"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hola.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hola.dir/build: bin/hola
.PHONY : CMakeFiles/hola.dir/build

CMakeFiles/hola.dir/requires: CMakeFiles/hola.dir/src/mainTest.cpp.o.requires
.PHONY : CMakeFiles/hola.dir/requires

CMakeFiles/hola.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hola.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hola.dir/clean

CMakeFiles/hola.dir/depend:
	cd /home/atica/catkin_ws/src/TestXML && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/atica/catkin_ws/src/TestXML /home/atica/catkin_ws/src/TestXML /home/atica/catkin_ws/src/TestXML /home/atica/catkin_ws/src/TestXML /home/atica/catkin_ws/src/TestXML/CMakeFiles/hola.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hola.dir/depend

