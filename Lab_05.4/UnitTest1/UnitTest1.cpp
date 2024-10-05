#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.4/Lab_05.4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
		    
			
			int N = 1;
			double expS = 1. / ((2 * N + 1) * (2 * N + 1));
			Assert::AreEqual(S0(N), expS, 0.0001);
		}
	};
}
