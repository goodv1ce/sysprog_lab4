#include "calculator.h"
#include <iostream>

int main() {
    Calculator calculator;

    double a = 5.0;
    double b = 2.0;

    int sum = calculator.Add(a, b);
    std::cout << "Sum: " << sum << std::endl;

    int difference = calculator.Sub(a, b);
    std::cout << "Difference: " << difference << std::endl;

    return 0;
}