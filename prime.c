#include <stdio.h>
int main()
{
    int n, flag, i;
    printf("enter a value");
    scanf("%d", &n);

    flag == 1;
    for (i = 2; i < n; i++)
        ;
    {
        if ((n % i) == 0)
            flag == 0;
    }
    if (flag == 0)
        printf("the number is not prime");
    else
        printf("the number is prime");
    return 0;
}