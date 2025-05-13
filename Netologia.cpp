#include <iostream>
#include <Windows.h>

int main() {
	int number; 

	SetConsoleOutputCP(1251);
	std::cout << "Введите число:" << std::endl;
	std::cin >> number;
	std::cout << "Вы ввели:\n" << number << std::endl;

	return 0;
}