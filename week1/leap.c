#include<stdio.h>
int main()
{
int y;
printf("enter a year ");
scanf("%d" ,&y );
if (y % 4==0)
{
if (y % 100==0)
{
if (y % 400==0)
printf(" is  a leap year%d" , y);
else 
printf(" is not  a leap year%d" , y);
}

printf("is  a leap year %d" , y);
}
else

printf(" is not  a leap year%d" , y);
return 0;
}
