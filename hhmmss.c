#include<stdio.h>
int main()
{
    int hh,mm,ss,d;
    printf("enter time in seconds");
    scanf("%d",&ss);
    
    mm=ss/60;
    hh=mm/60;
    ss=ss%60;
    mm=mm%60;
    d=hh/24;
    hh=d%24;
    
    
    
    printf("it's %d days %d hours %d minutes and %d seconds",d,hh,mm,ss);
    return 0;

}