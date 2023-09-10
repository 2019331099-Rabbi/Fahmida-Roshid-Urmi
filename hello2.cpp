#include <stdio.h>
#include <limits.h>

int main()
{
    int val1;
    short int val2;
    long long int val3;
    float val4;
    double val5;
    char ch;
    printf("Int = %d\n", sizeof(val1));
    printf("short = %d\n", sizeof(val2));
    printf("ll = %d\n", sizeof(val3));
    printf("float = %d\n", sizeof(val4));
    printf("double = %d\n", sizeof(val5));
    printf("char = %d\n", sizeof(ch));
}
