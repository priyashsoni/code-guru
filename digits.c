#include<stdio.h>
int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);

    if((n<-99)||(n>99))
    printf("it has more than 2 digits");

    else if((n>-10)&&(n<9))
    printf("it is a single digit number");

    else if((n>=-99)||(n<=99))
    printf("it has 2 digits");

    return 0;
}