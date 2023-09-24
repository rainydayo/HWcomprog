#include <iostream>
#include <iomanip>
#include <cmath>

double calculateMosteller(double weight, double height) {
    return std::sqrt(weight * height) / 60.0;
}

double calculateHaycock(double weight, double height) {
    return 0.024265 * std::pow(weight, 0.5378) * std::pow(height, 0.3964);
}

double calculateBoyd(double weight, double height) {
    return 0.0333 * std::pow(weight, 0.6157 - 0.0188 * std::log10(weight)) * std::pow(height, 0.3);
}

int main() {
    double weight, height;

    std::cin >> weight;

    std::cin >> height;

    double mostellerResult = calculateMosteller(weight, height);
    double haycockResult = calculateHaycock(weight, height);
    double boydResult = calculateBoyd(weight, height);
    
    std::cout << std::setprecision(15);
    std::cout << mostellerResult << std::endl;
    std::cout << haycockResult << std::endl;
    std::cout << boydResult << std::endl;

    return 0;
}