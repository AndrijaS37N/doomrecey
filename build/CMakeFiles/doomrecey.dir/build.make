# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.14.5/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.14.5/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/andrijadjuric/Sites/GitHub/doomrecey

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/andrijadjuric/Sites/GitHub/doomrecey/build

# Include any dependencies generated for this target.
include CMakeFiles/doomrecey.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/doomrecey.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/doomrecey.dir/flags.make

CMakeFiles/doomrecey.dir/main.c.o: CMakeFiles/doomrecey.dir/flags.make
CMakeFiles/doomrecey.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/andrijadjuric/Sites/GitHub/doomrecey/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/doomrecey.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/doomrecey.dir/main.c.o   -c /Users/andrijadjuric/Sites/GitHub/doomrecey/main.c

CMakeFiles/doomrecey.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/doomrecey.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/andrijadjuric/Sites/GitHub/doomrecey/main.c > CMakeFiles/doomrecey.dir/main.c.i

CMakeFiles/doomrecey.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/doomrecey.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/andrijadjuric/Sites/GitHub/doomrecey/main.c -o CMakeFiles/doomrecey.dir/main.c.s

CMakeFiles/doomrecey.dir/simple_io.c.o: CMakeFiles/doomrecey.dir/flags.make
CMakeFiles/doomrecey.dir/simple_io.c.o: ../simple_io.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/andrijadjuric/Sites/GitHub/doomrecey/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/doomrecey.dir/simple_io.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/doomrecey.dir/simple_io.c.o   -c /Users/andrijadjuric/Sites/GitHub/doomrecey/simple_io.c

CMakeFiles/doomrecey.dir/simple_io.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/doomrecey.dir/simple_io.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/andrijadjuric/Sites/GitHub/doomrecey/simple_io.c > CMakeFiles/doomrecey.dir/simple_io.c.i

CMakeFiles/doomrecey.dir/simple_io.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/doomrecey.dir/simple_io.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/andrijadjuric/Sites/GitHub/doomrecey/simple_io.c -o CMakeFiles/doomrecey.dir/simple_io.c.s

# Object files for target doomrecey
doomrecey_OBJECTS = \
"CMakeFiles/doomrecey.dir/main.c.o" \
"CMakeFiles/doomrecey.dir/simple_io.c.o"

# External object files for target doomrecey
doomrecey_EXTERNAL_OBJECTS =

doomrecey: CMakeFiles/doomrecey.dir/main.c.o
doomrecey: CMakeFiles/doomrecey.dir/simple_io.c.o
doomrecey: CMakeFiles/doomrecey.dir/build.make
doomrecey: CMakeFiles/doomrecey.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/andrijadjuric/Sites/GitHub/doomrecey/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable doomrecey"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/doomrecey.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/doomrecey.dir/build: doomrecey

.PHONY : CMakeFiles/doomrecey.dir/build

CMakeFiles/doomrecey.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/doomrecey.dir/cmake_clean.cmake
.PHONY : CMakeFiles/doomrecey.dir/clean

CMakeFiles/doomrecey.dir/depend:
	cd /Users/andrijadjuric/Sites/GitHub/doomrecey/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andrijadjuric/Sites/GitHub/doomrecey /Users/andrijadjuric/Sites/GitHub/doomrecey /Users/andrijadjuric/Sites/GitHub/doomrecey/build /Users/andrijadjuric/Sites/GitHub/doomrecey/build /Users/andrijadjuric/Sites/GitHub/doomrecey/build/CMakeFiles/doomrecey.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/doomrecey.dir/depend

