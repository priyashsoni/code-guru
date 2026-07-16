#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter angles of sides of triangle");
    scanf("%d%d%d",&s1,&s2,&s3);

    if((s1+s2+s3)==180)
    printf("triangle is valid");

    else 
    printf("triangle is invalid");

    return 0;
}

    