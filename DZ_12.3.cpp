#include <iostream>
#include <fstream>
#include <Windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int* array = new int[size];

    for (int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> array[i];
    }

    std::ofstream fout("C:\\Users\\мвидео\\Desktop\\out.txt");
    if (!fout.is_open()) {
        std::cout << "Ошибка открытия файла!" << std::endl;
        delete[] array; 
        return 1;
    }

    fout << size << std::endl;

    for (int i = size - 1; i >= 0; --i) {
        fout << array[i] << " ";
    }
    fout << std::endl;
    fout.close();

    delete[] array;
    return 0;
}
