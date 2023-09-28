#include <stdio.h>

int main()
{
    int age[5];
    /**
    This is an array of integers. It can hold 5 integers.
    Indexing of the array starts from 0 to n-1.
    1st element of array age[0]
    2nd element of array age[1]
    nth element of array age[n - 1]
    */

    printf("Number of elements = %d\n", sizeof(age) / sizeof(int));
    printf("age[5] takes %d bytes from memory\n", sizeof(age));

    printf("age[0] = ");
    scanf("%d", &age[0]);

    printf("age[1] = ");
    scanf("%d", &age[1]);

    printf("age[2] = ");
    scanf("%d", &age[2]);

    printf("age[3] = ");
    scanf("%d", &age[3]);

    printf("age[4] = ");
    scanf("%d", &age[4]);

    int sum = age[0] + age[1] + age[2] + age[3] + age[4];
    double avg = (double)sum / 5.0;

    printf("Sum of age = %d, average of age = %lf\n", sum, avg);
    return 0;
}
