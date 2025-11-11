#include <iostream>
#include <Windows.h>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectanglee.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "MyException.h" 

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try {
        RightTriangle rt(3, 4);
        std::cout << "Прямоугольный треугольник создан." << std::endl;
        rt.print_info();

        IsoscelesTriangle it(10, 20, 50, 60);
        std::cout << "Равнобедренный треугольник создан." << std::endl;
        it.print_info();

        EquilateralTriangle et(30);
        std::cout << "Равносторонний треугольник создан." << std::endl;
        et.print_info();

        Quadrilateral q(10, 20, 30, 40, 50, 60, 70, 80);
        std::cout << "Четырёхугольник создан." << std::endl;
        q.print_info();

        Rectanglee rect(10, 20);
        std::cout << "Прямоугольник создан." << std::endl;
        rect.print_info();

        Square sq(20);
        std::cout << "Квадрат создан." << std::endl;
        sq.print_info();

        Parallelogram para(20, 30, 30, 40);
        std::cout << "Параллелограмм создан." << std::endl;
        para.print_info();

        Rhombus rh(30, 30, 40);
        std::cout << "Ромб создан." << std::endl;
        rh.print_info();
    }
    catch (const ShapeCreationException& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
    }

    return 0;
}
