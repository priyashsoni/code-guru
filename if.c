#include<stdio.h>
int main()
{
    int a;
    printf("Enter a value");
    scanf("%d",&a);
    if(a>0)
    printf("a is a positive number");
    if(a<0)
    printf("a is a negative number");
    if(a==0)
    printf("a is zero");
    return 0;
}