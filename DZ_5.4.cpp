#include <iostream>
#include <Windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[10] = { 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };

    std::cout << "Массив до сортировки: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for (int j = 0; j < 10 - 1; j++) {
        for (int i = 9; i > j; i--) {
            if (arr[i] < arr[i - 1]) {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        }
    }

    std::cout << "Массив после сортировки: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
