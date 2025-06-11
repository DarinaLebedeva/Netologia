#include <iostream>
#include <Windows.h>

void counting_function() {
    static int count;
    count++;
    std::cout << "Количество вызовов функции counting_function(): " << count << std::endl;
}

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }

    return 0;
}