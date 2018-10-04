cmake_minimum_required(VERSION 3.12)
project(ex04)

set(CMAKE_CXX_STANDARD 14)

include_directories(incs)

add_executable(ex04
        incs/ClapTrap.hpp
        incs/FragTrap.hpp
        incs/NinjaTrap.hpp
        incs/ScavTrap.hpp
        incs/SuperTrap.hpp
        srcs/ClapTrap.cpp
        srcs/FragTrap.cpp
        srcs/main.cpp
        srcs/NinjaTrap.cpp
        srcs/ScavTrap.cpp
        srcs/SuperTrap.cpp)
