# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_SOURCE_DIR = /Users/alexandreroulin/pool_cpp/day05/ex05

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex05.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex05.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex05.dir/flags.make

CMakeFiles/ex05.dir/srcs/Bureaucrat.cpp.o: CMakeFiles/ex05.dir/flags.make
CMakeFiles/ex05.dir/srcs/Bureaucrat.cpp.o: ../srcs/Bureaucrat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex05.dir/srcs/Bureaucrat.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex05.dir/srcs/Bureaucrat.cpp.o -c /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/Bureaucrat.cpp

CMakeFiles/ex05.dir/srcs/Bureaucrat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex05.dir/srcs/Bureaucrat.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/Bureaucrat.cpp > CMakeFiles/ex05.dir/srcs/Bureaucrat.cpp.i

CMakeFiles/ex05.dir/srcs/Bureaucrat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex05.dir/srcs/Bureaucrat.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/Bureaucrat.cpp -o CMakeFiles/ex05.dir/srcs/Bureaucrat.cpp.s

CMakeFiles/ex05.dir/srcs/Form.cpp.o: CMakeFiles/ex05.dir/flags.make
CMakeFiles/ex05.dir/srcs/Form.cpp.o: ../srcs/Form.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex05.dir/srcs/Form.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex05.dir/srcs/Form.cpp.o -c /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/Form.cpp

CMakeFiles/ex05.dir/srcs/Form.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex05.dir/srcs/Form.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/Form.cpp > CMakeFiles/ex05.dir/srcs/Form.cpp.i

CMakeFiles/ex05.dir/srcs/Form.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex05.dir/srcs/Form.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/Form.cpp -o CMakeFiles/ex05.dir/srcs/Form.cpp.s

CMakeFiles/ex05.dir/srcs/Intern.cpp.o: CMakeFiles/ex05.dir/flags.make
CMakeFiles/ex05.dir/srcs/Intern.cpp.o: ../srcs/Intern.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex05.dir/srcs/Intern.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex05.dir/srcs/Intern.cpp.o -c /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/Intern.cpp

CMakeFiles/ex05.dir/srcs/Intern.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex05.dir/srcs/Intern.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/Intern.cpp > CMakeFiles/ex05.dir/srcs/Intern.cpp.i

CMakeFiles/ex05.dir/srcs/Intern.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex05.dir/srcs/Intern.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/Intern.cpp -o CMakeFiles/ex05.dir/srcs/Intern.cpp.s

CMakeFiles/ex05.dir/srcs/main.cpp.o: CMakeFiles/ex05.dir/flags.make
CMakeFiles/ex05.dir/srcs/main.cpp.o: ../srcs/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex05.dir/srcs/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex05.dir/srcs/main.cpp.o -c /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/main.cpp

CMakeFiles/ex05.dir/srcs/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex05.dir/srcs/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/main.cpp > CMakeFiles/ex05.dir/srcs/main.cpp.i

CMakeFiles/ex05.dir/srcs/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex05.dir/srcs/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/main.cpp -o CMakeFiles/ex05.dir/srcs/main.cpp.s

CMakeFiles/ex05.dir/srcs/OfficeBlock.cpp.o: CMakeFiles/ex05.dir/flags.make
CMakeFiles/ex05.dir/srcs/OfficeBlock.cpp.o: ../srcs/OfficeBlock.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ex05.dir/srcs/OfficeBlock.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex05.dir/srcs/OfficeBlock.cpp.o -c /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/OfficeBlock.cpp

CMakeFiles/ex05.dir/srcs/OfficeBlock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex05.dir/srcs/OfficeBlock.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/OfficeBlock.cpp > CMakeFiles/ex05.dir/srcs/OfficeBlock.cpp.i

CMakeFiles/ex05.dir/srcs/OfficeBlock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex05.dir/srcs/OfficeBlock.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/OfficeBlock.cpp -o CMakeFiles/ex05.dir/srcs/OfficeBlock.cpp.s

CMakeFiles/ex05.dir/srcs/PresidentialPardonForm.cpp.o: CMakeFiles/ex05.dir/flags.make
CMakeFiles/ex05.dir/srcs/PresidentialPardonForm.cpp.o: ../srcs/PresidentialPardonForm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ex05.dir/srcs/PresidentialPardonForm.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex05.dir/srcs/PresidentialPardonForm.cpp.o -c /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/PresidentialPardonForm.cpp

CMakeFiles/ex05.dir/srcs/PresidentialPardonForm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex05.dir/srcs/PresidentialPardonForm.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/PresidentialPardonForm.cpp > CMakeFiles/ex05.dir/srcs/PresidentialPardonForm.cpp.i

CMakeFiles/ex05.dir/srcs/PresidentialPardonForm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex05.dir/srcs/PresidentialPardonForm.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/PresidentialPardonForm.cpp -o CMakeFiles/ex05.dir/srcs/PresidentialPardonForm.cpp.s

