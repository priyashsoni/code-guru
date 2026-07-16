#include <stdio.h>
int main()
{
    int n1, n2, count1, count2, max, min, count;
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

    if (max % 2 == 0)
        max = max - 1;
    else
        max = max;

    if (min % 2 != 0)
        min = min - 1;
    else
        min = min;

    count1 = max;
    count2 = 2;
    while ((count1 <= max) && (count1 >= 1))

    {
        printf("%d\n", count1);

        count1 = count1 - 2;
    }

    while ((count2 >= 2) && (count2 <= min))

    {
        printf("%d\n", count2);

        count2 = count2 + 2;
    }
    return 0;
}
