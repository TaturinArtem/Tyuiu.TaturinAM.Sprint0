// Tyuiu.TaturinAM.Sprint0.Task6.V3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..//../Tyuiu.Cours/Tyuiu.Cours.cpp.cpp"
int main() {
    setlocale(LC_ALL, "Russian");
    // Запрос исходных данных у пользователя
    int x, y;
    std::cout << "Введите значение x: ";
    std::cin >> x;
    std::cout << "Введите значение y: ";
    std::cin >> y;

    // Вычисление результата по формуле
    int result = 5 + (x * y / 3);

    // Вывод результата на экран
    std::cout << "Результат: " << result << std::endl;

    return 0;
}