#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string firstName;
    std::string lastName;

    std::cout << "Введите имя: ";
    std::cin >> firstName;

    std::cout << "Введите фамилию: ";
    std::cin >> lastName;

    std::string greeting = "Здравствуйте, " + firstName + " " + lastName + "!";
    std::cout << greeting << std::endl;

    return 0;
}
