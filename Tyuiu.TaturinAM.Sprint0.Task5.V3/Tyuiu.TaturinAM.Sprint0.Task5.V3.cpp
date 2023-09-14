// Tyuiu.TaturinAM.Sprint0.Task5.V3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.TaturinAM.Sprint0.Task5.V3.Lib/Tyuiu.TaturinAM.Sprint0.Task5.V3.Lib.cpp"
int main() {
    setlocale(LC_ALL, "Russian");
    // Ввод данных
    double цена_конфет_ивана = 5.45;
    double цена_конфет_сестры = 2.5;
    double цена_печенья = 3;

    // Вычисление стоимости покупки
    double стоимость_покупки = цена_конфет_ивана + цена_конфет_сестры + цена_печенья;

    // Вывод результата
    std::cout << "Стоимость покупки: " << стоимость_покупки << " руб." << std::endl;

    return 0;
}