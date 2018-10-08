cmake_minimum_required(VERSION 3.12)
project(ex01)

set(CMAKE_CXX_STANDARD 14)

include_directories(incs)

add_executable(ex01
    incs/Bureaucrat.hpp
    incs/Form.hpp
    srcs/Bureaucrat.cpp
    srcs/Form.cpp
    srcs/main.cpp)
