#include <iostream>
#include <Windows.h>

    class Calculator {
    private:
        double num1;
        double num2;

    public:
        bool set_num1(double valueUser) {
            if (valueUser != 0) {
                this->num1 = valueUser; 
                return true;
            }
            return false;
        }

        bool set_num2(double valueUser) {
            if (valueUser != 0) {
                this->num2 = valueUser; 
                return true;
            }
            return false;
        }

        double sum() {
            return num1 + num2;
        }

        double multiply() {
            return num1 * num2;
        }

        double subtract_1_2() {
            return num1 - num2;
        }

        double subtract_2_1() {
            return num2 - num1;
        }

        double divide_1_2() {
            if (num2 != 0) {
                return num1 / num2;
            }
            std::cout << "Ошибка - деление на ноль!" << std::endl;
            return 0;
        }

        double divide_2_1() {
            if (num1 != 0) {
                return num2 / num1;
            }
            std::cout << "Ошибка - деление на ноль!" << std::endl;
            return 0; 
        }
    };

    int main() {

        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        Calculator calc;
        double a, b;

        while (true) {
            std::cout << "Введите num1: ";
            std::cin >> a;
            if (!calc.set_num1(a)) {
                std::cout << "Неверный ввод!" << std::endl;
                continue; 
            }

            std::cout << "Введите num2: ";
            std::cin >> b;
            if (!calc.set_num2(b)) {
                std::cout << "Неверный ввод!" << std::endl;
                continue; 
            }

            std::cout << "num1 + num2 = " << calc.sum() << std::endl;
            std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
            std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
            std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
            std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
            std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
        }

        return 0;
    }
