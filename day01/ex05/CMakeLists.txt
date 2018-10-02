cmake_minimum_required(VERSION 3.12)
project(ex05)

set(CMAKE_CXX_STANDARD 14)

include_directories(incs)

add_executable(ex05
        incs/Brain.hpp
        incs/Human.hpp
        srcs/Brain.cpp
        srcs/Human.cpp
        srcs/main.cpp)
