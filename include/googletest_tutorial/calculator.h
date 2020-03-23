namespace googletest_tutorial
{
    class Calculator
    {
      public:
        Calculator();
        ~Calculator();

        int add(int x, int y);
        double add(double x, double y);
        int multiply(int x, int y);
        double multiply(double x, double y);
        int divide(int x, int y);
        double divide(double x, double y);
    };
} // namespace googletest_tutorial