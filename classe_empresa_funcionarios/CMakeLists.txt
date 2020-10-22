cmake_minimum_required(VERSION 3.17)
project(classe_empresa_funcionarios)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(classe_empresa_funcionarios
        date.cpp
        date.h
        empresa.cpp
        empresa.h
        funcionario.cpp
        funcionario.h
        main.cpp questao1.cpp questao1.h)
