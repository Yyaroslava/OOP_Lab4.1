#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab4.1/Human.cpp"
#include "../OOP Lab4.1/Mammals.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest41
{
	TEST_CLASS(UnitTest41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Human H(26, "Dean");
			string s = "[ Kind: Human, Age: 26, Name: Dean ]";
			Assert::AreEqual(H.Description(), s);
		}
	};
}
