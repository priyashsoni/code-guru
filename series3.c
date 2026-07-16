#include <stdio.h>
int main()
{
    int n, count;
    printf("enter a value");
    scanf("%d", &n);
    count = 1;
    while (count <= n / 2)
    {
        printf("%d\n", n - (n - count));
        printf("%d\n", n - (count - 1));
        count = count + 1;
    }
    return 0;
}