GTest Framework

    Difficulty Level : Basic
    Last Updated : 28 Jan, 2021

What is Googletest?

    It is a test framework i.e., a software tool for writing and running unit tests.
    It is a library for writing C++ tests.
    It is based on xUnit architecture which is a set of “Frameworks” for programming and automated execution of test cases.

Why Googletest?

    Googletest helps us to write better C++ tests.
    Independent and Repeatable: Googletest isolates the tests by running each of them on a different object.
    Portable and Reusable: Googletest works on different Oses (Linux, Windows, or a Mac), with different compilers.

    When tests fail, it should provide as much information about the problem as possible.

Nomenclature:

    TestSuite:It is used for grouping related tests.
    TEST(): It exercises a particular program path with specific input values and verify the result.



Basic Concepts:

    Assertions:
        A statements that check whether a condition is true.
        Output: success, nonfatal failure, or fatal failure(aborts the current function).
    Test fixture class:
        Collection of multiple tests in a test suite that need to share common objects and subroutines.

In below lines * represent multiple character such as EQ / NE / LT / LE / GT / GE.

    ASSERT_*: Generate fatal failures when they fail, and abort the current function immediately. (possibly skipping clean-up code that comes after it, it may cause a space leak).
    EXPECT_*:Generate nonfatal failures, which don’t abort the current function.
    Examples:

        ASSERT_EQ, ASSERT_NE, ASSERT_LT, ASSERT_GT, ASSERT_GE.
        EXPECT_WQ, EXPECT_NE, EXPECT_LT, EXPECT_GT, EXPECT_GE.




Fatal assertion	Nonfatal assertion	Verifies
ASSERT_TRUE (condition);	EXPECT_TRUE (condition);	condition is true
ASSERT_FALSE (condition);	EXPECT_FALSE (condition);	condition is false
ASSERT_STREQ(str1, str2);	EXPECT_STREQ(str1, str2);	the two string str1 and str2 have the same content
ASSERT_STRNE(str1, str2);	EXPECT_STRNE(str1, str2);	the two strings str1 and str2 have different content
ASSERT_STRCASEEQ(str1, str2);	EXPECT_STRCASEEQ(str1, str2);	the two string str1 and str2 have the same content, ignoring the case
ASSERT_STRCASENE(str1, str2);	EXPECT_STRSTRCASENE(str1, str2);	the two strings str1 and str2 have different content, ignoring the case


Simple tests:
TEST():

    A macro to define and name a test function.
    Use the various Googletest assertions to check values.
    If any assertion in the test fails (either fatally or non-fatally), or if the test crashes, the entire test fails. Otherwise, it succeeds.

   TEST(TestSuiteName, TestName) {
      ... test body ...
   }

Test Fixtures:

    Using the Same Data Configuration for Multiple Tests.
    Derive a class from ::testing::Test. Start its body with protected:, as we will want to access fixture members from sub-classes.
    If necessary, write a default constructor or SetUp().
    If necessary, write a default destructor or TearDown().
    Use TEST_F(), instead of TEST().

TEST_F(TestFixtureName, TestName) {
   ... test body ...
}

Invoking the Tests:

    RUN_ALL_TESTS();
        Returns 0: All tests are successful.
        Returns 1: otherwise.

Examples:

A factorial function:

int factorial(int n)
{
    // If n < 1;
    return -1;
    
    // Else factorial = n!;
    return factorial;
}

TEST(FactorialTest, FactorialOfZeroShouldBeOne)
{
    ASSERT_EQ(1, factorial(0));
}

TEST(FactorialTest, FactorialOfPositiveNos)
{
    ASSERT_EQ(1, factorial(1));
    ASSERT_EQ(24, factorial(4));
    ASSERT_EQ(120, factorial(5));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

Command Line Arguments:

    Dump the output into XML format by passing:

    –gtest_output=”xml:report.xml”

    If want to run multiple times:

    –gtest_repeat=2

    Debugger invoked on failure:

    –gtest_break_on_failure

    Not all the tests needs to be run all the times:

    –gtest_filter=<test string>




https://www.geeksforgeeks.org/gtest-framework/


