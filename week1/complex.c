#include<stdio.h>
struct complex
{
float real;
float img;
};
 struct complex getcomplex()
{
struct complex c;
printf("enter real and img part");
scanf("%f % f" , &c.real ,&c.img);
return c;
}
struct complex add(struct complex a, struct complex b)
{
struct complex c;
c.real = a.real+b.img;
 c.img= a.real+b.img;
return c;
}
void printcom(struct complex x)
{
printf("%f + i%f \n" , x.real , x.img);
}
int main()
{
struct complex a, b, c;
a= getcomplex();
b= getcomplex();
c=add(a,b);
printcom(c);
return 0 ;
}
