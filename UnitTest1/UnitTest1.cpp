#include "pch.h"
#include "CppUnitTest.h"
#include <sstream>
#include "../lab6.3(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestInput)
		{
			const int size = 6;
			int k[size];
			istringstream input("10 20 30 40 50 60");
			cin.rdbuf(input.rdbuf());
			Input(k, size);
			Assert::AreEqual(10, k[0]);
			Assert::AreEqual(20, k[1]);
			Assert::AreEqual(30, k[2]);
			Assert::AreEqual(40, k[3]);
			Assert::AreEqual(50, k[4]);
			Assert::AreEqual(60, k[5]);
		}
		TEST_METHOD(TestPrint)
		{
			const int size = 6;
			int k[size] = { 10, 20, 30, 40, 50, 60 };
			ostringstream output;
			cout.rdbuf(output.rdbuf());
			Print(k, size);
			Assert::AreEqual(string("  10  20  30  40  50  60\n"), output.str());
		}
	};
}
