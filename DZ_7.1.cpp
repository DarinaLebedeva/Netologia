#include <iostream>

int main()
{
    int constI;
    short constS;
    long constL;
    long long constLL;
    float constF;
    double constD;
    long double constLD;
    bool constB;

    std::cout << "int: " << &constI << " " << sizeof(constI) << std::endl;
    std::cout << "short: " << &constS << " " << sizeof(constS) << std::endl;
    std::cout << "long: " << &constL << " " << sizeof(constL) << std::endl;
    std::cout << "long long: " << &constLL << " " << sizeof(constLL) << std::endl;
    std::cout << "float: " << &constF << " " << sizeof(constF) << std::endl;
    std::cout << "double: " << &constD << " " << sizeof(constD) << std::endl;
    std::cout << "long double: " << &constLD << " " << sizeof(constLD) << std::endl;
    std::cout << "bool: " << &constB << " " << sizeof(constB) << std::endl;
}
