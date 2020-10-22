cmake_minimum_required(VERSION 3.17)
project(turma_v4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(turma_v1
        aluno.cpp
        aluno.h
        aluno_main.cpp)

add_executable(turma_v2
        aluno.cpp
        aluno.h
        turma.cpp
        turma.h
        turma_main.cpp)






