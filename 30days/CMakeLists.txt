cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(30days)

# specify the C++ standard (must be set before declaring targets)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)                   

# This is for clangd which needs compile_command.json
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

# add the executable
add_executable(day8 day8.cpp)
add_executable(day9 day9.cpp)
add_executable(day10 day10.cpp)
add_executable(day11 day11.cpp)
add_executable(day12 day12.cpp)
add_executable(day13 day13.cpp)
add_executable(day14 day14.cpp)
add_executable(day15 day15.cpp)
add_executable(day16 day16.cpp)
add_executable(day17 day17.cpp)
add_executable(day18 day18.cpp)
add_executable(day19 day19.cpp)
add_executable(day20 day20.cpp)
add_executable(day21 day21.cpp)
add_executable(day22 day22.cpp)
add_executable(day23 day23.cpp)
add_executable(day24 day24.cpp)
add_executable(day25 day25.cpp)
add_executable(day26 day26.cpp)
add_executable(day27 day27.cpp)
add_executable(day28 day28.cpp)
add_executable(day29 day29.cpp)
