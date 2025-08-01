#include <iostream>
#include <fstream>

int main() {
    std::ifstream fin("C:\\Users\\мвидео\\Desktop\\in.txt");

    if (!fin.is_open()) {
        std::cout << "Ошибка открытия файла!" << std::endl;
        return 1;
    }

    int size;
    fin >> size; 

    int* array = new int[size];

    for (int i = 0; i < size; ++i) {
        fin >> array[i];
    }

    fin.close();

    for (int i = size - 1; i >= 0; --i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array;

    return 0;
}
