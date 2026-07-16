#include <stdio.h>
int main()
{
    int n1, n2, max, count, min, digit, dig, c;
    printf("enter n1 and n2\n");
    scanf("%d%d", &n1, &n2);

    min = 9;
    max = 0;

    while (n1 != 0)
    {
        digit = n1 % 10;
        if (digit > max)
            max = digit;
        n1 = n1 / 10;
    }

    while (n2 != 0)
    {
        dig = n2 % 10;
        if (dig < min)
            min = dig;
        n2 = n2 / 10;
    }

    c = max * min;
    if (c % 2 != 0)
        c = c - 1;

    if (min % 2 != 0)
        min = min + 1;

    while (min <= c)
    {
        printf("%d\n", min);
        min = min + 2;
    }
    return 0;
}
