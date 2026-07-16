#include <stdio.h>
int main()
{
    int n1, n2, count1, count2, max, min, count;
    printf("enter first value,n1");
    scanf("%d", &n1);
    printf("enter second value,n2");
    scanf("%d", &n2);
    count = 1;

    {
        if (n1 > n2)
            max = n1;
        min = n2;
        if (n2 > n1)
            max = n2;
        min = n1;
        while (max > 0)
        {
            printf("%d\n", max);
            max = max - 1;
            if (count <= min)
                printf("%d\n", count);
            count++;
        }
        return 0;
    }
}
