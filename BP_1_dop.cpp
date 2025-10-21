#include <iostream>
#include <Windows.h>

enum Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
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

        Month month = static_cast<Month>(monthNumber);

        switch (month) {
        case January:
            std::cout << "Январь" << std::endl;
            break;
        case February:
            std::cout << "Февраль" << std::endl;
            break;
        case March:
            std::cout << "Март" << std::endl;
            break;
        case April:
            std::cout << "Апрель" << std::endl;
            break;
        case May:
            std::cout << "Май" << std::endl;
            break;
        case June:
            std::cout << "Июнь" << std::endl;
            break;
        case July:
            std::cout << "Июль" << std::endl;
            break;
        case August:
            std::cout << "Август" << std::endl;
            break;
        case September:
            std::cout << "Сентябрь" << std::endl;
            break;
        case October:
            std::cout << "Октябрь" << std::endl;
            break;
        case November:
            std::cout << "Ноябрь" << std::endl;
            break;
        case December:
            std::cout << "Декабрь" << std::endl;
            break;
        default:
            std::cout << "Неправильный номер!" << std::endl;
            break;
        }
    }

    return 0;
}
