#include <iostream>
#include <locale> 

int main() {
	std::setlocale(LC_ALL, "Russian");

	std::cout << "Дарина\n";
	std::cout << 20 << "\n";

	return 0;
}

