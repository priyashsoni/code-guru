#include <stdio.h> //collatz
int main()
{
    int n, count;
    printf("enter the number");
    scanf("%d", &n);

    if (n % 2 != 0)
        count = 3 * n + 1;
    else
        count = n / 2;

    while (count >= 1)

    {

        printf("%d\n", count);
    }
    return 0;
}