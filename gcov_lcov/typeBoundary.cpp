void typeBoundaryTest() {
    int maxInt = INT_MAX;
    int minInt = INT_MIN;
    std::cout << "Max Int + 1: " << maxInt + 1 << std::endl;  // Integer overflow
    std::cout << "Min Int - 1: " << minInt - 1 << std::endl;  // Integer underflow
}
