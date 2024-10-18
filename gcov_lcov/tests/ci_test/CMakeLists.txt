cmake_minimum_required(VERSION 3.10)

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR})

# 创建可执行文件
add_executable(math_functions_test_ci ${CMAKE_SOURCE_DIR}/tests/ci_test/test_math_functions.cpp)
target_link_libraries(math_functions_test_ci math_functions arrayBoundary comparison compoundOperations)

# 链接覆盖率生成库（gcov）
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_link_libraries(math_functions_test_ci gcov)
endif()

# 启用测试
enable_testing()

# 添加测试
add_test(NAME math_functions_test_ci COMMAND math_functions_test_ci)
