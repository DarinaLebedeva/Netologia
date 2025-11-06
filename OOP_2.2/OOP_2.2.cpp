#include <Windows.h>
#include <iostream>
#include <string>

class Figure {
public:
    virtual void print_info() const = 0; 
    virtual ~Figure() = default; 
};

class Triangle : public Figure {
protected:
    double a, b, c; 
    double A, B, C; 

public:
    Triangle(double a, double b, double c, double A, double B, double C)
        : a(a), b(b), c(c), A(A), B(B), C(C) {}

    void print_info() const override {
        std::cout << "Треугольник:" << std::endl
                  << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl
                  << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b)
        : Triangle(a, b, (a * a + b * b), 90, atan(b / a) * 180 / 3.14159265, 90 - atan(b / a) * 180 / 3.14159265) {}
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b, double A, double B)
        : Triangle(a, b, a, A, B, A) {}
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double length)
        : Triangle(length, length, length, 60, 60, 60) {}
};

class Quadrilateral : public Figure {
protected:
    double a, b, c, d; 
    double A, B, C, D;

public:
    Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D)
        : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}

    void print_info() const override {
        std::cout << "Четырёхугольник:" << std::endl
                  << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl
                  << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Rectanglee : public Quadrilateral {
public:
    Rectanglee(double a, double b)
        : Quadrilateral(a, b, a, b, 90, 90, 90, 90) {}
};

class Square : public Rectanglee {
public:
    Square(double length)
        : Rectanglee(length, length) {}
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double a, double b, double A, double B)
        : Quadrilateral(a, b, a, b, A, B, A, B) {}
};

class Rhombus : public Parallelogram {
public:
    Rhombus(double length, double A, double B)
        : Parallelogram(length, length, A, B) {}
};

int main() {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(10);

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectanglee rectanglee(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    Figure* figures[] = { &triangle, &rightTriangle, &isoscelesTriangle, &equilateralTriangle,
                          &quadrilateral, &rectanglee, &square, &parallelogram, &rhombus };

    for (const auto& figure : figures) {
        figure->print_info();
        std::cout << std::endl;
    }

    return 0;
}
