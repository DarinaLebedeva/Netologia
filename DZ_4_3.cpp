#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите целое число:\n";

    int num;
    std::cin >> num;
    
    for (int i = 1; i <= 10; i++) {
        int res = num*i;
        std::cout << num << " x " << i << " = " << res << std::endl;
    }
}
