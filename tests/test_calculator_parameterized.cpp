#include "gtest/gtest.h"
#include "googletest_tutorial/calculator.h"

namespace
{
    using namespace std;


    class TestCalculator : public ::testing::TestWithParam<tuple<int, int, int>>
    {
    };

    INSTANTIATE_TEST_SUITE_P(ValidValues,
                             TestCalculator,
                             ::testing::Values(make_tuple(1, 2, 3), make_tuple(2, 5, 7), make_tuple(5, 7, 12)));

    TEST_P(TestCalculator, addInts)
    {
        googletest_tutorial::Calculator calculator;
        const int value1 = get<0>(GetParam());
        const int value2 = get<1>(GetParam());
        const int expectedResult = get<2>(GetParam());

        int result = calculator.add(value1, value2);


        ASSERT_EQ(result, expectedResult);
    }

} // namespace