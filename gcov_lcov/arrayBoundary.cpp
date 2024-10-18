void arrayBoundaryTest() {
    int arr[5] = {1, 2, 3, 4, 5};
    try {
        std::cout << "Array out of bounds: " << arr[6] << std::endl;  // This will cause undefined behavior
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
