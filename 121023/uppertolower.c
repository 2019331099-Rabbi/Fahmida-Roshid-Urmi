#include <stdio.h>

int main()
{

    char upper1 = 'B';
    char lower1 = upper1 + 32;

    printf("%c %c\n", upper1, lower1);
    printf("%d %d\n", upper1, lower1);

    char lower2 = 'z';
    char upper2 = lower2 - 32;

    printf("%c %c\n", lower2, upper2);
    printf("%d %d\n", lower2, upper2);

    return 0;
}
