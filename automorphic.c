#include <stdio.h>
int main()
{
    int n, sqn, dig, sig, flag;
    printf("enter a value");
    scanf("%d", &n);
    sqn = n * n;
    flag = 1;

    while ((n > 0) && (sqn > 0))
    {
        dig = n % 10;
        n = n / 10;
        sig = sqn % 10;
        sqn = sqn / 10;
        if (dig != sig)
        {
            flag = 0;
        }
    }

    if (flag == 1)
        printf("it is an automorphic number");
    else
        printf("it is not an automorphic number");
    return 0;
}