#include <iostream>
#include <string>
#include "Counter.h"
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string choice;
    int initialValue;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите 'да' или 'нет': ";
    std::cin >> choice;

    Counter counter;

    if (choice == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        counter = Counter(initialValue);


        char command;
        do {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> command;

            switch (command) {
            case '+':
                counter.increment();
                break;
            case '-':
                counter.decrement();
                break;
            case '=':
                std::cout << counter.getValue() << std::endl;
                break;
            case 'x':
                std::cout << "До свидания!" << std::endl;
                break;
            default:
                std::cout << "Неверная команда!" << std::endl;
            }
        } while (command != 'x');
    }
    else {
        std::cout << "До свидания!" << std::endl;
        return 0; 
    }
    return 0;
}
