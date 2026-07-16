#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter value of x ,y and z");
    scanf("%d%d%d", &x, &y, &z);

    if (abs(x - z) < abs(y - z))
        printf("x will reach to z");

    else if (abs(x - z) > abs(y - z))
        printf("y will reach to z");

    else
        printf("both will reach to z at same time");
    return 0;
}