#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1/Lab 6.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = generateNumbers();
			Assert::AreEqual(t, 5);
		}
	};
}
