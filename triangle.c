#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("enter sides of triangle");
    scanf("%d%d%d",&s1,&s2,&s3);

    if(((s1+s2)>s3)&&((s2+s3)>s1)&&((s1+s3)>s2))//for valid and invalid check

   { if(s1==s2)&&(s2==s3)
    printf("it is a equilateral triangle");
    
    else if(((s1==s2)&&(s2!=s3)||((s2==s3)&&(s3!=s1)||(s3==s1)&&(s1!=s2))))
    printf("triangle is isosceles");

    else 
    printf("triangle is scalene");}

    else
    printf("triangle is invalid");


    return 0;

}