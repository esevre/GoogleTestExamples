cmake_minimum_required(VERSION 3.17)

project(GoogleTestExamples)

set(CMAKE_CXX_STANDARD 20)

add_executable(GoogleTestExamples main.cpp encode.hpp)

add_subdirectory(GoogleTests)

