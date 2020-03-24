#include "gtest/gtest.h"
#include "googletest_tutorial/calculator.h"

namespace
{
    class TestCalculator : public testing::Test
    {
      protected:
        googletest_tutorial::Calculator m_calculator;
    };

    TEST_F(TestCalculator, addInts)
    {
        int result = m_calculator.add(3, 4);
        ASSERT_EQ(result, 7);
    }

    TEST_F(TestCalculator, addDoubles)
    {
        double result = m_calculator.add(3.1, 4.2);
        ASSERT_DOUBLE_EQ(result, 7.3);
    }
} // namespace