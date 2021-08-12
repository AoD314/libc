cmake_minimum_required(VERSION 3.1)

project(test C)

set (CMAKE_C_STANDARD 11)
add_compile_options(-Wall -Wextra -pedantic)

add_subdirectory(liba)
add_subdirectory(libb)

add_executable(app main.c)
# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")
target_link_libraries (app LINK_PUBLIC liba libb)
