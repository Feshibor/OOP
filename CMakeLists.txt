cmake_minimum_required(VERSION 4.1)
project(06_GTest C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

enable_testing()

add_subdirectory(external/googletest)

add_executable(my_test test_sample.cpp 2.cpp)
target_link_libraries(my_test gtest gtest_main)

add_test(NAME my_test COMMAND my_test)

