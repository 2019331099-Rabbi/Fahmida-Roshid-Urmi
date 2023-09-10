#include <stdio.h>

/**
unary operator
++, --

a++ => a = a + 1
++a => a = a + 1

a-- => a = a - 1
--a => a = a - 1

++a => Increment first, then assign
a++ => Assign first, then increment

a--
--a
same as increment
*/

int main()
{
    int a = 5;
    int b = 5;
    printf("1 a = %d\n", a++);
    printf("2 a = %d\n", a);
    printf("1 b = %d\n", ++b);
    printf("2 b = %d\n", b);
    return 0;
}
