#include<stdio.h>
int main()
{
    int a,b;
    printf("enter values of a and b");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("a is greater");
    if(b>a)
    printf("b is greater");
    if(a==b)
    printf("both are equal");
    return 0;
}
