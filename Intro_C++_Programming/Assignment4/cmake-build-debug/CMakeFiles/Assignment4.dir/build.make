# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /home/ubuntu/Downloads/clion-2017.2.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/ubuntu/Downloads/clion-2017.2.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/ubuntu/Desktop/CompSci/CS 1570 Redo_and_Review/Assignment4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ubuntu/Desktop/CompSci/CS 1570 Redo_and_Review/Assignment4/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assignment4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment4.dir/flags.make

CMakeFiles/Assignment4.dir/main.cpp.o: CMakeFiles/Assignment4.dir/flags.make
CMakeFiles/Assignment4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ubuntu/Desktop/CompSci/CS 1570 Redo_and_Review/Assignment4/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment4.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment4.dir/main.cpp.o -c "/home/ubuntu/Desktop/CompSci/CS 1570 Redo_and_Review/Assignment4/main.cpp"

CMakeFiles/Assignment4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment4.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ubuntu/Desktop/CompSci/CS 1570 Redo_and_Review/Assignment4/main.cpp" > CMakeFiles/Assignment4.dir/main.cpp.i

CMakeFiles/Assignment4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment4.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ubuntu/Desktop/CompSci/CS 1570 Redo_and_Review/Assignment4/main.cpp" -o CMakeFiles/Assignment4.dir/main.cpp.s

CMakeFiles/Assignment4.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Assignment4.dir/main.cpp.o.requires

CMakeFiles/Assignment4.dir/main.cpp.o.provides: CMakeFiles/Assignment4.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Assignment4.dir/build.make CMakeFiles/Assignment4.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Assignment4.dir/main.cpp.o.provides

CMakeFiles/Assignment4.dir/main.cpp.o.provides.build: CMakeFiles/Assignment4.dir/main.cpp.o


# Object files for target Assignment4
Assignment4_OBJECTS = \
"CMakeFiles/Assignment4.dir/main.cpp.o"

# External object files for target Assignment4
Assignment4_EXTERNAL_OBJECTS =

Assignment4: CMakeFiles/Assignment4.dir/main.cpp.o
Assignment4: CMakeFiles/Assignment4.dir/build.make
Assignment4: CMakeFiles/Assignment4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ubuntu/Desktop/CompSci/CS 1570 Redo_and_Review/Assignment4/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Assignment4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment4.dir/build: Assignment4

.PHONY : CMakeFiles/Assignment4.dir/build

CMakeFiles/Assignment4.dir/requires: CMakeFiles/Assignment4.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Assignment4.dir/requires

CMakeFiles/Assignment4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment4.dir/clean

CMakeFiles/Assignment4.dir/depend:
	cd "/home/ubuntu/Desktop/CompSci/CS 1570 Redo_and_Review/Assignment4/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ubuntu/Desktop/CompSci/CS 1570 Redo_and_Review/Assignment4" "/home/ubuntu/Desktop/CompSci/CS 1570 Redo_and_Review/Assignment4" "/home/ubuntu/Desktop/CompSci/CS 1570 Redo_and_Review/Assignment4/cmake-build-debug" "/home/ubuntu/Desktop/CompSci/CS 1570 Redo_and_Review/Assignment4/cmake-build-debug" "/home/ubuntu/Desktop/CompSci/CS 1570 Redo_and_Review/Assignment4/cmake-build-debug/CMakeFiles/Assignment4.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assignment4.dir/depend
