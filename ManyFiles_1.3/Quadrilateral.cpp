#include "Quadrilateral.h"
#include <iostream>

Quadrilateral::Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D)
    : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
}

void Quadrilateral::print_info() const {
    std::cout << "Четырёхугольник:" << std::endl
        << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl
        << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
