#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *length, int *width);
extern "C" int getArea(int* length, int* width);
extern "C" int setLength(int input, int *length);
extern "C" int setWidth(int input, int* width);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestgetPerimeter)
		{
			int result;
			int length1 = 3, width1 = 2;
			result = getPerimeter(&length1, &width1);
			Assert::AreEqual(10, result);
		}

		TEST_METHOD(TestgetArea)
		{
			int length = 70;
			int width = 10;
			int expectedresult = getArea(&length, &width);
			Assert::AreEqual(700, expectedresult);

		}

		TEST_METHOD(Setlength1)
		{
			int length;
			int input = 45;
			setLength(input, &length);
			{
				
				Assert::AreEqual(input, length);
			}
		}

		TEST_METHOD(setlength2)
		{//when the number is equal to 0
			int length;
			int input = 0;
			setLength(input, &length);
			{
				Assert::AreEqual(input, length);
			}
		}
		
		TEST_METHOD(setlength3)
		{//when the number is greater than 100 
			int length;
			int input = 100;
			setLength(input, &length);
			{
				Assert::AreEqual(input, length);
			}
		}

		TEST_METHOD(setWidth1)
		{
			int width;
			int input = 1;
			setWidth(input, &width);
			{
				Assert::AreEqual(input, width);
			}
		}

		TEST_METHOD(setWidth2)
		{//when the number is less equal to 0 or less than 1
			int width;
			int input = 0;
			setWidth(input, &width);
			{
				Assert::AreEqual(input, width);
			}
		}
		TEST_METHOD(setWidth3)
		{//when the number is greater than 100 
			//changed to when its equal to 100
			int width;
			int input = 100;
			setWidth(input, &width);
			{
				Assert::AreEqual(input, width);
			}
		}
	};
}