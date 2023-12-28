# Outer CMakeLists.txt for the entire Project
# Manage the subdirectories
cmake_minimum_required(VERSION 3.25)
project(2023-cpl-coding C)

set(CMAKE_C_STANDARD 17)

add_subdirectory(0-intro)
add_subdirectory(1-types-io)