cmake_minimum_required(VERSION 3.12)
project(ex01)

set(CMAKE_CXX_STANDARD 14)

include_directories(incs)

add_executable(ex01
        incs/Contact.hpp
        incs/phonebook.h
        incs/PhoneBook.hpp
        srcs/Contact.cpp
        srcs/main.cpp
        srcs/PhoneBook.cpp)
