#include <stdio.h>
int main()
{
    int n, count, pc, even, odd, gap;
    printf("enter a value");
    scanf("%d", &n);
    odd = 5;
    even = 20;
    pc = 10;
    gap = 3;
    while (pc >= 1)

    {

        if ((pc % gap) == 0)
        {
            printf("%d\n", odd);
            odd = odd - 2;
        }
        else
        {
            printf("%d\n", even);
        }
        even = even - 2;

        pc = pc - 1;
    }
    return 0;
}