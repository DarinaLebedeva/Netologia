#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите размер массива: ";

    int size;
    std::cin >> size;

    int* int_ptr = new int[size];

    for (int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "] = ";
        int num;
        std::cin >> num;

        int_ptr[i] = num;
    }

    std::cout << "Введенный массив: ";

    for (int i = 0; i < size; i++) {
        std::cout << int_ptr[i] << " ";
    }
    
    delete[] int_ptr;
}

