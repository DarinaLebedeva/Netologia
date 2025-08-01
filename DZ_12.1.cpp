#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std::ifstream fin("C:\\Users\\мвидео\\Desktop\\in.txt");

    if (!fin.is_open()) {
        std::cout << "Ошибка открытия файла." << std::endl;
        return 1;
    }

    std::string word;
    while (fin >> word) { 
        std::cout << word << std::endl; 
    }

    fin.close();

    return 0;
}
