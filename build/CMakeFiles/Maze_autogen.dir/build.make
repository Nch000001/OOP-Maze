# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.29.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.29.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nch/Desktop/qt/untitled1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nch/Desktop/qt/untitled1/build

# Utility rule file for Maze_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/Maze_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Maze_autogen.dir/progress.make

CMakeFiles/Maze_autogen: Maze_autogen/timestamp

Maze_autogen/timestamp: /usr/local/share/qt/libexec/moc
Maze_autogen/timestamp: /usr/local/share/qt/libexec/uic
Maze_autogen/timestamp: CMakeFiles/Maze_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/nch/Desktop/qt/untitled1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Maze"
	/usr/local/Cellar/cmake/3.29.0/bin/cmake -E cmake_autogen /Users/nch/Desktop/qt/untitled1/build/CMakeFiles/Maze_autogen.dir/AutogenInfo.json ""
	/usr/local/Cellar/cmake/3.29.0/bin/cmake -E touch /Users/nch/Desktop/qt/untitled1/build/Maze_autogen/timestamp

Maze_autogen: CMakeFiles/Maze_autogen
Maze_autogen: Maze_autogen/timestamp
Maze_autogen: CMakeFiles/Maze_autogen.dir/build.make
.PHONY : Maze_autogen

# Rule to build all files generated by this target.
CMakeFiles/Maze_autogen.dir/build: Maze_autogen
.PHONY : CMakeFiles/Maze_autogen.dir/build

CMakeFiles/Maze_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Maze_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Maze_autogen.dir/clean

CMakeFiles/Maze_autogen.dir/depend:
	cd /Users/nch/Desktop/qt/untitled1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nch/Desktop/qt/untitled1 /Users/nch/Desktop/qt/untitled1 /Users/nch/Desktop/qt/untitled1/build /Users/nch/Desktop/qt/untitled1/build /Users/nch/Desktop/qt/untitled1/build/CMakeFiles/Maze_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Maze_autogen.dir/depend

