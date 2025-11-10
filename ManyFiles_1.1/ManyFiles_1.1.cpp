#include "Header.h" 
#include <cmath>
#include <iostream>
#include <stdexcept>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Деление на ноль невозможно!");
    }
    else {
        return a / b;
    }
}

double power(double base, double exponent) {
    return std::pow(base, exponent);
}
