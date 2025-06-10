#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[] = { 4, 2, 1, 5, 3 };
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Минимум: " << min << std::endl;
    std::cout << "Максимум: " << max << std::endl;
}