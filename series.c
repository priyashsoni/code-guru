#include <stdio.h>
int main()
{
    int n, count;
    printf("enter a number");
    scanf("%d", &n); // n=number of terms
    count = 110;
    while (count <= 110 * n)

    {
        printf("%d\n", count);
        count = count + 110;
    }
    return 0;
}