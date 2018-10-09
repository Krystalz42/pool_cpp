cmake_minimum_required(VERSION 3.12)
project(ex05)

set(CMAKE_CXX_STANDARD 98)

include_directories(incs)

add_executable(ex05
        incs/Bureaucrat.hpp
        incs/Form.hpp
        incs/Intern.hpp
        incs/OfficeBlock.hpp
        incs/PresidentialPardonForm.hpp
        incs/RobotomyRequestForm.hpp
        incs/ShrubberyCreationForm.hpp
        srcs/Bureaucrat.cpp
        srcs/Form.cpp
        srcs/Intern.cpp
        srcs/main.cpp
        srcs/OfficeBlock.cpp
        srcs/PresidentialPardonForm.cpp
        srcs/RobotomyRequestForm.cpp
        srcs/ShrubberyCreationForm.cpp srcs/CentralBureaucracy.cpp incs/CentralBureaucracy.hpp)
