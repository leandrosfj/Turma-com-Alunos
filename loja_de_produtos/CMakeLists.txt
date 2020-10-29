cmake_minimum_required(VERSION 3.17)
project(loja_de_produtos)

set(CMAKE_CXX_STANDARD 14)

add_executable(loja_de_produtos main.cpp produto.cpp produto.hpp bebida.cpp bebida.hpp fruta.cpp fruta.hpp roupa.cpp roupa.hpp)