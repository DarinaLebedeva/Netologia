﻿#include <iostream>
#include <Windows.h>

void swap(int* arr, int size) {
    for (int j = 0; j < size - 1; j++) {
        for (int i = size - 1; i > j; i--) {
            if (arr[i] < arr[i - 1]) {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        }
    }
}

void print(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 }; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    std::cout << "До функции swap: ";
    print(arr, size); 

    swap(arr, size);
    std::cout << "После функции swap: ";
    print(arr, size);

    return 0;
}
