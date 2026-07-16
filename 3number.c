#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    
    if((a>b)&&(b>=c))
    printf("a is the greatest");
    
    if((b>a)&&(a>=c))
    printf("b is the greatest");

    if((c>a)&&(a>=b))
    printf("c is the greatest");

    if((a==b)&&(b==c))
    printf("a,b and c all are equal");

    if((a==b)&&(b>c))
    printf("a and b are equal and greater than c");

    if((b==c)&&(c>a))
    printf("b and c are equal and greater than a");

    if((a==c)&&(c>b))
    printf("a and c are equal and greater than c");

    return 0;
}