#include <stdio.h>
int main()
{
    int count, sum, n;
    printf("enter the number");
    scanf("%d", &n);

    count = 1;
    sum = 0;

    while (count <= n)

    {

        sum = sum + count;
        count = count + 1;
    }
    printf("%d", sum);

    return 0;
}