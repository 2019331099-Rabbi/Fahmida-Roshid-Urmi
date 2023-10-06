#include <stdio.h>

/**
Suppose you have 5 friends
Their names are
1. urmi
2. fahmida
3. roshid
4. shahed
5. rabbi

And you know their cgpa
1. 3.71
2. 3.91
3. 3.75
4. 3.33
5. 3.44

Now your task is
1. Input their name and CGPA
2. Store names and CGPA
3. Calculate the average of all CGPA of your friends
*/

int main()
{
    double cgpa[5];
    char names[5][100];

    printf("Name: ");
    scanf("%s", names[0]);
    printf("CGPA: ");
    scanf("%lf", &cgpa[0]);
    printf("name = %s, cgpa = %lf\n", names[0], cgpa[0]);


    printf("Name: ");
    scanf("%s", names[1]);
    printf("CGPA: ");
    scanf("%lf", &cgpa[1]);
    printf("name = %s, cgpa = %lf\n", names[1], cgpa[1]);

    printf("Name: ");
    scanf("%s", names[2]);
    printf("CGPA: ");
    scanf("%lf", &cgpa[2]);
    printf("name = %s, cgpa = %lf\n", names[2], cgpa[2]);

    printf("Name: ");
    scanf("%s", names[3]);
    printf("CGPA: ");
    scanf("%lf", &cgpa[3]);
    printf("name = %s, cgpa = %lf\n", names[3], cgpa[3]);

    printf("Name: ");
    scanf("%s", names[4]);
    printf("CGPA: ");
    scanf("%lf", &cgpa[4]);

    printf("name = %s, cgpa = %lf\n", names[4], cgpa[4]);


    double sum = cgpa[0] + cgpa[1] + cgpa[2] + cgpa[3] + cgpa[4];
    double avg_cgpa = sum / 5.0;
    printf("Average CGPA = %lf\n", avg_cgpa);

    return 0;
}
