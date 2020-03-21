cmake_minimum_required(VERSION 3.10)

project(googletest_tutorial VERSION 1.0
                            LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

################################
# GTest
################################
#option(CMAKE_USE_WIN32_THREADS_INIT "using WIN32 threads" ON)
#option(gtest_disable_pthreads "Disable uses of pthreads in gtest." ON)
add_subdirectory(extern/googletest)
enable_testing()
find_package(Threads)



################################
# Targets
################################


add_executable(hello_world src/main.cpp)
target_link_libraries(hello_world PUBLIC gtest gtest_main ${CMAKE_THREAD_LIBS_INIT})
target_include_directories(hello_world PUBLIC ${GTEST_INCLUDE_DIRS})
add_test( hello_world hello_world )
