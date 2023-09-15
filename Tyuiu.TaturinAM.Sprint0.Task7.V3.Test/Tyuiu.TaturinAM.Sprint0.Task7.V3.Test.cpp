#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TaturinAM.Sprint0.Task7.V3.Lib/Tyuiu.TaturinAM.Sprint0.Task7.V3.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTaturinAMSprint0Task7V3Test
{
	TEST_CLASS(TyuiuTaturinAMSprint0Task7V3Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Init
			ISprintTask7* date = new Service();
			int a = 12345;
			int b = 4;
			bool r;
			//run
			r = date->Rezalt(a, b);
			//Valid
			Assert::AreEqual(true, r);
		}
	};
}
