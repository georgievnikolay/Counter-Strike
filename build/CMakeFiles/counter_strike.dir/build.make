# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /snap/cmake/846/bin/cmake

# The command to remove a file.
RM = /snap/cmake/846/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nikolay/Desktop/Code-Academy/Counter-Strike

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nikolay/Desktop/Code-Academy/Counter-Strike/build

# Include any dependencies generated for this target.
include CMakeFiles/counter_strike.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/counter_strike.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/counter_strike.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/counter_strike.dir/flags.make

CMakeFiles/counter_strike.dir/src/main.c.o: CMakeFiles/counter_strike.dir/flags.make
CMakeFiles/counter_strike.dir/src/main.c.o: ../src/main.c
CMakeFiles/counter_strike.dir/src/main.c.o: CMakeFiles/counter_strike.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nikolay/Desktop/Code-Academy/Counter-Strike/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/counter_strike.dir/src/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/counter_strike.dir/src/main.c.o -MF CMakeFiles/counter_strike.dir/src/main.c.o.d -o CMakeFiles/counter_strike.dir/src/main.c.o -c /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/main.c

CMakeFiles/counter_strike.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/counter_strike.dir/src/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/main.c > CMakeFiles/counter_strike.dir/src/main.c.i

CMakeFiles/counter_strike.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/counter_strike.dir/src/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/main.c -o CMakeFiles/counter_strike.dir/src/main.c.s

CMakeFiles/counter_strike.dir/src/BattleField.c.o: CMakeFiles/counter_strike.dir/flags.make
CMakeFiles/counter_strike.dir/src/BattleField.c.o: ../src/BattleField.c
CMakeFiles/counter_strike.dir/src/BattleField.c.o: CMakeFiles/counter_strike.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nikolay/Desktop/Code-Academy/Counter-Strike/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/counter_strike.dir/src/BattleField.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/counter_strike.dir/src/BattleField.c.o -MF CMakeFiles/counter_strike.dir/src/BattleField.c.o.d -o CMakeFiles/counter_strike.dir/src/BattleField.c.o -c /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/BattleField.c

CMakeFiles/counter_strike.dir/src/BattleField.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/counter_strike.dir/src/BattleField.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/BattleField.c > CMakeFiles/counter_strike.dir/src/BattleField.c.i

CMakeFiles/counter_strike.dir/src/BattleField.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/counter_strike.dir/src/BattleField.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/BattleField.c -o CMakeFiles/counter_strike.dir/src/BattleField.c.s

CMakeFiles/counter_strike.dir/src/Player.c.o: CMakeFiles/counter_strike.dir/flags.make
CMakeFiles/counter_strike.dir/src/Player.c.o: ../src/Player.c
CMakeFiles/counter_strike.dir/src/Player.c.o: CMakeFiles/counter_strike.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nikolay/Desktop/Code-Academy/Counter-Strike/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/counter_strike.dir/src/Player.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/counter_strike.dir/src/Player.c.o -MF CMakeFiles/counter_strike.dir/src/Player.c.o.d -o CMakeFiles/counter_strike.dir/src/Player.c.o -c /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/Player.c

CMakeFiles/counter_strike.dir/src/Player.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/counter_strike.dir/src/Player.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/Player.c > CMakeFiles/counter_strike.dir/src/Player.c.i

CMakeFiles/counter_strike.dir/src/Player.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/counter_strike.dir/src/Player.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/Player.c -o CMakeFiles/counter_strike.dir/src/Player.c.s

CMakeFiles/counter_strike.dir/src/Pistol.c.o: CMakeFiles/counter_strike.dir/flags.make
CMakeFiles/counter_strike.dir/src/Pistol.c.o: ../src/Pistol.c
CMakeFiles/counter_strike.dir/src/Pistol.c.o: CMakeFiles/counter_strike.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nikolay/Desktop/Code-Academy/Counter-Strike/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/counter_strike.dir/src/Pistol.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/counter_strike.dir/src/Pistol.c.o -MF CMakeFiles/counter_strike.dir/src/Pistol.c.o.d -o CMakeFiles/counter_strike.dir/src/Pistol.c.o -c /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/Pistol.c

CMakeFiles/counter_strike.dir/src/Pistol.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/counter_strike.dir/src/Pistol.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/Pistol.c > CMakeFiles/counter_strike.dir/src/Pistol.c.i

CMakeFiles/counter_strike.dir/src/Pistol.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/counter_strike.dir/src/Pistol.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/Pistol.c -o CMakeFiles/counter_strike.dir/src/Pistol.c.s

CMakeFiles/counter_strike.dir/src/Vector.c.o: CMakeFiles/counter_strike.dir/flags.make
CMakeFiles/counter_strike.dir/src/Vector.c.o: ../src/Vector.c
CMakeFiles/counter_strike.dir/src/Vector.c.o: CMakeFiles/counter_strike.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nikolay/Desktop/Code-Academy/Counter-Strike/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/counter_strike.dir/src/Vector.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/counter_strike.dir/src/Vector.c.o -MF CMakeFiles/counter_strike.dir/src/Vector.c.o.d -o CMakeFiles/counter_strike.dir/src/Vector.c.o -c /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/Vector.c

CMakeFiles/counter_strike.dir/src/Vector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/counter_strike.dir/src/Vector.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/Vector.c > CMakeFiles/counter_strike.dir/src/Vector.c.i

CMakeFiles/counter_strike.dir/src/Vector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/counter_strike.dir/src/Vector.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nikolay/Desktop/Code-Academy/Counter-Strike/src/Vector.c -o CMakeFiles/counter_strike.dir/src/Vector.c.s

# Object files for target counter_strike
counter_strike_OBJECTS = \
"CMakeFiles/counter_strike.dir/src/main.c.o" \
"CMakeFiles/counter_strike.dir/src/BattleField.c.o" \
"CMakeFiles/counter_strike.dir/src/Player.c.o" \
"CMakeFiles/counter_strike.dir/src/Pistol.c.o" \
"CMakeFiles/counter_strike.dir/src/Vector.c.o"

# External object files for target counter_strike
counter_strike_EXTERNAL_OBJECTS =

counter_strike: CMakeFiles/counter_strike.dir/src/main.c.o
counter_strike: CMakeFiles/counter_strike.dir/src/BattleField.c.o
counter_strike: CMakeFiles/counter_strike.dir/src/Player.c.o
counter_strike: CMakeFiles/counter_strike.dir/src/Pistol.c.o
counter_strike: CMakeFiles/counter_strike.dir/src/Vector.c.o
counter_strike: CMakeFiles/counter_strike.dir/build.make
counter_strike: CMakeFiles/counter_strike.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nikolay/Desktop/Code-Academy/Counter-Strike/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable counter_strike"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/counter_strike.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/counter_strike.dir/build: counter_strike
.PHONY : CMakeFiles/counter_strike.dir/build

CMakeFiles/counter_strike.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/counter_strike.dir/cmake_clean.cmake
.PHONY : CMakeFiles/counter_strike.dir/clean

CMakeFiles/counter_strike.dir/depend:
	cd /home/nikolay/Desktop/Code-Academy/Counter-Strike/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nikolay/Desktop/Code-Academy/Counter-Strike /home/nikolay/Desktop/Code-Academy/Counter-Strike /home/nikolay/Desktop/Code-Academy/Counter-Strike/build /home/nikolay/Desktop/Code-Academy/Counter-Strike/build /home/nikolay/Desktop/Code-Academy/Counter-Strike/build/CMakeFiles/counter_strike.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/counter_strike.dir/depend

