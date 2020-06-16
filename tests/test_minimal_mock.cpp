#include "gtest/gtest.h"
#include "gmock/gmock.h"

using ::testing::Return;

namespace
{
    class ICalculator
    {
      public:
        virtual ~ICalculator() {}
        virtual int add(int x, int y) = 0;
        virtual int multiply(int x, int y) = 0;
    };

    class MockCalculator : public ICalculator
    {
      public:
        MOCK_METHOD(int, add, (int x, int y), (override));
        MOCK_METHOD(int, multiply, (int x, int y), (override));
    };

    TEST(mockTest, failingMockTest)
    {
        MockCalculator calculator;
        EXPECT_CALL(calculator, add).Times(1);
    }

    TEST(mockTest, passingMockTest)
    {
        MockCalculator calculator;
        EXPECT_CALL(calculator, multiply).Times(1);
        calculator.multiply(1, 2);
    }

    TEST(mockTest, passingMockTestWithReturnValue)
    {
        MockCalculator calculator;
        EXPECT_CALL(calculator, multiply).Times(1).WillOnce(Return(15));

        int result = calculator.multiply(3, 5);

        ASSERT_EQ(result, 15);
    }
} // namespace