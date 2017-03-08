#include<stdio.h>
#include<math.h>
float convert(float d)
{
float r ;
r =(3.14/180)*d;
return r;
}
float compute(float x)
{
float t,s,p,d ;
int i;
t = x;
s= x;
d = x;
for(i=3;d>0.000001;i=i+2)
{
p=t;
t=(-t*x*x)/(i*(i-1));
d= fabs(p-t);
s=s+t;
}
return s;
}
int main()
{
float d, x,s;
printf("enter the degree");
scanf("%f", &d);
x= convert(d);
s=compute(x);
printf("sin(%f) = %f" ,d ,s);
}
