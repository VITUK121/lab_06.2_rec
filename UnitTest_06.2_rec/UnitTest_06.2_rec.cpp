#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_06.2_rec/lab_06.2_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest062rec
{
	TEST_CLASS(UnitTest062rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1,3,5,7,9,2,4,6,8 }, size = 9;
			Assert::AreEqual(counter(arr, size, 0), 5);
		}
	};
}
