#include <stdio.h>
int main()
{
    int n1, n2, max, min, count;
    printf("enter first value..");
    scanf("%d", &n1);
    printf("enter second value");
    scanf("%d", &n2);
    if (n1 > n2)
    {
        max = n1;
        min = n2;
    }
    else
    {
        max = n2;
        min = n1;
    }
    count = 0;
    while ((max >= 0))
    {
        printf("%d\n", max);
        if (count <= min)
            printf("%d\n", count);
        max = max - 3;
        count = count + 3;
    }
    return 0;
}
