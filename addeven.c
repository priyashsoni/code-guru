#include <stdio.h>
int main()
{
    int n, count, sum, product;

    printf("enter a value");
    scanf("%d", &n);
    count = 1;
    sum = 0;
    product = 1;

    while (count <= n)

    {

        if (count % 2 == 0)
            sum = sum + count;
        printf("sum of first %d even numbers are %d", n, sum);

        if (count % 2 != 0)
            product = product * count;
        printf("product of first %d odd numbers are %d", n, product);
        count = count + 1;
    }

    return 0;
}