#include <iostream>
#include <Windows.h>
#define MODE 1

#ifdef MODE 

double sumNumbers(double a, double b) {
    return a + b;
}

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    #if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;

    #elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    
    double num1, num2;
    std::cout << "Введите число 1: ";
    std::cin >> num1;

    std::cout << "Введите число 2: ";
    std::cin >> num2;

    std::cout << "Результат сложения: "<< sumNumbers(num1, num2) << std::endl;

    #else
    std::cout << "Неизвестный режим. Завершение работы." << std::endl;

#endif
    return 0;
}

#endif MODE


#ifndef MODE
#error You have to define MODE
#endif MODE


