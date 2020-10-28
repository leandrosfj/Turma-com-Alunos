cmake_minimum_required(VERSION 3.17)
project(jogo_dados)

set(CMAKE_CXX_STANDARD 14)

add_executable(jogo_dados main.cpp dado.cpp dado.hpp jogador.cpp jogador.hpp jogo.cpp jogo.hpp)