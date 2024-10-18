#include <iostream>
#include <cmath>

double power(double base, double exponent) {
    return pow(base, exponent);
}

int mod(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Modulo by zero");
    }
    return a % b;
}

void compoundOperationsTest() {
    std::cout << "Power: " << power(2, 3) << std::endl;
    try {
        std::cout << "Modulo: " << mod(10, 0) << std::endl;  // This should throw an exception
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
