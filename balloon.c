#include <stdio.h>
int main()
{
    int bcx, bcy, r, px, py, area;
    printf("Enter position of x axis y axis and radius");
    scanf("%d%d%d", &bcx, &bcy, &r);

    area = 3.14 * r * r;
    printf("enter x and y coordinate of bullet");
    scanf("%d%d", &px, &py);

    if (((px - bcx) * (px - bcx) + (py - bcy) * (py - bcy)) < (r * r))
        printf("balloon will burst definately\n");

    else if

        (((px - bcx) * (px - bcx) + (py - bcy) * (py - bcy)) == (r * r))
        printf("high chances of bursting of balloon\nbullet at boundary of balloon\n");

    else if (((px - bcx) * (px - bcx) + (py - bcy) * (py - bcy)) > (r * r))
        printf("balloon will not burst\n");

    printf("area of balloon = %d\n sq units", area);

    return 0;
}