// Tyuiu.TaturinAM.Sprint0.Task2.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include"../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service :public ISprint0Task2V0
{
	virtual int Add(int a, int b) override

	{
		return a + b;
	}

};