CMakeFiles/ex05.dir/srcs/RobotomyRequestForm.cpp.o: CMakeFiles/ex05.dir/flags.make
CMakeFiles/ex05.dir/srcs/RobotomyRequestForm.cpp.o: ../srcs/RobotomyRequestForm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ex05.dir/srcs/RobotomyRequestForm.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex05.dir/srcs/RobotomyRequestForm.cpp.o -c /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/RobotomyRequestForm.cpp

CMakeFiles/ex05.dir/srcs/RobotomyRequestForm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex05.dir/srcs/RobotomyRequestForm.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/RobotomyRequestForm.cpp > CMakeFiles/ex05.dir/srcs/RobotomyRequestForm.cpp.i

CMakeFiles/ex05.dir/srcs/RobotomyRequestForm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex05.dir/srcs/RobotomyRequestForm.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/RobotomyRequestForm.cpp -o CMakeFiles/ex05.dir/srcs/RobotomyRequestForm.cpp.s

CMakeFiles/ex05.dir/srcs/ShrubberyCreationForm.cpp.o: CMakeFiles/ex05.dir/flags.make
CMakeFiles/ex05.dir/srcs/ShrubberyCreationForm.cpp.o: ../srcs/ShrubberyCreationForm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ex05.dir/srcs/ShrubberyCreationForm.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex05.dir/srcs/ShrubberyCreationForm.cpp.o -c /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/ShrubberyCreationForm.cpp

CMakeFiles/ex05.dir/srcs/ShrubberyCreationForm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex05.dir/srcs/ShrubberyCreationForm.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/ShrubberyCreationForm.cpp > CMakeFiles/ex05.dir/srcs/ShrubberyCreationForm.cpp.i

CMakeFiles/ex05.dir/srcs/ShrubberyCreationForm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex05.dir/srcs/ShrubberyCreationForm.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/ShrubberyCreationForm.cpp -o CMakeFiles/ex05.dir/srcs/ShrubberyCreationForm.cpp.s

CMakeFiles/ex05.dir/srcs/CentralBureaucracy.cpp.o: CMakeFiles/ex05.dir/flags.make
CMakeFiles/ex05.dir/srcs/CentralBureaucracy.cpp.o: ../srcs/CentralBureaucracy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ex05.dir/srcs/CentralBureaucracy.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex05.dir/srcs/CentralBureaucracy.cpp.o -c /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/CentralBureaucracy.cpp

CMakeFiles/ex05.dir/srcs/CentralBureaucracy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex05.dir/srcs/CentralBureaucracy.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/CentralBureaucracy.cpp > CMakeFiles/ex05.dir/srcs/CentralBureaucracy.cpp.i

CMakeFiles/ex05.dir/srcs/CentralBureaucracy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex05.dir/srcs/CentralBureaucracy.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/day05/ex05/srcs/CentralBureaucracy.cpp -o CMakeFiles/ex05.dir/srcs/CentralBureaucracy.cpp.s

# Object files for target ex05
ex05_OBJECTS = \
"CMakeFiles/ex05.dir/srcs/Bureaucrat.cpp.o" \
"CMakeFiles/ex05.dir/srcs/Form.cpp.o" \
"CMakeFiles/ex05.dir/srcs/Intern.cpp.o" \
"CMakeFiles/ex05.dir/srcs/main.cpp.o" \
"CMakeFiles/ex05.dir/srcs/OfficeBlock.cpp.o" \
"CMakeFiles/ex05.dir/srcs/PresidentialPardonForm.cpp.o" \
"CMakeFiles/ex05.dir/srcs/RobotomyRequestForm.cpp.o" \
"CMakeFiles/ex05.dir/srcs/ShrubberyCreationForm.cpp.o" \
"CMakeFiles/ex05.dir/srcs/CentralBureaucracy.cpp.o"

# External object files for target ex05
ex05_EXTERNAL_OBJECTS =

ex05: CMakeFiles/ex05.dir/srcs/Bureaucrat.cpp.o
ex05: CMakeFiles/ex05.dir/srcs/Form.cpp.o
ex05: CMakeFiles/ex05.dir/srcs/Intern.cpp.o
ex05: CMakeFiles/ex05.dir/srcs/main.cpp.o
ex05: CMakeFiles/ex05.dir/srcs/OfficeBlock.cpp.o
ex05: CMakeFiles/ex05.dir/srcs/PresidentialPardonForm.cpp.o
ex05: CMakeFiles/ex05.dir/srcs/RobotomyRequestForm.cpp.o
ex05: CMakeFiles/ex05.dir/srcs/ShrubberyCreationForm.cpp.o
ex05: CMakeFiles/ex05.dir/srcs/CentralBureaucracy.cpp.o
ex05: CMakeFiles/ex05.dir/build.make
ex05: CMakeFiles/ex05.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable ex05"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex05.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex05.dir/build: ex05

.PHONY : CMakeFiles/ex05.dir/build

CMakeFiles/ex05.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex05.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex05.dir/clean

CMakeFiles/ex05.dir/depend:
	cd /Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexandreroulin/pool_cpp/day05/ex05 /Users/alexandreroulin/pool_cpp/day05/ex05 /Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug /Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug /Users/alexandreroulin/pool_cpp/day05/ex05/cmake-build-debug/CMakeFiles/ex05.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex05.dir/depend

