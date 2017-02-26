#include<stdio.h>
struct complex
{
  int real,img;

}num[10];
int main()
 {   int n=10,i,sum_real=0,sum_img=0;

    for(i=0;i<n;i++)
    {
    printf("Enter real and imaginary part of a complex number" );
    scanf("%d",&num[i].real);
    scanf("%d", &num[i].img);
    sum_real=sum_real+num[i].real;
    sum_img=sum_img+num[i].img;}
    printf("SUM OF REAL PART %d\n", sum_real);
    printf("SUM OF IMAGINARY PART %d\n",sum_img);
return 0;
}
