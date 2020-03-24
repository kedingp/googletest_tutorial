#include "gtest/gtest.h"

namespace
{
    /* This class is needed because here we define the parameter tpyes. */
    class ExampleTest : public ::testing::TestWithParam<std::pair<int, int>>
    {
    };

    /* Google Test will get test data from this macro. */
    INSTANTIATE_TEST_SUITE_P(TestWithPairs,
                             ExampleTest,
                             ::testing::Values(std::make_pair(1, 1), std::make_pair(2, 2), std::make_pair(3, 3)));

    /* Google Test will invoke this test for each value */
    TEST_P(ExampleTest, getParam)
    {
        int a = GetParam().first;
        int b = GetParam().second;

        // TODO: do something
        ASSERT_EQ(a, b);
    }
} // namespace