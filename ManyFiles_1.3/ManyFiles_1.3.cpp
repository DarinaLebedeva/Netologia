#include <Windows.h>
#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectanglee.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

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
