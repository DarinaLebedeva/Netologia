#include <iostream>
#include <string>
#include <Windows.h>

class Figure {
public:
    virtual void print_info() const {
        std::cout << "Фигура:" << std::endl;
        std::cout << "Правильная: " << (check() ? "Да" : "Нет") << std::endl;
        std::cout << "Количество сторон: 0" << std::endl;
    }

    virtual bool check() const {
        return true; 
    }

    virtual ~Figure() = default; 
};

class Triangle : public Figure {
protected:
    double a, b, c; 
    double A, B, C; 

public:
    Triangle(double a, double b, double c, double A, double B, double C)
        : a(a), b(b), c(c), A(A), B(B), C(C) {
    }

    void print_info() const override {
        std::cout << "Треугольник:" << std::endl;
        std::cout << "Правильная: " << (check() ? "Да" : "Нет") << std::endl;
        std::cout << "Количество сторон: 3" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }

    bool check() const override {
        return (A + B + C == 180); 
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b)
        : Triangle(a, b, std::sqrt(a* a + b * b), 90, atan(b / a) * 180 / 3.14159265, 90 - atan(b / a) * 180 / 3.14159265) {
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b, double A, double B)
        : Triangle(a, b, a, A, B, A) {
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double length)
        : Triangle(length, length, length, 60, 60, 60) {
    }
};

class Quadrilateral : public Figure {
protected:
    double a, b, c, d; 
    double A, B, C, D; 

public:
    Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D)
        : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    }

    void print_info() const override {
        std::cout << "Четырёхугольник:" << std::endl;
        std::cout << "Правильная: " << (check() ? "Да" : "Нет") << std::endl;
        std::cout << "Количество сторон: 4" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }

    bool check() const override {
        return (A + B + C + D == 360); 
    }
};

class Rectanglee : public Quadrilateral {
public:
    Rectanglee(double a, double b)
        : Quadrilateral(a, b, a, b, 90, 90, 90, 90) {
    }
};

class Square : public Rectanglee {
public:
    Square(double length)
        : Rectanglee(length, length) {
    }
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double a, double b, double A, double B)
        : Quadrilateral(a, b, a, b, A, B, A, B) {
    }
};

class Rhombus : public Parallelogram {
public:
    Rhombus(double length, double A, double B)
        : Parallelogram(length, length, A, B) {
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure* figures[] = {
        new Figure(),
        new Triangle(10, 20, 30, 50, 60, 70),
        new RightTriangle(3, 4),
        new IsoscelesTriangle(10, 20, 30, 30),
        new EquilateralTriangle(10),
        new Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80),
        new Rectanglee(10, 20),
        new Square(20),
        new Parallelogram(20, 30, 30, 40),
        new Rhombus(30, 30, 40)
    };

    for (const auto& figure : figures) {
        figure->print_info();
        std::cout << std::endl; 
    }

    for (const auto& figure : figures) {
        delete figure;
    }

    return 0;
}
