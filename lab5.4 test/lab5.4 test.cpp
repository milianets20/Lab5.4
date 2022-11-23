#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.04/Lab5.04.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab54test
{
	TEST_CLASS(lab54test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = S0(10, 20);
			Assert::AreEqual(a, 0.466532, 0.0001);
		}
	};
}
