#include <stdio.h> <math.h>
int main()
{
    int x, y, sumx, sumy, count, n;
    printf("enter value of x,y and n");
    scanf("%d%d%d", &x, &y, &n);
    sumx = 0;
    sumy = 0;
    count = 1;

    while (count <= n)
    {
        if ((count % x == 0))
            sumx = sumx + count;
        if (count % y == 0)
            sumy = sumy + count;
        count++;
    }

    if (abs(sumx - sumy) % 2 == 0)
        printf("difference is even");
    else
        printf("difference is odd");
}