// Tyuiu.Taturinam.CoursControl_1. Sprint0.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.Taturinam.CoursControl_1. Sprint0.V1.Lib/Tyuiu.Taturinam.CoursControl_1. Sprint0.V1.Lib.cpp"

int main()
{
    setlocale(LC_ALL, "RU");
    ISprint0Task8V3* date = new Service;
    int x;
    int y;
    int z;
    std::cout << "Перуменную x\n";
    std::cin >> x;
    std::cout << "Перуменную y\n";
    std::cin >> y;
    std::cout << "Перуменную z\n";
    std::cin >> z;
    std::cout << "Значение арифмитеческого выражения 5+(2x-z)/3+y^2 равно\n" << date->Proizved(x, y, z);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
