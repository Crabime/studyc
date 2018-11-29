cmake_minimum_required(VERSION 3.12)
project(pointer C)

set(CMAKE_C_STANDARD 99)

add_executable(pointer pointer/main.c)
add_executable(b pointer/sort.c)
add_executable(sort_str pointer/sort_str.c)