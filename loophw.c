#include <stdio.h>
int main()
{
    int n, count;
    printf("enter the number");
    scanf("%d", &n);

    count = -n;
    while (count <= n)

    {

        printf("%d\n", count);
        count = count + 1;
    }
    return 0;
}