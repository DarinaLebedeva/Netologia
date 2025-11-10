#include "Header.h"
#include <iostream>
#include <Windows.h>

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double firstNum, secondNum;
	int operation;

	std::cout << "¬ведите первое число: ";
	std::cin >> firstNum;

	std::cout << "¬ведите второе число: ";
	std::cin >> secondNum;

	std::cout << "¬ыберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> operation;

    try {
        switch (operation) {
        case 1:
            std::cout << firstNum << " + " << secondNum << " = " << add(firstNum, secondNum) << std::endl;
            break;
        case 2:
            std::cout << firstNum << " - " << secondNum << " = " << subtract(firstNum, secondNum) << std::endl;
            break;
        case 3:
            std::cout << firstNum << " * " << secondNum << " = " << multiply(firstNum, secondNum) << std::endl;
            break;
        case 4:
            std::cout << firstNum << " / " << secondNum << " = " << divide(firstNum, secondNum) << std::endl;
            break;
        case 5:
            std::cout << firstNum << " в степени " << secondNum << " = " << power(firstNum, secondNum) << std::endl;
            break;
        default:
            std::cout << "Ќеправильный выбор операции." << std::endl;
        }
    }
    catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
