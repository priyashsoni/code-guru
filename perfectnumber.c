#include <stdio.h>
int main()
{
    int n, count, sum;
    printf("enter a value");
    scanf("%d", &n);
    count = 1;
    sum = 0;
    while (count < n)
    {
        if (n % count == 0)
            sum = sum + count;
        count = count + 1;
    }

    if (sum == n)
        printf("yes it is a perfect number");
    else
        printf("no its is not an perfect number");
    return 0;
}