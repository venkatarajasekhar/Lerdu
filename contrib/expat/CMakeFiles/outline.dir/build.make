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
CMAKE_SOURCE_DIR = /home/samuel/build/1.08/contrib/expat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/samuel/build/1.08/contrib/expat

# Include any dependencies generated for this target.
include CMakeFiles/outline.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/outline.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/outline.dir/flags.make

CMakeFiles/outline.dir/examples/outline.c.o: CMakeFiles/outline.dir/flags.make
CMakeFiles/outline.dir/examples/outline.c.o: examples/outline.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/contrib/expat/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/outline.dir/examples/outline.c.o"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/outline.dir/examples/outline.c.o   -c /home/samuel/build/1.08/contrib/expat/examples/outline.c

CMakeFiles/outline.dir/examples/outline.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/outline.dir/examples/outline.c.i"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/samuel/build/1.08/contrib/expat/examples/outline.c > CMakeFiles/outline.dir/examples/outline.c.i

CMakeFiles/outline.dir/examples/outline.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/outline.dir/examples/outline.c.s"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/samuel/build/1.08/contrib/expat/examples/outline.c -o CMakeFiles/outline.dir/examples/outline.c.s

CMakeFiles/outline.dir/examples/outline.c.o.requires:
.PHONY : CMakeFiles/outline.dir/examples/outline.c.o.requires

CMakeFiles/outline.dir/examples/outline.c.o.provides: CMakeFiles/outline.dir/examples/outline.c.o.requires
	$(MAKE) -f CMakeFiles/outline.dir/build.make CMakeFiles/outline.dir/examples/outline.c.o.provides.build
.PHONY : CMakeFiles/outline.dir/examples/outline.c.o.provides

CMakeFiles/outline.dir/examples/outline.c.o.provides.build: CMakeFiles/outline.dir/examples/outline.c.o

# Object files for target outline
outline_OBJECTS = \
"CMakeFiles/outline.dir/examples/outline.c.o"

# External object files for target outline
outline_EXTERNAL_OBJECTS =

outline: CMakeFiles/outline.dir/examples/outline.c.o
outline: libexpat.so
outline: CMakeFiles/outline.dir/build.make
outline: CMakeFiles/outline.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable outline"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/outline.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/outline.dir/build: outline
.PHONY : CMakeFiles/outline.dir/build

CMakeFiles/outline.dir/requires: CMakeFiles/outline.dir/examples/outline.c.o.requires
.PHONY : CMakeFiles/outline.dir/requires

CMakeFiles/outline.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/outline.dir/cmake_clean.cmake
.PHONY : CMakeFiles/outline.dir/clean

CMakeFiles/outline.dir/depend:
	cd /home/samuel/build/1.08/contrib/expat && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/samuel/build/1.08/contrib/expat /home/samuel/build/1.08/contrib/expat /home/samuel/build/1.08/contrib/expat /home/samuel/build/1.08/contrib/expat /home/samuel/build/1.08/contrib/expat/CMakeFiles/outline.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/outline.dir/depend
