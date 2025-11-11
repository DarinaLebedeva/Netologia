#include "IsoscelesTriangle.h"
#include "MyException.h" 

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B)
    : Triangle(a, b, a, A, B, A) {
    
    if (A != 90 && A == C && a != c) {
        throw ShapeCreationException("Стороны a и c не равны или углы A и C не равны");
    }
}
