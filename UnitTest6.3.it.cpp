#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3.it/lab6.3.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63it
{
	TEST_CLASS(UnitTest63it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b[] = { 3, -8, 6, -10, 5 };
			int result = CountNegative(b, 5);
			Assert::AreEqual(result, 2);
		}
	};
}
