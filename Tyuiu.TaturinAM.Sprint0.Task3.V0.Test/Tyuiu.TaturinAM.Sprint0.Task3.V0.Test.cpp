#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TaturinAM.Sprint0.Task3.V0.Lib/Tyuiu.TaturinAM.Sprint0.Task3.V0.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			//Init
			ISprint0Task3V0* service = new Service1();
			int a = 3;
			int b = 4;
			int c = 5;
			int d;

			//run
			d = date->Add(a, b, c);

			//Valid
			Assert::AreEqual(12, c);
		}
	};
}
