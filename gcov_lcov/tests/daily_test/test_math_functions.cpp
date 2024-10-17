// test_math_functions.cpp
#include <iostream>
#include "math_functions.h"
#include "functions.h"
#include <cassert>

void test_add() {
    if (add(2, 3) == 5)
        std::cout << "Test Add Passed" << std::endl;
    else
        std::cout << "Test Add Failed" << std::endl;
}

void test_subtract() {
    if (subtract(5, 3) == 2)
        std::cout << "Test Subtract Passed" << std::endl;
    else
        std::cout << "Test Subtract Failed" << std::endl;
}

void test_multiply() {
    if (multiply(2, 3) == 6)
        std::cout << "Test Multiply Passed" << std::endl;
    else
        std::cout << "Test Multiply Failed" << std::endl;
}

void test_divide() {
    if (divide(6, 3) == 2)
        std::cout << "Test Divide Passed" << std::endl;
    else
        std::cout << "Test Divide Failed" << std::endl;

    // Test divide by zero
    if (divide(6, 0) == 0)
        std::cout << "Test Divide by Zero Passed" << std::endl;
    else
        std::cout << "Test Divide by Zero Failed" << std::endl;
}

int main() {
    test_add();
    test_subtract();
    test_multiply();
    test_divide();

    // 测试 add 函数
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);

    // 测试 factorial 函数
    assert(factorial(5) == 120);
    // 未测试 n < 0 和 n == 0 的情况

    // 测试 max 函数
    assert(max(10, 20) == 20);
    assert(max(-5, -10) == -5);

    // 测试 reverseString 函数
    assert(reverseString("hello") == "olleh");

    // 测试 isPrime 函数
    assert(isPrime(2) == true);
    assert(isPrime(4) == false);
    // 未测试 n <= 1 的情况

    std::cout << "所有测试用例通过！" << std::endl;
    return 0;
}
