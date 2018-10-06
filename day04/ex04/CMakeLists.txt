cmake_minimum_required(VERSION 3.12)
project(ex04)

set(CMAKE_CXX_STANDARD 98)

include_directories(.)
include_directories(incs)

add_executable(ex04
        Makefile srcs/DeepCoreMiner.cpp incs/DeepCoreMiner.hpp srcs/StripMiner.cpp incs/StripMiner.hpp srcs/AsteroKreog.cpp incs/AsteroKreog.hpp srcs/KoalaSteroid.cpp incs/KoalaSteroid.hpp srcs/MiningBarge.cpp incs/MiningBarge.hpp incs/IAsteroid.hpp incs/IMiningLaser.hpp srcs/main.cpp)
