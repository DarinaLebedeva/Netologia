#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

class Address {
private:
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;

public:
    Address(const std::string& city,
            const std::string& street,
            int houseNumber,
            int apartmentNumber)
        : city(city), street(street), houseNumber(houseNumber), apartmentNumber(apartmentNumber) {
    }

    std::string getOutputAddress() const {
        return city + ", " + street + ", " + std::to_string(houseNumber) + ", " + std::to_string(apartmentNumber);
    }

    const std::string& getCity() const {
        return city;
    }
};

bool compareByCity(const Address& a, const Address& b) {
    return a.getCity() < b.getCity();
}

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        std::cerr << "Не получилось открыть файл." << std::endl;
        return 1;
    }

    int n;
    inputFile >> n;
    inputFile.ignore(); 

    std::vector<Address> addresses;

    for (int i = 0; i < n; ++i) {
        std::string city, street;
        int houseNumber, apartmentNumber;

        std::getline(inputFile, city);
        std::getline(inputFile, street);
        inputFile >> houseNumber >> apartmentNumber;
        inputFile.ignore(); 

        addresses.emplace_back(city, street, houseNumber, apartmentNumber);
    }

    std::sort(addresses.begin(), addresses.end(), compareByCity);

    outputFile << n << std::endl;

    
    for (const auto& address : addresses) {
        outputFile << address.getOutputAddress() << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
