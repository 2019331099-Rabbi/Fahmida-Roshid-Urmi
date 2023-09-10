#include <stdio.h>

/**
Arithmetic Operator
+, -, *, /, %
*/

int main()
{
    int a = 10;
    int b = 3;

    /// Addition
    printf("a = %d, b = %d, sum = %d\n", a, b, a + b);
    printf("a = %d, b = %d\nsum = %d\n", a, b, a + b);

    /// Substraction
    printf("a = %d, b = %d, sub = %d\n", a, b, a - b);

    /// Multiplication
    printf("a = %d, b = %d, mul = %d\n", a, b, a * b);

    /// Mod
    printf("a = %d, b = %d, mod = %d\n", a, b, a % b);

    /// Division
    double div = (double)a / (double)b;
    printf("a = %d, b = %d, div = %lf\n", a, b, div);

    return 0;
}
