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
CMAKE_SOURCE_DIR = /home/reinaldo/Documentos/PROJETOS/forcagame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/reinaldo/Documentos/PROJETOS/forcagame

# Include any dependencies generated for this target.
include CMakeFiles/forcagame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/forcagame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/forcagame.dir/flags.make

CMakeFiles/forcagame.dir/game.o: CMakeFiles/forcagame.dir/flags.make
CMakeFiles/forcagame.dir/game.o: game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reinaldo/Documentos/PROJETOS/forcagame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/forcagame.dir/game.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/forcagame.dir/game.o -c /home/reinaldo/Documentos/PROJETOS/forcagame/game.cpp

CMakeFiles/forcagame.dir/game.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/forcagame.dir/game.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reinaldo/Documentos/PROJETOS/forcagame/game.cpp > CMakeFiles/forcagame.dir/game.i

CMakeFiles/forcagame.dir/game.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/forcagame.dir/game.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reinaldo/Documentos/PROJETOS/forcagame/game.cpp -o CMakeFiles/forcagame.dir/game.s

CMakeFiles/forcagame.dir/game.o.requires:

.PHONY : CMakeFiles/forcagame.dir/game.o.requires

CMakeFiles/forcagame.dir/game.o.provides: CMakeFiles/forcagame.dir/game.o.requires
	$(MAKE) -f CMakeFiles/forcagame.dir/build.make CMakeFiles/forcagame.dir/game.o.provides.build
.PHONY : CMakeFiles/forcagame.dir/game.o.provides

CMakeFiles/forcagame.dir/game.o.provides.build: CMakeFiles/forcagame.dir/game.o


CMakeFiles/forcagame.dir/main.o: CMakeFiles/forcagame.dir/flags.make
CMakeFiles/forcagame.dir/main.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reinaldo/Documentos/PROJETOS/forcagame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/forcagame.dir/main.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/forcagame.dir/main.o -c /home/reinaldo/Documentos/PROJETOS/forcagame/main.cpp

CMakeFiles/forcagame.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/forcagame.dir/main.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reinaldo/Documentos/PROJETOS/forcagame/main.cpp > CMakeFiles/forcagame.dir/main.i

CMakeFiles/forcagame.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/forcagame.dir/main.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reinaldo/Documentos/PROJETOS/forcagame/main.cpp -o CMakeFiles/forcagame.dir/main.s

CMakeFiles/forcagame.dir/main.o.requires:

.PHONY : CMakeFiles/forcagame.dir/main.o.requires

CMakeFiles/forcagame.dir/main.o.provides: CMakeFiles/forcagame.dir/main.o.requires
	$(MAKE) -f CMakeFiles/forcagame.dir/build.make CMakeFiles/forcagame.dir/main.o.provides.build
.PHONY : CMakeFiles/forcagame.dir/main.o.provides

CMakeFiles/forcagame.dir/main.o.provides.build: CMakeFiles/forcagame.dir/main.o


# Object files for target forcagame
forcagame_OBJECTS = \
"CMakeFiles/forcagame.dir/game.o" \
"CMakeFiles/forcagame.dir/main.o"

# External object files for target forcagame
forcagame_EXTERNAL_OBJECTS =

forcagame: CMakeFiles/forcagame.dir/game.o
forcagame: CMakeFiles/forcagame.dir/main.o
forcagame: CMakeFiles/forcagame.dir/build.make
forcagame: CMakeFiles/forcagame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/reinaldo/Documentos/PROJETOS/forcagame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable forcagame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/forcagame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/forcagame.dir/build: forcagame

.PHONY : CMakeFiles/forcagame.dir/build

CMakeFiles/forcagame.dir/requires: CMakeFiles/forcagame.dir/game.o.requires
CMakeFiles/forcagame.dir/requires: CMakeFiles/forcagame.dir/main.o.requires

.PHONY : CMakeFiles/forcagame.dir/requires

CMakeFiles/forcagame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/forcagame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/forcagame.dir/clean

CMakeFiles/forcagame.dir/depend:
	cd /home/reinaldo/Documentos/PROJETOS/forcagame && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/reinaldo/Documentos/PROJETOS/forcagame /home/reinaldo/Documentos/PROJETOS/forcagame /home/reinaldo/Documentos/PROJETOS/forcagame /home/reinaldo/Documentos/PROJETOS/forcagame /home/reinaldo/Documentos/PROJETOS/forcagame/CMakeFiles/forcagame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/forcagame.dir/depend

