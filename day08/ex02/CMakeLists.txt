cmake_minimum_required(VERSION 3.12)
project(ex02)

set(CMAKE_CXX_STANDARD 14)

include_directories(incs)

add_executable(ex02
        Makefile srcs/main.cpp srcs/MutantStack.cpp incs/MutantStack.hpp)
