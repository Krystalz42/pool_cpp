cmake_minimum_required(VERSION 3.12)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

include_directories(incs)

add_executable(ex02
        Makefile
        srcs/main.cpp
        incs/Array.hpp)
