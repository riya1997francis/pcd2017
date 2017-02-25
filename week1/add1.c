#include<stdio.h>
int add(int a, int b,int c)
{
return a+b+c;
}
int main()
{
int a =10;
int b =20;
int c= 30;
int d = add(a, b ,c);
printf("result is %d" , d);
return 0;
}

