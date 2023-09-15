// Tyuiu.TaturinAM.Sprint0.Task7.V3.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class service : public ISprint0Task7

{
	virtual bool Rezalt(int a, int b) override
	{
		int aa = a;
		while (aa > 0)
		{
			int num == aa % 10;
			if (num == b)
			{
				return true;
			}
			aa /= 10;
		}
		return false;
	}
};
