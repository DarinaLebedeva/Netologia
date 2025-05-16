#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num1, num2;
	std::cout << "Введите целое число от -99 до 99: ";
	std::cin >> num1;

	std::cout << "Введите целое число от -99 до 99: ";
	std::cin >> num2;

	if (num1 <= -100 || num1 >= 100 || num2 <= -100 || num2 >= 100) {
		std::cout << "Ошибка! Одно из чисел вне диапазона!" << std::endl;
	}

	// Создание массивово для хранения единиц и десятков.
	std::string units[] = {
		"ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять",
		"десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать",
		"шестнадцать", "семнадцать", "восемнадцать", "девятнадцать"
	};
	std::string tens[] = {
		"", "", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто"
	};


	std::string num1Words, num2Words;
	// Преобразование первого числа в текст.
	if (num1 < 0) {
		num1Words = "минус " + (num1 < -19 ? tens[(-num1) / 10] + " " + units[(-num1) % 10] : units[-num1]);
	}
	else if (num1 < 20) {
		num1Words = units[num1];
	}
	else {
		num1Words = tens[num1 / 10] + (num1 % 10 != 0 ? " " + units[num1 % 10] : "");
	}

	// Преобразование второго числа в текст.
	if (num2 < 0) {
		num2Words = "минус " + (num2 < -19 ? tens[(-num2) / 10] + " " + units[(-num2) % 10] : units[-num2]);
	}
	else if (num2 < 20) {
		num2Words = units[num2];
	}
	else {
		num2Words = tens[num2 / 10] + (num2 % 10 != 0 ? " " + units[num2 % 10] : "");
	}

	// Сравнение чисел.
	if (num1 < num2) {
		std::cout << num1Words << " меньше чем " << num2Words << std::endl;
	}
	else if (num1 > num2) {
		std::cout << num1Words << " больше чем " << num2Words << std::endl;
	}
	else {
		std::cout << num1Words << " равно " << num2Words << std::endl;
	}

	return 0;
}
