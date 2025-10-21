#include <iostream>
#include <Windows.h>

    class Counter {
    private:
        int valueCounter;

    public:
        // Конструктор без параметров (начальное значение по умолчанию 1)
        Counter() : valueCounter(1) {}

        // Конструктор с параметром для инициализации
        Counter(int initialValue) : valueCounter(initialValue) {}

        void increment() {
            valueCounter++;
        }

        void decrement() {
            valueCounter--;
        }

        int getValue() const {
            return valueCounter;
        }
    };

    int main() {

        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        int initialValue;
        char command;
        bool customInitialValue = false;

        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::string answer;
        std::cin >> answer;

        if (answer == "да" || answer == "Да") {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> initialValue;
            Counter counter(initialValue); // Создание экземпляра с заданным значением

            while (true) {
                std::cout << "Введите команду ('+', '-', '=' или 'x' на eng): ";
                std::cin >> command;

                if (command == '+') {
                    counter.increment();
                }
                else if (command == '-') {
                    counter.decrement();
                }
                else if (command == '=') {
                    std::cout << counter.getValue() << std::endl;
                }
                else if (command == 'x') {
                    break; 
                }
                else {
                    std::cout << "Неверная команда! Пожалуйста, попробуйте снова." << std::endl;
                }
            }
        }
        else {
            Counter counter; // Создание экземпляра со значением по умолчанию

            while (true) {
                std::cout << "Введите команду ('+', '-', '=' или 'x' на eng): ";
                std::cin >> command;

                if (command == '+') {
                    counter.increment();
                }
                else if (command == '-') {
                    counter.decrement();
                }
                else if (command == '=') {
                    std::cout << counter.getValue() << std::endl;
                }
                else if (command == 'x') {
                    break; 
                }
                else {
                    std::cout << "Неверная команда! Пожалуйста, попробуйте снова." << std::endl;
                }
            }
        }

        std::cout << "До свидания!" << std::endl;
        return 0;
    }
