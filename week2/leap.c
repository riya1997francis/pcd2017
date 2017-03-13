#include <stdio.h>
int   leap(int y)
{int res;

    if ((y%400==0||y%4==0)&y%100!=0)
        printf("year is a leap year");
    else
    printf("year is not a leap year");
    return res;

}
int main()
{int res;
    int y;
    printf("enter a year");
    scanf("%d", & y);
    res =  leap(y);
    return 0;

}
