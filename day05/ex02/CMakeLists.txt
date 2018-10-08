cmake_minimum_required(VERSION 3.12)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

include_directories(incs)

add_executable(ex00
        Makefile srcs/Bureaucrat.cpp incs/Bureaucrat.hpp srcs/main.cpp srcs/Form.cpp incs/Form.hpp srcs/ShrubberyCreationForm.cpp incs/ShrubberyCreationForm.hpp srcs/RobotomyRequestForm.cpp incs/RobotomyRequestForm.hpp srcs/PresidentialPardonForm.cpp incs/PresidentialPardonForm.hpp)

