set(GOOGLETEST_ROOT extern/googletest/googletest CACHE STRING "Google Test source root")

set(GOOGLETEST_SOURCES
    ${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}/src/gtest-all.cc
    ${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}/src/gtest_main.cc
    )

add_library(gtest ${GOOGLETEST_SOURCES})
target_include_directories(gtest SYSTEM PUBLIC
    ${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}
    ${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}/include
    )