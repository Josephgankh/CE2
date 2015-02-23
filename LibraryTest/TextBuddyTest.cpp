#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TextBuddyTest
{		
	TEST_CLASS(TextBuddyTest)
	{
	public:
		
		TEST_METHOD(ConstructorTest)
		{
			TextBuddy program;
			string test[5];

			program.outputFile = "test";
			int i = program.findEmpty(program.textList);
	
			Assert::AreEqual(0, 0);
			
		}

	};
}