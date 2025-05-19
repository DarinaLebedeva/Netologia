#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num;
    int sum=0;
    
    do {
        std::cout << "Введите целое число или число '0', чтобы закончить: " << std::endl;
        std::cin >> num;

        sum += static_cast <int> (num);
    } while (num != 0);

    std::cout << sum;
    return 0;
}
