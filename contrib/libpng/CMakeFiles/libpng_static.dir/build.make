# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/samuel/build/1.08

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/samuel/build/1.08

# Include any dependencies generated for this target.
include contrib/libpng/CMakeFiles/libpng_static.dir/depend.make

# Include the progress variables for this target.
include contrib/libpng/CMakeFiles/libpng_static.dir/progress.make

# Include the compile flags for this target's objects.
include contrib/libpng/CMakeFiles/libpng_static.dir/flags.make

contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.o: contrib/libpng/pngwtran.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngwtran.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngwtran.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngwtran.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngwtran.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.o: contrib/libpng/pngset.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngset.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngset.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngset.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngset.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.o: contrib/libpng/pngrutil.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngrutil.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngrutil.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngrutil.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngrutil.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.o: contrib/libpng/pngrio.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngrio.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngrio.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngrio.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngrio.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.o: contrib/libpng/pngwutil.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngwutil.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngwutil.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngwutil.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngwutil.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.o: contrib/libpng/pngmem.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngmem.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngmem.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngmem.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngmem.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.o: contrib/libpng/pngerror.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngerror.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngerror.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngerror.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngerror.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.o: contrib/libpng/pngtrans.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngtrans.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngtrans.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngtrans.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngtrans.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/png.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/png.c.o: contrib/libpng/png.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/png.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/png.c.o   -c /home/samuel/build/1.08/contrib/libpng/png.c

contrib/libpng/CMakeFiles/libpng_static.dir/png.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/png.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/png.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/png.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/png.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/png.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/png.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/png.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/png.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/png.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/png.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/png.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.o: contrib/libpng/pngrtran.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngrtran.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngrtran.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngrtran.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngrtran.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.o: contrib/libpng/pngread.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngread.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngread.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngread.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngread.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.o: contrib/libpng/pngget.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_12)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngget.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngget.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngget.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngget.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.o: contrib/libpng/pngwio.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_13)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngwio.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngwio.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngwio.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngwio.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.o: contrib/libpng/pngtest.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_14)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngtest.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngtest.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngtest.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngtest.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.o: contrib/libpng/pngpread.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_15)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngpread.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngpread.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngpread.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngpread.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.o

contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.o: contrib/libpng/CMakeFiles/libpng_static.dir/flags.make
contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.o: contrib/libpng/pngwrite.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/samuel/build/1.08/CMakeFiles $(CMAKE_PROGRESS_16)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.o"
	cd /home/samuel/build/1.08/contrib/libpng && /usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libpng_static.dir/pngwrite.c.o   -c /home/samuel/build/1.08/contrib/libpng/pngwrite.c

contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpng_static.dir/pngwrite.c.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_PREPROCESSED_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpng_static.dir/pngwrite.c.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_C_CREATE_ASSEMBLY_SOURCE

contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.o.requires:
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.o.requires

contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.o.provides: contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.o.requires
	$(MAKE) -f contrib/libpng/CMakeFiles/libpng_static.dir/build.make contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.o.provides.build
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.o.provides

contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.o.provides.build: contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.o

# Object files for target libpng_static
libpng_static_OBJECTS = \
"CMakeFiles/libpng_static.dir/pngwtran.c.o" \
"CMakeFiles/libpng_static.dir/pngset.c.o" \
"CMakeFiles/libpng_static.dir/pngrutil.c.o" \
"CMakeFiles/libpng_static.dir/pngrio.c.o" \
"CMakeFiles/libpng_static.dir/pngwutil.c.o" \
"CMakeFiles/libpng_static.dir/pngmem.c.o" \
"CMakeFiles/libpng_static.dir/pngerror.c.o" \
"CMakeFiles/libpng_static.dir/pngtrans.c.o" \
"CMakeFiles/libpng_static.dir/png.c.o" \
"CMakeFiles/libpng_static.dir/pngrtran.c.o" \
"CMakeFiles/libpng_static.dir/pngread.c.o" \
"CMakeFiles/libpng_static.dir/pngget.c.o" \
"CMakeFiles/libpng_static.dir/pngwio.c.o" \
"CMakeFiles/libpng_static.dir/pngtest.c.o" \
"CMakeFiles/libpng_static.dir/pngpread.c.o" \
"CMakeFiles/libpng_static.dir/pngwrite.c.o"

# External object files for target libpng_static
libpng_static_EXTERNAL_OBJECTS =

contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/png.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.o
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/build.make
contrib/libpng/libpng.a: contrib/libpng/CMakeFiles/libpng_static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library libpng.a"
	cd /home/samuel/build/1.08/contrib/libpng && $(CMAKE_COMMAND) -P CMakeFiles/libpng_static.dir/cmake_clean_target.cmake
	cd /home/samuel/build/1.08/contrib/libpng && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libpng_static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
contrib/libpng/CMakeFiles/libpng_static.dir/build: contrib/libpng/libpng.a
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/build

contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngwtran.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngset.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngrutil.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngrio.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngwutil.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngmem.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngerror.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngtrans.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/png.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngrtran.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngread.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngget.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngwio.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngtest.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngpread.c.o.requires
contrib/libpng/CMakeFiles/libpng_static.dir/requires: contrib/libpng/CMakeFiles/libpng_static.dir/pngwrite.c.o.requires
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/requires

contrib/libpng/CMakeFiles/libpng_static.dir/clean:
	cd /home/samuel/build/1.08/contrib/libpng && $(CMAKE_COMMAND) -P CMakeFiles/libpng_static.dir/cmake_clean.cmake
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/clean

contrib/libpng/CMakeFiles/libpng_static.dir/depend:
	cd /home/samuel/build/1.08 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/samuel/build/1.08 /home/samuel/build/1.08/contrib/libpng /home/samuel/build/1.08 /home/samuel/build/1.08/contrib/libpng /home/samuel/build/1.08/contrib/libpng/CMakeFiles/libpng_static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : contrib/libpng/CMakeFiles/libpng_static.dir/depend
