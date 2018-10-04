cmake_minimum_required(VERSION 3.12)
project(ex02)

set(CMAKE_CXX_STANDARD 14)

include_directories(incs)

add_executable(ex02
        incs/ClapTrap.hpp
        incs/FragTrap.hpp
        incs/ScavTrap.hpp
        srcs/ClapTrap.cpp
        srcs/FragTrap.cpp
        srcs/main.cpp
        srcs/ScavTrap.cpp)
