#include <stdio.h>
#include <string.h>

/// Urmi

int main()
{
    char name[100];
    printf("name = ");
    scanf("%s", name); // string input don't need ampersand(&)

    printf("Number of characters in name = %d\n", strlen(name));
    printf("name = %s\n", name);
    /**
     Always take 1 byte more. Assing null(\0) character at the end of the string.
     That's why it takes 1 extra byte.
     null character indicate the end of the string.
    */

    name[3] = '\0'; // null character terminate string after 3rd character
    printf("%s %d\n", name, strlen(name));
}
