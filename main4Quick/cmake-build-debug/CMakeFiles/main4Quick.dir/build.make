# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\SOFTWARE\Program Files2\Clion\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\SOFTWARE\Program Files2\Clion\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\PAIXUC++\main4Quick

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\PAIXUC++\main4Quick\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/main4Quick.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main4Quick.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main4Quick.dir/flags.make

CMakeFiles/main4Quick.dir/main.cpp.obj: CMakeFiles/main4Quick.dir/flags.make
CMakeFiles/main4Quick.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\PAIXUC++\main4Quick\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main4Quick.dir/main.cpp.obj"
	D:\SOFTWARE\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\main4Quick.dir\main.cpp.obj -c D:\PAIXUC++\main4Quick\main.cpp

CMakeFiles/main4Quick.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main4Quick.dir/main.cpp.i"
	D:\SOFTWARE\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\PAIXUC++\main4Quick\main.cpp > CMakeFiles\main4Quick.dir\main.cpp.i

CMakeFiles/main4Quick.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main4Quick.dir/main.cpp.s"
	D:\SOFTWARE\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\PAIXUC++\main4Quick\main.cpp -o CMakeFiles\main4Quick.dir\main.cpp.s

# Object files for target main4Quick
main4Quick_OBJECTS = \
"CMakeFiles/main4Quick.dir/main.cpp.obj"

# External object files for target main4Quick
main4Quick_EXTERNAL_OBJECTS =

main4Quick.exe: CMakeFiles/main4Quick.dir/main.cpp.obj
main4Quick.exe: CMakeFiles/main4Quick.dir/build.make
main4Quick.exe: CMakeFiles/main4Quick.dir/linklibs.rsp
main4Quick.exe: CMakeFiles/main4Quick.dir/objects1.rsp
main4Quick.exe: CMakeFiles/main4Quick.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\PAIXUC++\main4Quick\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable main4Quick.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main4Quick.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main4Quick.dir/build: main4Quick.exe

.PHONY : CMakeFiles/main4Quick.dir/build

CMakeFiles/main4Quick.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main4Quick.dir\cmake_clean.cmake
.PHONY : CMakeFiles/main4Quick.dir/clean

CMakeFiles/main4Quick.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\PAIXUC++\main4Quick D:\PAIXUC++\main4Quick D:\PAIXUC++\main4Quick\cmake-build-debug D:\PAIXUC++\main4Quick\cmake-build-debug D:\PAIXUC++\main4Quick\cmake-build-debug\CMakeFiles\main4Quick.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main4Quick.dir/depend

