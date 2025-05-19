#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите целое число:\n";

    int num;
    std::cin >> num;

    int sum=0;

    while (num > 0){
        int num_ost = num % 10;
        sum += num_ost;
        num = num / 10;
    }
    std::cout << "Сумма цифр: " << sum;
}
