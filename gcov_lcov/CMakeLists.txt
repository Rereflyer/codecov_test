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

# 添加源码文件
set(SOURCES
    math_functions.cpp
    test_math_functions.cpp
)

# 创建可执行文件
add_executable(math_functions_test ${SOURCES})

# 链接覆盖率生成库（gcov）
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_link_libraries(math_functions_test gcov)
endif()

# 启用测试
enable_testing()

# 添加测试
add_test(NAME MathFunctionsTest COMMAND math_functions_test)
