cmake_minimum_required(VERSION 3.12)
project(ex03)

set(CMAKE_CXX_STANDARD 14)

include_directories(incs)

add_executable(ex03
        incs/AMateria.hpp
        incs/Character.hpp
        incs/Cure.hpp
        incs/Ice.hpp
        incs/ICharacter.hpp
        incs/IMateriaSource.hpp
        incs/MateriaSource.hpp
        srcs/AMateria.cpp
        srcs/Character.cpp
        srcs/Cure.cpp
        srcs/Ice.cpp
        srcs/main.cpp
        srcs/MateriaSource.cpp)
