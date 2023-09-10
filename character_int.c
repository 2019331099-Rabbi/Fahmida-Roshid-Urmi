#include <stdio.h>

int main()
{
    /**
    Every character in C, has its corresponding integer value
    */
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';
    printf("%c = %d\n", ch1, ch1);
    printf("%c = %d\n", ch2, ch2);
    printf("%c = %d\n", ch3, ch3);

    printf("--------------------\n");

    int n1 = 65;
    int n2 = 66;
    int n3 = 67;
    printf("%d = %c\n", n1, n1);
    printf("%d = %c\n", n2, n2);
    printf("%d = %c\n", n3, n3);

    return 0;
}
