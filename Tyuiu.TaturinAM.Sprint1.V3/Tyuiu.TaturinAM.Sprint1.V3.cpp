// Tyuiu.TaturinAM.Sprint1.V3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.TaturinAM.Sprint1.V3.Lib/Tyuiu.TaturinAM.Sprint1.V3.Lib.cpp"

int main() {
    int a, b;
    std::cin >> a >> b;
    int sumOfSquares = a * a + b * b;
    std::cout << sumOfSquares << std::endl;
    return 0;
}