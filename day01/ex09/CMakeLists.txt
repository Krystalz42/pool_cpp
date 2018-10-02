cmake_minimum_required(VERSION 3.12)
project(ex09)

set(CMAKE_CXX_STANDARD 14)

include_directories(incs)

add_executable(ex09
        incs/Logger.hpp
        srcs/Logger.cpp
        srcs/main.cpp)
