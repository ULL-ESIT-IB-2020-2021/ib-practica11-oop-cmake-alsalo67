cmake_minimum_required(VERSION 3.1)

project(ejercicio_2
VERSION 1.0
DESCRIPTION "Realizacion del ejercicio 2 de la Practica 11"
LANGUAGES CXX)

add_executable(ejercicio_2
    src/operadores_main.cpp)
    
target_compile_features(ejercicio_2 PRIVATE cxx_std_14)
target_compile_options(ejercicio_2 PRIVATE -Wall -Wextra -Wpedantic)