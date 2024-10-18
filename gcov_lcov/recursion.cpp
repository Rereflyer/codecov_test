#include <iostream>

int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial of negative number");
    }
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

void recursionTest() {
    try {
        std::cout << "Factorial of 5: " << factorial(5) << std::endl;
        std::cout << "Factorial of -1: " << factorial(-1) << std::endl;  // This should throw an exception
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
