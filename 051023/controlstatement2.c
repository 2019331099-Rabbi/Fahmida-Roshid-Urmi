#include <stdio.h>

/**
Task:
Let we have an integer variable "number"
1. Input an integer to "number"
2. Make a control statement like the following
   if number is positive, print "Positive Number"
   if number is negative, print "Negative Number"
   if number is 0, print "Oh! it is zero"
*/

int main()
{
    int number;
    printf("Number = ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Positive Number");
    }
    else if (number < 0) {
        printf("Negative Number");
    }
    else {
        printf("Oh! it is zero");
    }
    return 0;
}
