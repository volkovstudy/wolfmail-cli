cmake_minimum_required(VERSION 3.24)
set(CMAKE_CXX_STANDARD 17)

set(PROJECT_NAME wolfmail-cli)

project(${PROJECT_NAME})

include_directories(src)

file(GLOB_RECURSE main-sources "src/*.cpp")
add_executable(wolfmail src/main.cpp ${main-sources})
