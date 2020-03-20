cmake_minimum_required(VERSION 3.10)

project(googletest_tutorial VERSION 1.0
                            LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(hello_world src/main.cpp)