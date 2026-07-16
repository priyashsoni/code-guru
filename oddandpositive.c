#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);

    if(a>0)
    printf("a is positive");

   else if((a<0))
     printf("a is negative");

    else
    printf("a is neutral");
     
    if(a%2==0)
    printf("a is even");
     
    else
    printf("a is odd");

    
    
    return 0;
}