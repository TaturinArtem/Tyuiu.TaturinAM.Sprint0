// Tyuiu.Taturinam.CoursControl_0.Sprint0.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"
// TODO: This is an example of a library function
class Service : public ISprint0Task8V0
{
	int Control(int a)override
	{
		return(a / 100) * ((a / 10) % 10) * (a % 10);
	}
};
