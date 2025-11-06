#include <iostream>
#include <fstream>
#include <string>
#include <vector>

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
};

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        std::cerr << "Не получилось открыть файл :(" << std::endl;
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
        outputFile << n << std::endl;

        for (int i = n - 1; i >= 0; --i) {
            outputFile << addresses[i].getOutputAddress() << std::endl;
        }

        inputFile.close();
        outputFile.close();

        return 0;
    
}
