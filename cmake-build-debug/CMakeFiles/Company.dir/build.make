# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\sajja\CLionProjects\Company

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\sajja\CLionProjects\Company\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Company.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Company.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Company.dir/flags.make

CMakeFiles/Company.dir/main.cpp.obj: CMakeFiles/Company.dir/flags.make
CMakeFiles/Company.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\sajja\CLionProjects\Company\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Company.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Company.dir\main.cpp.obj -c C:\Users\sajja\CLionProjects\Company\main.cpp

CMakeFiles/Company.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Company.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sajja\CLionProjects\Company\main.cpp > CMakeFiles\Company.dir\main.cpp.i

CMakeFiles/Company.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Company.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\sajja\CLionProjects\Company\main.cpp -o CMakeFiles\Company.dir\main.cpp.s

CMakeFiles/Company.dir/Address.cpp.obj: CMakeFiles/Company.dir/flags.make
CMakeFiles/Company.dir/Address.cpp.obj: ../Address.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\sajja\CLionProjects\Company\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Company.dir/Address.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Company.dir\Address.cpp.obj -c C:\Users\sajja\CLionProjects\Company\Address.cpp

CMakeFiles/Company.dir/Address.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Company.dir/Address.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sajja\CLionProjects\Company\Address.cpp > CMakeFiles\Company.dir\Address.cpp.i

CMakeFiles/Company.dir/Address.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Company.dir/Address.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\sajja\CLionProjects\Company\Address.cpp -o CMakeFiles\Company.dir\Address.cpp.s

# Object files for target Company
Company_OBJECTS = \
"CMakeFiles/Company.dir/main.cpp.obj" \
"CMakeFiles/Company.dir/Address.cpp.obj"

# External object files for target Company
Company_EXTERNAL_OBJECTS =

Company.exe: CMakeFiles/Company.dir/main.cpp.obj
Company.exe: CMakeFiles/Company.dir/Address.cpp.obj
Company.exe: CMakeFiles/Company.dir/build.make
Company.exe: CMakeFiles/Company.dir/linklibs.rsp
Company.exe: CMakeFiles/Company.dir/objects1.rsp
Company.exe: CMakeFiles/Company.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\sajja\CLionProjects\Company\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Company.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Company.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Company.dir/build: Company.exe

.PHONY : CMakeFiles/Company.dir/build

CMakeFiles/Company.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Company.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Company.dir/clean

CMakeFiles/Company.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\sajja\CLionProjects\Company C:\Users\sajja\CLionProjects\Company C:\Users\sajja\CLionProjects\Company\cmake-build-debug C:\Users\sajja\CLionProjects\Company\cmake-build-debug C:\Users\sajja\CLionProjects\Company\cmake-build-debug\CMakeFiles\Company.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Company.dir/depend

