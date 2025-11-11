#include <iostream>
#include <string>
#include <Windows.h>
#include <stdexcept> 

class bad_length : public std::runtime_error {
public:
    bad_length() : std::runtime_error("Строка имеет запрещённую длину") {}
};

int lengthFunction(const std::string& str, int forbidden_length) {
    int length = str.length(); 
    if (length == forbidden_length) {
        throw bad_length(); 
    }
    return length; 
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int forbidden_length;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;

    std::string input;

    while (true) {
        std::cout << "Введите слово: ";
        std::cin >> input;

        try {
            int length = lengthFunction(input, forbidden_length); 
            std::cout << "Длина слова \"" << input << "\" равна " << length << std::endl;
        }
        catch (const bad_length& e) {
            std::cout << "Вы ввели слово запретной длины! До свидания" << std::endl;
            break; 
        }
    }
    return 0;
}
