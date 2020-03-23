#include <iostream>
#include "googletest_tutorial/calculator.h"

int main(int argc, char* argv[])
{
    googletest_tutorial::Calculator calculator;
    std::cout << calculator.add(3, 4) << std::endl;
}