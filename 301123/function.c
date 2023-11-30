#include <stdio.h>

int adder(int a, int b)
{
    int sum = a + b;
    return sum;
}

int cube(int x)
{
    int result = x * x * x;
    return result;
}

void printer(int n)
{
    for (int i = 1; i <= n; i++) printf("i = %d\n", i);
}

int sub(int a, int b);

void manipulate(int x)
{
    printf("%d\n", &x);
    ++x;
}

int main()
{
    // int sum = adder(1, 2);
    // printf("Sum = %d\n", sum);

    // sum = adder(10, 12);
    // printf("Sum = %d\n", sum);

    // int cb = cube(3);
    // printf("Cube = %d\n", cb);

    // cb = cube(4);
    // printf("Cube = %d\n", cb);

    // printer(10);

    int x = 10;
    printf("x = %d\n", x);
    printf("%d\n", &x);
    manipulate(x);
    printf("x = %d\n", x);



}

int sub(int a, int b)
{
    int sub = a - b;
    return sub;
}
