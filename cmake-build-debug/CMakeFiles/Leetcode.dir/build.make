# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/chentt/CLionProjects/Leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/chentt/CLionProjects/Leetcode/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Leetcode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Leetcode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Leetcode.dir/flags.make

CMakeFiles/Leetcode.dir/Stack/20_validParentheses_II.cpp.o: CMakeFiles/Leetcode.dir/flags.make
CMakeFiles/Leetcode.dir/Stack/20_validParentheses_II.cpp.o: ../Stack/20_validParentheses_II.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chentt/CLionProjects/Leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Leetcode.dir/Stack/20_validParentheses_II.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Leetcode.dir/Stack/20_validParentheses_II.cpp.o -c /Users/chentt/CLionProjects/Leetcode/Stack/20_validParentheses_II.cpp

CMakeFiles/Leetcode.dir/Stack/20_validParentheses_II.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Leetcode.dir/Stack/20_validParentheses_II.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chentt/CLionProjects/Leetcode/Stack/20_validParentheses_II.cpp > CMakeFiles/Leetcode.dir/Stack/20_validParentheses_II.cpp.i

CMakeFiles/Leetcode.dir/Stack/20_validParentheses_II.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Leetcode.dir/Stack/20_validParentheses_II.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chentt/CLionProjects/Leetcode/Stack/20_validParentheses_II.cpp -o CMakeFiles/Leetcode.dir/Stack/20_validParentheses_II.cpp.s

# Object files for target Leetcode
Leetcode_OBJECTS = \
"CMakeFiles/Leetcode.dir/Stack/20_validParentheses_II.cpp.o"

# External object files for target Leetcode
Leetcode_EXTERNAL_OBJECTS =

Leetcode: CMakeFiles/Leetcode.dir/Stack/20_validParentheses_II.cpp.o
Leetcode: CMakeFiles/Leetcode.dir/build.make
Leetcode: CMakeFiles/Leetcode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/chentt/CLionProjects/Leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Leetcode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Leetcode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Leetcode.dir/build: Leetcode

.PHONY : CMakeFiles/Leetcode.dir/build

CMakeFiles/Leetcode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Leetcode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Leetcode.dir/clean

CMakeFiles/Leetcode.dir/depend:
	cd /Users/chentt/CLionProjects/Leetcode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/chentt/CLionProjects/Leetcode /Users/chentt/CLionProjects/Leetcode /Users/chentt/CLionProjects/Leetcode/cmake-build-debug /Users/chentt/CLionProjects/Leetcode/cmake-build-debug /Users/chentt/CLionProjects/Leetcode/cmake-build-debug/CMakeFiles/Leetcode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Leetcode.dir/depend

