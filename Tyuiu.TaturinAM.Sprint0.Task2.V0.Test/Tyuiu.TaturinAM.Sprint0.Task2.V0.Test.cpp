#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TaturinAM.Sprint0.Task2.V0.Lib/Tyuiu.TaturinAM.Sprint0.Task2.V0.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Init
			ISprint0Task2V0* service = new Service();
			int a = 3;
			int b = 4;
			int c;

			//run
			c = service->Add(a, b);

			//Valid
		    Assert::AreEqual(7, c);
		}
	};
}
