#include <iostream>

bool isGreater(int a, int b) {
    return a > b;
}

void comparisonTest() {
    std::cout << "Is 5 greater than 3? " << (isGreater(5, 3) ? "Yes" : "No") << std::endl;
}
