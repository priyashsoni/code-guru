#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,t,avg;
    printf("enter marks of four subjects");
    scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
    t=s1+s2+s3+s4;
    avg=t/4;
    if(avg>=33)
    printf("student is pass");

    else 
    printf("student is fail");
    return 0;
}