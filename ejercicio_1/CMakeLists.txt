cmake_minimum_required(VERSION 3.1)

project(ejercicio_1
VERSION 1.0
DESCRIPTION "Realizacion del ejercicio 1 de la Practica 11"
LANGUAGES CXX)

add_executable(ejercicio_1
    src/fechas.cpp)
    
target_compile_features(ejercicio_1 PRIVATE cxx_std_14)
target_compile_options(ejercicio_1 PRIVATE -Wall -Wextra -Wpedantic)