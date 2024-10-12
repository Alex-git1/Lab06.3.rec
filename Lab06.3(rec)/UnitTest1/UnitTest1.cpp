#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab06.3(rec)/Lab06.3(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5];
			generateArray(a, 5);

			for (int i = 0; i < 5; i++) {
				Assert::IsTrue(a[i] >= 1 && a[i] <= 15);
			}
		}
	};
}
