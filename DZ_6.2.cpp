#include <iostream>
#include <Windows.h>

void toPower(int value, int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result *= value;
    }

    std::cout << value << " в степени " << power << " = " << result << std::endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    toPower(5, 2);
    toPower(3, 3);
    toPower(4, 4);
}

