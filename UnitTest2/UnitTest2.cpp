#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1/Lab 6.1rec.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test[20] = { -7, -10, 7, 2, -4, -4, -10, -11, 4, -11, -13, -13, -14, -8, 1, -5, -11, -4, 0, 4, };
			int a;
			a = countElements(test, 20,0 , 0);
			Assert::AreEqual(a, 3);

			a = sumElements(test, 20, 0, 0);
			Assert::AreEqual(a, 10);
		}
	};
}
