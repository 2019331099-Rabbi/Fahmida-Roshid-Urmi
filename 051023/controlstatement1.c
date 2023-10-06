#include <stdio.h>

/**
Let we have a variable "age"
We check if a person is adult or not based on age

Task:
1. Input age
2. Print "The person is adult", if age is greater or equal 18
   print "Baby Baby", if age is smaller than 18
*/

int main()
{
    int age;
    printf("age: ");
    scanf("%d", &age);

    if (age >= 8) {
        printf("The person is an adult\n");
    }
    else {
        printf("Baby Baby\n");
    }

    return 0;
}
