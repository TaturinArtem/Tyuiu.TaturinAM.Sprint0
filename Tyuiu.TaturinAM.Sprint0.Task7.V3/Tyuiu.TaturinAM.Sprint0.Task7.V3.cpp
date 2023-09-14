// Tyuiu.TaturinAM.Sprint0.Task7.V3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..//../Tyuiu.Cours/Tyuiu.Cours.cpp.cpp"
int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    std::cout << "Введите 5-значное число: ";
    std::cin >> number;

    int digit;
    std::cout << "Введите цифру для проверки: ";
    std::cin >> digit;

    int tempNumber = number;
    bool containsDigit = false;

    while (tempNumber != 0) {
        int currentDigit = tempNumber % 10;
        if (currentDigit == digit) {
            containsDigit = true;
            break;
        }
        tempNumber /= 10;
    }

    if (containsDigit) {
        std::cout << "Цифра " << digit << " содержится в числе " << number << std::endl;
    }
    else {
        std::cout << "Цифра " << digit << " не содержится в числе " << number << std::endl;
    }

    return 0;
}