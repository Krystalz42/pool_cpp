cmake_minimum_required(VERSION 3.12)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

include_directories(incs)

add_executable(ex03
        Makefile srcs/main.cpp srcs/Brainfuck.cpp incs/Brainfuck.hpp incs/instructions/IExecute.hpp srcs/instructions/IncrementPointer.cpp incs/instructions/IncrementPointer.hpp srcs/instructions/DecrementPointer.cpp incs/instructions/DecrementPointer.hpp srcs/instructions/IncrementByte.cpp incs/instructions/IncrementByte.hpp srcs/instructions/DecrementByte.cpp incs/instructions/DecrementByte.hpp srcs/instructions/OutputByte.cpp incs/instructions/OutputByte.hpp srcs/instructions/InputByte.cpp incs/instructions/InputByte.hpp srcs/instructions/Loop.cpp incs/instructions/Loop.hpp incs/brainfuck.h)
