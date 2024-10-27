#include "pch.h"
#include "CppUnitTest.h"
#include "../LB8.2/main.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestContainsWordStartingWithA_True)
        {
            string input = "apple pie is tasty";
            bool expectedOutput = true;

            bool actualOutput = containsWordStartingWithA(input);

            Assert::AreEqual(expectedOutput, actualOutput);
        }

        TEST_METHOD(TestContainsWordStartingWithA_False)
        {
            string input = "Hello 123 World!";
            bool expectedOutput = false;

            bool actualOutput = containsWordStartingWithA(input);

            Assert::AreEqual(expectedOutput, actualOutput);
        }

        TEST_METHOD(TestContainsWordStartingWithA_EmptyString)
        {
            string input = "";
            bool expectedOutput = false;

            bool actualOutput = containsWordStartingWithA(input);

            Assert::AreEqual(expectedOutput, actualOutput);
        }

        TEST_METHOD(TestContainsWordStartingWithA_SingleWord)
        {
            string input = "apple";
            bool expectedOutput = true;

            bool actualOutput = containsWordStartingWithA(input);

            Assert::AreEqual(expectedOutput, actualOutput);
        }

        TEST_METHOD(TestContainsWordStartingWithA_NoWords)
        {
            string input = "     ";
            bool expectedOutput = false;

            bool actualOutput = containsWordStartingWithA(input);

            Assert::AreEqual(expectedOutput, actualOutput);
        }
    };
}
