#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int rows = 3, columns = 6;
    int arr[rows][columns] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18}
    };

    int minR = 0;
    int minC = 0;
    int maxR = 0;
    int maxC = 0;
    int min = arr[0][0];
    int max = arr[0][0];

    std::cout << "Массив:" << std::endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] < min) {
                minR = i;
                minC = j;
            }
            if (arr[i][j] > max) {
                maxR = i;
                maxC = j;
            }
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Индекс минимального числа: " << minR <<" " << minC << std::endl;
    std::cout << "Индекс максимального числа: " << maxR << " " << maxC << std::endl;
}
