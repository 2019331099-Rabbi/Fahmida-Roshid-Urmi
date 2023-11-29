#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Fahmida Urmi";

    printf("Length of string = %d\n", strlen(name));
    /**
    strlen(): It prints the total number of characters in a string including space
    and any other character
    */

    int i, count, len;
    count = 0;
    len = strlen(name);

    for (i = 0; i < len; i++) {
        if (name[i] != ' ') count++;
        /// If the character name[i] is not space, then increment count
    }

    printf("Total character except space = %d\n", count);
    return 0;
}
