#include "functions.h"

int factorial(int n) {
    if (n < 0) {
        // 错误处理：负数没有阶乘
        return -1;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        int result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

std::string reverseString(const std::string& str) {
    std::string reversed;
    for (auto it = str.rbegin(); it != str.rend(); ++it) {
        reversed += *it;
    }
    return reversed;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    } else {
        for (int i = 2; i < n; ++i) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}
