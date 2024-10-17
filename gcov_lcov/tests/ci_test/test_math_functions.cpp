// test_math_functions.cpp
#include <iostream>
#include "math_functions.h"

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
    return 0;
}
