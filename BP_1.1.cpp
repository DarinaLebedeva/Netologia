#include <iostream>
#include <Windows.h>

enum Month {
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int monthNumber;

    while (true) {
        std::cout << "Введите номер месяца (0 для выхода): ";
        std::cin >> monthNumber;

        if (monthNumber == 0) {
            std::cout << "До свидания" << std::endl;
            break;
        }

        switch (monthNumber) {
        case Январь:
            std::cout << "Январь" << std::endl;
            break;
        case Февраль:
            std::cout << "Февраль" << std::endl;
            break;
        case Март:
            std::cout << "Март" << std::endl;
            break;
        case Апрель:
            std::cout << "Апрель" << std::endl;
            break;
        case Май:
            std::cout << "Май" << std::endl;
            break;
        case Июнь:
            std::cout << "Июнь" << std::endl;
            break;
        case Июль:
            std::cout << "Июль" << std::endl;
            break;
        case Август:
            std::cout << "Август" << std::endl;
            break;
        case Сентябрь:
            std::cout << "Сентябрь" << std::endl;
            break;
        case Октябрь:
            std::cout << "Октябрь" << std::endl;
            break;
        case Ноябрь:
            std::cout << "Ноябрь" << std::endl;
            break;
        case Декабрь:
            std::cout << "Декабрь" << std::endl;
            break;
        default:
            std::cout << "Неправильный номер!" << std::endl;
            break;
        }
    }

    return 0;
}
