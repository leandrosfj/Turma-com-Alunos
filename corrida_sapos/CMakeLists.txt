cmake_minimum_required(VERSION 3.17)
project(corrida_sapos)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(corrida_sapos
        sapo.cpp
        sapo.h
        sapo_main.cpp)
