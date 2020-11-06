cmake_minimum_required(VERSION 3.17)
project(agencia_bancaria)

set(CMAKE_CXX_STANDARD 14)

add_executable(agencia_bancaria main.cpp contacorrente.cpp contacorrente.h movimentacao.cpp movimentacao.h agencia.cpp agencia.h date.cpp date.h conta.cpp conta.h contapoupanca.cpp contapoupanca.h)