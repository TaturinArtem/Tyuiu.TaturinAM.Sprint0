#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.Taturinam.CoursControl_1. Sprint0.V1.Lib/Tyuiu.Taturinam.CoursControl_1. Sprint0.V1.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTaturinamCoursControl1Sprint0V1Test
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V3* date = new Service;
			float a = 1;
			float b = 1;
			float c = 1;
			Assert::AreEqual(5, 25, date->Proizved(a, b, c));
		}
	};
}
