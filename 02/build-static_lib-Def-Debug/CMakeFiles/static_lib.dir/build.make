# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/Dev/cources/02/static_lib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/Dev/cources/02/build-static_lib-Def-Debug

# Include any dependencies generated for this target.
include CMakeFiles/static_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/static_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/static_lib.dir/flags.make

CMakeFiles/static_lib.dir/main.cpp.o: CMakeFiles/static_lib.dir/flags.make
CMakeFiles/static_lib.dir/main.cpp.o: /home/user/Dev/cources/02/static_lib/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Dev/cources/02/build-static_lib-Def-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/static_lib.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/static_lib.dir/main.cpp.o -c /home/user/Dev/cources/02/static_lib/main.cpp

CMakeFiles/static_lib.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/static_lib.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Dev/cources/02/static_lib/main.cpp > CMakeFiles/static_lib.dir/main.cpp.i

CMakeFiles/static_lib.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/static_lib.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Dev/cources/02/static_lib/main.cpp -o CMakeFiles/static_lib.dir/main.cpp.s

CMakeFiles/static_lib.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/static_lib.dir/main.cpp.o.requires

CMakeFiles/static_lib.dir/main.cpp.o.provides: CMakeFiles/static_lib.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/static_lib.dir/build.make CMakeFiles/static_lib.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/static_lib.dir/main.cpp.o.provides

CMakeFiles/static_lib.dir/main.cpp.o.provides.build: CMakeFiles/static_lib.dir/main.cpp.o


# Object files for target static_lib
static_lib_OBJECTS = \
"CMakeFiles/static_lib.dir/main.cpp.o"

# External object files for target static_lib
static_lib_EXTERNAL_OBJECTS =

static_lib: CMakeFiles/static_lib.dir/main.cpp.o
static_lib: CMakeFiles/static_lib.dir/build.make
static_lib: /home/user/Downloads/SDL2-build/libSDL2d.a
static_lib: CMakeFiles/static_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Dev/cources/02/build-static_lib-Def-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable static_lib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/static_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/static_lib.dir/build: static_lib

.PHONY : CMakeFiles/static_lib.dir/build

CMakeFiles/static_lib.dir/requires: CMakeFiles/static_lib.dir/main.cpp.o.requires

.PHONY : CMakeFiles/static_lib.dir/requires

CMakeFiles/static_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/static_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/static_lib.dir/clean

CMakeFiles/static_lib.dir/depend:
	cd /home/user/Dev/cources/02/build-static_lib-Def-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Dev/cources/02/static_lib /home/user/Dev/cources/02/static_lib /home/user/Dev/cources/02/build-static_lib-Def-Debug /home/user/Dev/cources/02/build-static_lib-Def-Debug /home/user/Dev/cources/02/build-static_lib-Def-Debug/CMakeFiles/static_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/static_lib.dir/depend

