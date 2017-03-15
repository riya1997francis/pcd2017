#include<stdio.h>
int hor(int n, int x, int a[n+1])
{
int sum = 0;
for(int i = n; i>=0;i--)
{
sum= (sum+a[i])*x;
}
sum = sum + a[0];
return sum;
}

int main()
{
int n, x, a[n+1] , sum;
printf("enter degree");
scanf("%d" , &n);
printf("enter the co eff");
for(int i =0 ;i<=n;i++)
{
scanf("%d",&a[i]);
}
sum = hor(n, x,a);
printf("sum %d " , sum);
return 0;
}
