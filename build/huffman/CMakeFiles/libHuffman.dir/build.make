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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jiangmingrui/桌面/cmake/hmz

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jiangmingrui/桌面/cmake/hmz/build

# Include any dependencies generated for this target.
include huffman/CMakeFiles/libHuffman.dir/depend.make

# Include the progress variables for this target.
include huffman/CMakeFiles/libHuffman.dir/progress.make

# Include the compile flags for this target's objects.
include huffman/CMakeFiles/libHuffman.dir/flags.make

huffman/CMakeFiles/libHuffman.dir/hufman.cpp.o: huffman/CMakeFiles/libHuffman.dir/flags.make
huffman/CMakeFiles/libHuffman.dir/hufman.cpp.o: ../huffman/hufman.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jiangmingrui/桌面/cmake/hmz/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object huffman/CMakeFiles/libHuffman.dir/hufman.cpp.o"
	cd /home/jiangmingrui/桌面/cmake/hmz/build/huffman && /bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libHuffman.dir/hufman.cpp.o -c /home/jiangmingrui/桌面/cmake/hmz/huffman/hufman.cpp

huffman/CMakeFiles/libHuffman.dir/hufman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libHuffman.dir/hufman.cpp.i"
	cd /home/jiangmingrui/桌面/cmake/hmz/build/huffman && /bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jiangmingrui/桌面/cmake/hmz/huffman/hufman.cpp > CMakeFiles/libHuffman.dir/hufman.cpp.i

huffman/CMakeFiles/libHuffman.dir/hufman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libHuffman.dir/hufman.cpp.s"
	cd /home/jiangmingrui/桌面/cmake/hmz/build/huffman && /bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jiangmingrui/桌面/cmake/hmz/huffman/hufman.cpp -o CMakeFiles/libHuffman.dir/hufman.cpp.s

# Object files for target libHuffman
libHuffman_OBJECTS = \
"CMakeFiles/libHuffman.dir/hufman.cpp.o"

# External object files for target libHuffman
libHuffman_EXTERNAL_OBJECTS =

huffman/liblibHuffman.a: huffman/CMakeFiles/libHuffman.dir/hufman.cpp.o
huffman/liblibHuffman.a: huffman/CMakeFiles/libHuffman.dir/build.make
huffman/liblibHuffman.a: huffman/CMakeFiles/libHuffman.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jiangmingrui/桌面/cmake/hmz/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblibHuffman.a"
	cd /home/jiangmingrui/桌面/cmake/hmz/build/huffman && $(CMAKE_COMMAND) -P CMakeFiles/libHuffman.dir/cmake_clean_target.cmake
	cd /home/jiangmingrui/桌面/cmake/hmz/build/huffman && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libHuffman.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
huffman/CMakeFiles/libHuffman.dir/build: huffman/liblibHuffman.a

.PHONY : huffman/CMakeFiles/libHuffman.dir/build

huffman/CMakeFiles/libHuffman.dir/clean:
	cd /home/jiangmingrui/桌面/cmake/hmz/build/huffman && $(CMAKE_COMMAND) -P CMakeFiles/libHuffman.dir/cmake_clean.cmake
.PHONY : huffman/CMakeFiles/libHuffman.dir/clean

huffman/CMakeFiles/libHuffman.dir/depend:
	cd /home/jiangmingrui/桌面/cmake/hmz/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jiangmingrui/桌面/cmake/hmz /home/jiangmingrui/桌面/cmake/hmz/huffman /home/jiangmingrui/桌面/cmake/hmz/build /home/jiangmingrui/桌面/cmake/hmz/build/huffman /home/jiangmingrui/桌面/cmake/hmz/build/huffman/CMakeFiles/libHuffman.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : huffman/CMakeFiles/libHuffman.dir/depend

