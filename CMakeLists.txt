cmake_minimum_required(VERSION 3.13.4)
project(unidad_6_programacion_concurrente_JosephPenaQuino)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS -pthread)

add_executable(unidad_6_programacion_concurrente_JosephPenaQuino main.cpp main_test.cpp main.h Matriz.cpp Matriz.h CMatrix.cpp CMatrix.h)