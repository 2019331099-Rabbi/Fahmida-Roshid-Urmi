#include <stdio.h>

/**
5 7 2
8 3 1
*/

int main()
{
    int num2d[2][3] = { {5, 7, 2}, {8, 3, 1} };
    int num3d[2][2][3];

    num3d[0][1][2] = 1;
    num3d[1][1][1] = 10;
    num3d[1][0][0] = 33;
    num3d[1][1][2] = 32;

    printf("%d\n", num3d[0][1][2]);
    printf("%d\n", num3d[1][1][1]);
    printf("%d\n", num3d[1][0][0]);
    printf("%d\n", num3d[1][1][2]);


}
