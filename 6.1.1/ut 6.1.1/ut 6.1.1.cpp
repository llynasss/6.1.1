#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ut611
{
	TEST_CLASS(ut611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 0;

			int s[4] = { 1, 2, 3, 3 };

			int real = sum(s, 4, k);

			int expected = 6;

			Assert::AreEqual(real, expected);
		}
	};
}
