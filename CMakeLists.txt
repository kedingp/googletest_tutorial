cmake_minimum_required(VERSION 3.10)

project(googletest_tutorial VERSION 1.0
                            LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

################################
# GTest
################################
include(gtest.cmake)
find_package(Threads REQUIRED)
enable_testing()

################################
# Targets
################################

add_executable(hello_world src/main.cpp)

add_executable(test_one tests/test_one.cpp)
target_link_libraries(test_one PUBLIC gtest ${CMAKE_THREAD_LIBS_INIT})
add_test(test_one test_one)


