cmake_minimum_required(VERSION 3.12)
project(pointer C)

set(CMAKE_C_STANDARD 99)

add_executable(pointer pointer/main.c)
add_executable(b pointer/sort.c)
add_executable(sort_str pointer/sort_str.c)
add_executable(swap_int pointer/integer_swap.c)
add_executable(swap_ints pointer/swap_integers.c)
add_executable(filter_last_three pointer/filter_last_three.c)
add_executable(len_str pointer/len_str.c)