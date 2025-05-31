cmake_minimum_required(VERSION 3.31)
project(zad4)

file(GLOB_RECURSE SRC src/*cpp)
set(SOURCES ${SRC})
add_executable(zad4 ${SOURCES})
