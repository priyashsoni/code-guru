#include <stdio.h>
int main()
{
    int amt, rs500, rs200, rs100, rs50, rs20, rs10, rs5, rs2, rs1;
    printf("enter amount");
    scanf("%d", &amt);
    rs500 = amt / 500;
    amt = amt % 500;
    rs200 = amt / 200;
    amt = amt % 200;
    rs100 = amt / 100;
    amt = amt % 100;
    rs50 = amt / 50;
    amt = amt % 50;
    rs20 = amt / 20;
    amt = amt % 20;
    rs10 = amt / 10;
    amt = amt % 10;
    rs5 = amt / 5;
    amt = amt % 5;
    rs2 = amt / 2;
    amt = amt % 2;
    rs1 = amt / 1;
    amt = amt % 1;
    printf("number of 500 rupee notes are %d\n", rs500);
    printf("number of 200 rupee notes are %d\n", rs200);
    printf("number of 100 rupee notes are %d\n", rs100);
    printf("number of 50 rupee notes are %d\n", rs50);
    printf("number of 20 rupee notes are %d\n", rs20);
    printf("number of 10 rupee notes are %d\n", rs10);
    printf("number of 5 rupee notes are %d\n", rs5);
    printf("number of 2 rupee coin are %d\n", rs2);
    printf("number of 1 rupee coin are %d\n", rs1);

    return 0;
}