#include <stdio.h>

/**
Uppercase to Lowercase
----------------------
A -> 65
a -> 91
The difference between 'A' and 'a' is +32. We have to add 32 with an uppercase letter
to convert it to lowercase.

Lowercase to Uppercase
----------------------
This is the reverse process. We have to subtract 32 from the Lowercase Letter
to convert it to uppercase.
*/

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
