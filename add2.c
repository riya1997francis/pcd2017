#include<stdio.h>
#include<stdlib.h>


struct complex
{
    int real ,img;

};
int main()
{
    struct complex a,b,c;
    printf(" Enter real and imaginary of  struct variable a");
    scanf("%d", &a.real);
    scanf("%d", &a.img);

printf(" Enter real and imaginary of  struct variable b");
    scanf("%d", &b.real);
    scanf("%d", &b.img);
c.real = a.real+b.real;
c.img = a.img+b.img;
printf("%d %d",c.real ,c.img);


}
