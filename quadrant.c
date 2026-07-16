#include<stdio.h>
int main(){
    int x,y;
   printf("enter value of x and y");
   scanf("%d%d",&x,&y);

   if((x>0)&&(y>0))
   printf("this point lies in 1st Quadrant");

   if((x<0)&&(y>0))
   printf("this point lies in 2nd Quadrant");

   if((x<0)&&(y<0))
   printf("this point lies in 3rd Quadrant");

   if((x>0)&&(y<0))
   printf("this point lies in 4th Quadrant");

   if((x==0)&&(y==0))
   printf(" points are at origin");

   if((x==0)&&(y>0))
   printf("x is at origin and y lies in 1st or 2nd Quadrant");

   if((x==0)&&(y<0))
   printf("x is at origin and y lies in 3rd or 4th Quadrant");

   if((y==0)&&(x>0))
   printf("y is at origin and x is at 1st or 4th Quadrant");

   if((y==0)&&(x<0))
   printf("y is at origin and x is at 3rd or 4th Quadrant");

   return 0;


}