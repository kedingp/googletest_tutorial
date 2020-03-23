#include "googletest_tutorial/calculator.h"

namespace googletest_tutorial
{
    Calculator::Calculator() {}
    Calculator::~Calculator() {}

    int Calculator::add(int x, int y) { return x + y; }

    double Calculator::add(double x, double y) { return x + y; }

    int Calculator::multiply(int x, int y) { return x * y; }

    double Calculator::multiply(double x, double y) { return x * y; }

    int Calculator::divide(int x, int y) { return x / y; }

    double Calculator::divide(double x, double y) { return x / y; }
} // namespace googletest_tutorial