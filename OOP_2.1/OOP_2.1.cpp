#include <iostream>
#include <string>
#include <Windows.h>

class Figure {
protected:
    int sides_num;  
    std::string name;

public:
    Figure(int sides) : sides_num(sides), name("Фигура") {}

    int get_sides_count() const {
        return sides_num;
    }

   std::string get_name() const {
        return name;
    }
};

class Triangle : public Figure {
public:
    Triangle() : Figure(3) { 
        name = "Треугольник"; 
    }
};

class Quadrangle : public Figure {
public:
    Quadrangle() : Figure(4) { 
        name = "Четырёхугольник";
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure unknownFigure(0); 
    Triangle triangle; 
    Quadrangle quadrangle;

    std::cout << "Количество сторон:" << std::endl;
    std::cout << unknownFigure.get_name() << ": " << unknownFigure.get_sides_count() << std::endl;
    std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;

    return 0;
}
