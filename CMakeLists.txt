cmake_minimum_required(VERSION 3.10)

project(googletest_tutorial VERSION 1.0
                            LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

################################
# GTest
################################
enable_testing()
include(GoogleTest)
add_subdirectory(extern/googletest)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)


################################
# Targets
################################

add_executable(calculator_app src/calculator.cpp src/main.cpp )
target_include_directories(calculator_app PUBLIC include)

add_executable(test_calculator tests/test_calculator.cpp src/calculator.cpp)
target_link_libraries(test_calculator PUBLIC gtest gtest_main)
target_include_directories(test_calculator PUBLIC include)
add_test(test_calculator test_calculator)

add_executable(test_calculator_parameterized tests/test_calculator_parameterized.cpp src/calculator.cpp)
target_link_libraries(test_calculator_parameterized PUBLIC gtest gtest_main)
target_include_directories(test_calculator_parameterized PUBLIC include)
add_test(test_calculator_parameterized test_calculator_parameterized)

add_executable(test_calculator_fixture tests/test_calculator_fixture.cpp src/calculator.cpp)
target_link_libraries(test_calculator_fixture PUBLIC gtest gtest_main)
target_include_directories(test_calculator_fixture PUBLIC include)
add_test(test_calculator_fixture test_calculator_fixture)

add_executable(test_sample1 tests/sample1_unittest.cc src/sample1.cc)
target_link_libraries(test_sample1 PUBLIC gtest gtest_main)
target_include_directories(test_sample1 PUBLIC include)
add_test(test_sample1 test_sample1)

add_executable(test_sample2 tests/sample2_unittest.cc src/sample2.cc)
target_link_libraries(test_sample2 PUBLIC gtest gtest_main)
target_include_directories(test_sample2 PUBLIC include)
add_test(test_sample test_sample2)

add_executable(test_sample3 tests/sample3_unittest.cc)
target_link_libraries(test_sample3 PUBLIC gtest gtest_main)
target_include_directories(test_sample3 PUBLIC include)
add_test(test_sample3 test_sample3)

add_executable(test_sample4 tests/sample4_unittest.cc src/sample4.cc)
target_link_libraries(test_sample4 PUBLIC gtest gtest_main)
target_include_directories(test_sample4 PUBLIC include)
add_test(test_sample4 test_sample4)

add_executable(test_sample5 tests/sample5_unittest.cc src/sample1.cc)
target_link_libraries(test_sample5 PUBLIC gtest gtest_main)
target_include_directories(test_sample5 PUBLIC include)
add_test(test_sample5 test_sample5)

add_executable(test_sample6 tests/sample6_unittest.cc)
target_link_libraries(test_sample6 PUBLIC gtest gtest_main)
target_include_directories(test_sample6 PUBLIC include)
add_test(test_sample6 test_sample6)

add_executable(test_sample7 tests/sample7_unittest.cc)
target_link_libraries(test_sample7 PUBLIC gtest gtest_main)
target_include_directories(test_sample7 PUBLIC include)
add_test(test_sample7 test_sample7)

add_executable(test_sample8 tests/sample8_unittest.cc)
target_link_libraries(test_sample8 PUBLIC gtest gtest_main)
target_include_directories(test_sample8 PUBLIC include)
add_test(test_sample8 test_sample8)

add_executable(test_sample9 tests/sample9_unittest.cc)
target_link_libraries(test_sample9 PUBLIC gtest gtest_main)
add_test(test_sample9 test_sample9)

add_executable(test_sample10 tests/sample10_unittest.cc)
target_link_libraries(test_sample10 PUBLIC gtest gtest_main)
add_test(test_sample10 test_sample10)

add_executable(test_parameterized tests/test_parameterized.cpp)
target_link_libraries(test_parameterized PUBLIC gtest gtest_main)
add_test(test_parameterized test_parameterized)

add_executable(test_minimal_mock tests/test_minimal_mock.cpp)
target_link_libraries(test_minimal_mock PUBLIC gmock gtest gtest_main)
add_test(test_minimal_mock test_minimal_mock)