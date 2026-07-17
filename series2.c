#include <stdio.h>
int main()
{
    int n, count;
    printf("enter a value");
    scanf("%d", &n);
    count = 1;

    while (count <= n)
    {
        if (count % 2 == 0)
            count = count - 1;
        count++;
        if (count % 2 != 0)
            count = count + 1;
        count = count + 1;
    }
    return 0;
}