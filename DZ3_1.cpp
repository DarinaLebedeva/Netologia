#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Оператор: ||" << std::endl;
    bool result;

    result = true || true;
    std::cout << "true\ttrue\t" << (result ? "true" : "false") << std::endl;

    result = false || true;
    std::cout << "false\ttrue\t" << (result ? "true" : "false") << std::endl;

    result = true || false;
    std::cout << "true\tfalse\t" << (result ? "true" : "false") << std::endl;

    result = false || false;
    std::cout << "false\tfalse\t" << (result ? "true" : "false") << std::endl;



    std::cout << std::endl;
    std::cout << "Оператор: &&" << std::endl;
    result = true && true;
    std::cout << "true\ttrue\t" << (result ? "true" : "false") << std::endl;

    result = false && true;
    std::cout << "false\ttrue\t" << (result ? "true" : "false") << std::endl;

    result = true && false;
    std::cout << "true\tfalse\t" << (result ? "true" : "false") << std::endl;

    result = false && false;
    std::cout << "false\tfalse\t" << (result ? "true" : "false") << std::endl;

    return 0;
}

