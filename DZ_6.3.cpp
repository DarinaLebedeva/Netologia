#include <iostream>
#include <Windows.h>

int fibonacci(int num) {
    if (num == 0) {
        return 0; 
    }
    else if (num == 1) {
        return 1; 
    }
    else {
        return fibonacci(num - 1) + fibonacci(num - 2); 
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите число: ";

    int count;
    std::cin >> count;

    std::cout << "Числа Фибоначчи: ";
    for (int i = 0; i < count; i++) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
