#include<stdio.h>
int main(){
    int n,count;
    printf("enter the number");
    scanf("%d",&n);

    if(n%2==0)
    count=-n;
    else
    count=-n+1;

    while(count<=n)
    {
        printf("%d\n",count);
        count=count+2;
    }
return 0;
}