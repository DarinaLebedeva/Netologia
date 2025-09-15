#include <iostream>
#include <Windows.h>
#include <string>

struct BankAccount {
    int accountNumber;      
    std::string owner;  
    double balance;         
};

// Функция, чтобы обновлять баланс
void updateBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance; 
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    BankAccount account; 

    std::cout << "Введите номер счёта: ";
    std::cin >> account.accountNumber;
    std::cin.ignore(); // Игнорируем символ новой строки после ввода числа

    std::cout << "Введите имя владельца: ";
    std::getline(std::cin, account.owner);

    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    // Вызов функции
    updateBalance(account, newBalance);

    std::cout << "Ваш счёт: " << account.owner << ", "
        << account.accountNumber << ", "
        << account.balance << std::endl;

    return 0;
}
