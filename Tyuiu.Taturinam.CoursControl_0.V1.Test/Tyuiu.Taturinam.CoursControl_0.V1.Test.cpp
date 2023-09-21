#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.Taturinam.CoursControl_0.Sprint0.V1.Lib/Tyuiu.Taturinam.CoursControl_0.Sprint0.V1.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTaturinamCoursControl0V1Test
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V0* date = new Service;
			int a = 123;
			Assert::AreEqual(6, date->Control(a));
		}
	};
}
