#include <iostream>
#include <cmath>

int main() {
    long long factorial = 1;

    for (int i = 1; i <= 10; ++i) {
        factorial *= i;
    }

    double result = (M_PI - (factorial / pow(8, 8)) + pow(log(9.7), ((7 / sqrt(71)) - sin(M_PI / (180.0 / 40.0))))) / pow(1.2, cbrt(2.3));

    std::cout << result << std::endl;
    return 0;
}
