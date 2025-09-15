#include <iostream>
#include <Windows.h>
#include <string>

struct Address {
    std::string city;        
    std::string street;     
    int houseNumber;         
    int apartmentNumber;     
    int postalCode;        
};

// Функция для вывода адреса
void printAddress(const Address& address) {
    std::cout << "Город: " << address.city << std::endl;
    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Номер дома: " << address.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << address.apartmentNumber << std::endl;
    std::cout << "Индекс: " << address.postalCode << std::endl;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Создаём экземпляры структуры Address
    Address address1 = { "Москва", "Арбат", 12, 8, 123456 };
    Address address2 = { "Ижевск", "Пушкина", 59, 143, 953769 };

    std::cout << "Адрес 1:" << std::endl;
    printAddress(address1);
    std::cout << std::endl; 

    std::cout << "Адрес 2:" << std::endl;
    printAddress(address2);

    return 0;
}
