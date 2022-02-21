#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab1_1/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Time k;
			Assert::AreEqual(189, k.minutes(3,9));
		}
	};
}
