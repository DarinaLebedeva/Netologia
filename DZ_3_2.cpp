#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double num1;
    std::cout << "Введите первое число:";
    std::cin >> num1;

    double num2;
    std::cout << "Введите второе число:";
    std::cin >> num2;

    double num3;
    std::cout << "Введите третье число:";
    std::cin >> num3;

    double max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    double mid = (num1 < num2) ? ((num1 > num3) ? num1 : ((num2 < num3) ? num2 : num3)) : ((num1 < num3) ? num1 : ((num2 > num3) ? num2 : num3));
    double min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    std::cout << "Результат: " << max << " " << mid << " " << min << std::endl;


    return 0;
}
