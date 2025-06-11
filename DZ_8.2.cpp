#include <iostream>
#include <Windows.h>

namespace addition {
    int calc(int x, int y) {
        return x + y;
    }
}

namespace substraction {
    int calc(int x, int y) {
        return x - y;
    }
}

namespace multiplication {
    int calc(int x, int y) {
        return x * y;
    }
}

namespace division {
    int calc(int x, int y) {
        return x / y;
    }
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x = 6;
    int y = 9;

    std::cout << "x = " << x << ", y = " << y << std::endl;

    std::cout << "Сложение: " << addition::calc(x, y) << std::endl;
    std::cout << "Вычитание: " << substraction::calc(x, y) << std::endl;
    std::cout << "Умножение: " << multiplication::calc(x, y) << std::endl;
    std::cout << "Деление: " << division::calc(x, y) << std::endl;
}
