cmake_minimum_required(VERSION 3.26)
project(libs C)

set(CMAKE_C_STANDARD 11)

add_executable(libs main.c)

add_subdirectory(data_structures)
target_link_libraries(libs vector)