#include "gtest/gtest.h"
#include "googletest_tutorial/calculator.h"

namespace
{
    TEST(testCalculator, addInts)
    {
        googletest_tutorial::Calculator calculator;
        int result = calculator.add(3, 4);
        ASSERT_EQ(result, 7);
    }

    TEST(testCalculator, addDoubles)
    {
        googletest_tutorial::Calculator calculator;
        double result = calculator.add(3.1, 4.2);
        ASSERT_DOUBLE_EQ(result, 7.3);
    }
} // namespace