#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string sex;
    std::cout << "Ваш пол (м/ж): ";
    std::cin >> sex;

    std::string sign;
    std::cout << "Ваш знак зодиака c маленькой буквы: ";
    std::cin >> sign;

    int age;
    std::cout << "Ваш возраст: ";
    std::cin >> age;

    if ((sex == "м") && (sign == "рак" || sign == "скорпион" || sign == "рыбы") && (age < 40)) {
        std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным." << std::endl;
    }
    else if ((sex == "ж") && (sign == "телец" || sign == "дева" || sign == "козерог") && (15 <= age <= 30)) {
        std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.\n"
            "Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех." << std::endl;
    }
    else {
        std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << std::endl;
    }
}
