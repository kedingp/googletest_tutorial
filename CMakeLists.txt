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

add_executable(calculator_app src/calculator.cpp src/main.cpp )
target_include_directories(calculator_app PUBLIC include)

add_executable(test_calculator tests/test_calculator.cpp src/calculator.cpp)
target_link_libraries(test_calculator PUBLIC gtest ${CMAKE_THREAD_LIBS_INIT})
target_include_directories(test_calculator PUBLIC include)
add_test(test_calculator test_calculator)


