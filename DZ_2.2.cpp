#include <iostream>
#include <Windows.h>
#include <string>

int main() {
	std::string word;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите слово:" << std::endl;
	std::cin >> word;
	std::cout << "Вы ввели:\n" << word << std::endl;

	return 0;
}