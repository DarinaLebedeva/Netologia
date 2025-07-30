#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string hiddenWord = "малина";
    std::string userWord;

    do {
        std::cout << "Введите слово: ";
        std::cin >> userWord;
        if (hiddenWord != userWord) {
            std::cout << "Неправильно!\n";
        }
    } while (hiddenWord != userWord);

    std::string finish = "Правильно! Вы победили! Загаданное слово - " + hiddenWord + "!";
    std::cout << finish << std::endl;

    return 0;
}