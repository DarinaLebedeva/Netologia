#include "Triangle.h"
#include <iostream>
#include <stdexcept>
#include "MyException.h" 

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
    : a(a), b(b), c(c), A(A), B(B), C(C) {
   
    if (A + B + C != 180) {
        throw ShapeCreationException("Сумма углов не равна 180");
    }
}

void Triangle::print_info() const {
    std::cout << "Треугольник:\n"
        << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n"
        << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}
