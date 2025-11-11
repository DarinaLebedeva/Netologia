#include "RightTriangle.h"
#include <cmath>

RightTriangle::RightTriangle(double a, double b)
    : Triangle(a, b, std::sqrt(a* a + b * b), 90, std::atan(b / a) * 180 / 3.14159265, 90) {
}
