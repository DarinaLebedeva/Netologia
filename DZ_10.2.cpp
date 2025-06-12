#include <iostream>
#include <Windows.h>

double * create_array(int size) {
    double* arr = new double[size]();
    return arr;
}

void print_array(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl; 
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите размер массива: ";

    int size;
    std::cin >> size;

    double* external_arr = create_array(size);

    std::cout << "Введенный массив: ";
    print_array(external_arr, size);

    delete[] external_arr;

    return 0;
}