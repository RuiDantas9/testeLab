cmake_minimum_required(VERSION 3.30)
project(TrabalhoLab C)

set(CMAKE_C_STANDARD 99)

add_executable(TrabalhoLab src/main.c
        src/menus.c
        src/menus.h
        src/utils.c
        src/utils.h)
