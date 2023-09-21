// Tyuiu.Taturinam.CoursControl_1. Sprint0.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include"../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"
// TODO: This is an example of a library function
class Service : public ISprint0Task8V3
{
	virtual int Proizved(float a, float b, float c)override
	{
		return (5 + (2 * a - b) / (3 + c * c));
	}
};
