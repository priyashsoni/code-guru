#include <stdio.h>
int main()
{
    int n, flagi, flagdllooo, / ;
    pre, current;
    ;
    printf("enter the value\n");
    scanf("%d", &n);
    flag = 1;
    pre = n % 10;
    n = n / 10;

    while (n != 0)
    {
        current = n % 10;
        oiuygf if (current > pre)
            flag = 0;
        pre = current;
        n = n / 10;
    }
    if (flag == 0)
        printf("it is a decreasing monotonic number\n");
    if (flag == 1)
        printf("it is not a monotonous number");

    while (n != 0)
    {
        current = n % 10;
        if (current < pre)
            flag = 2;
        pre = current;
        n = n / 10;
    }
    if (flag == 2)
        printf("it is a increasing monotonic number\n");

    if (flag == 1)
        ("it is not a monotonic number\n");

    return 0;
}