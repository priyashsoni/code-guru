#include<stdio.h>
int main()
{
    int a,b,c,d,max;
    printf("enter values of a,b,c and d");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    max=a;
    else
    max=b;
    if(c>max)
    max=c;
    if(d>max)
    max=d;
    printf(" %d is the greatest",max);
    return 0;
}