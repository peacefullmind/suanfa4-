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
CMAKE_SOURCE_DIR = D:\PAIXUC++\mergePro

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\PAIXUC++\mergePro\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mergePro.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mergePro.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mergePro.dir/flags.make

CMakeFiles/mergePro.dir/main.cpp.obj: CMakeFiles/mergePro.dir/flags.make
CMakeFiles/mergePro.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\PAIXUC++\mergePro\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mergePro.dir/main.cpp.obj"
	D:\SOFTWARE\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mergePro.dir\main.cpp.obj -c D:\PAIXUC++\mergePro\main.cpp

CMakeFiles/mergePro.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mergePro.dir/main.cpp.i"
	D:\SOFTWARE\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\PAIXUC++\mergePro\main.cpp > CMakeFiles\mergePro.dir\main.cpp.i

CMakeFiles/mergePro.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mergePro.dir/main.cpp.s"
	D:\SOFTWARE\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\PAIXUC++\mergePro\main.cpp -o CMakeFiles\mergePro.dir\main.cpp.s

# Object files for target mergePro
mergePro_OBJECTS = \
"CMakeFiles/mergePro.dir/main.cpp.obj"

# External object files for target mergePro
mergePro_EXTERNAL_OBJECTS =

mergePro.exe: CMakeFiles/mergePro.dir/main.cpp.obj
mergePro.exe: CMakeFiles/mergePro.dir/build.make
mergePro.exe: CMakeFiles/mergePro.dir/linklibs.rsp
mergePro.exe: CMakeFiles/mergePro.dir/objects1.rsp
mergePro.exe: CMakeFiles/mergePro.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\PAIXUC++\mergePro\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mergePro.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mergePro.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mergePro.dir/build: mergePro.exe

.PHONY : CMakeFiles/mergePro.dir/build

CMakeFiles/mergePro.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mergePro.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mergePro.dir/clean

CMakeFiles/mergePro.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\PAIXUC++\mergePro D:\PAIXUC++\mergePro D:\PAIXUC++\mergePro\cmake-build-debug D:\PAIXUC++\mergePro\cmake-build-debug D:\PAIXUC++\mergePro\cmake-build-debug\CMakeFiles\mergePro.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mergePro.dir/depend

