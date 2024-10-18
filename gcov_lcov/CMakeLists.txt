cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(MathFunctionsTest)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 如果是Debug模式，则使能gcov
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    message(STATUS "Enabling coverage options for gcov")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fprofile-arcs -ftest-coverage")
endif()

# # 添加源码文件
# set(SOURCES
#     math_functions.cpp
#     test_math_functions.cpp
# )
message(STATUS "CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")
message(STATUS "CMAKE_EXE_LINKER_FLAGS: ${CMAKE_EXE_LINKER_FLAGS}")

add_library(math_functions SHARED math_functions.cpp)
add_library(functions SHARED functions.cpp)
add_library(arrayBoundary SHARED arrayBoundary.cpp)
add_library(comparison SHARED comparison.cpp)
add_library(compoundOperations SHARED compoundOperations.cpp)
add_library(edgeCase SHARED edgeCase.cpp)
add_library(recursion SHARED recursion.cpp)
add_library(typeBoundary SHARED typeBoundary.cpp)

if(CI_TEST)
    add_subdirectory(tests/ci_test)
elseif(DAILY_TEST)
    add_subdirectory(tests/daily_test)
endif()

