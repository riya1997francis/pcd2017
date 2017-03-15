#include <stdio.h>
void g1(int m,int n,int a[m][n])
{
printf("enter elements");
for(int i = 0 ; i< m ;i++)
{
for(int j = 0 ; j< m ; j++)
{
scanf("%d" , &a[i][j]);
}
}
}
void g2(int p,int q,int b[p][q])
{printf("enter the elements");
for(int i = 0 ; i< p ;i++)
{
for(int j = 0 ; j< q ; j++)
{
scanf("%d" , &b[i][j]);
}
}
}
void mul(int m , int n , int p ,int q ,int a[m][n] , int b[p][q],int c[m][q])
{

for(int i = 0; i<m;i++)
{
for(int j = 0; j<n;j++)
{
for(int k = 0; k<m;k++)
{
c[i][j] = c[i][j] +a[i][k] *b[k][j];
}
}
}
}
void show(int m , int q, int c[m][q])
{
for(int i = 0 ;i <m ;i++)
{
for(int j = 0 ; j<q;j++)
{
printf("elements after multiplication %d", c[i][j]);
}
}
}
void main()
{
int m,n,p,q;

int a[m][n];
 int b[p][q];
 int c[m][q];
 printf("enter m , n , p , q");
scanf("%d %d %d %d ", &m, &n , &p, &q);
g1(m,n,a);
g2(p,q,b);
mul(m,n,p,q,a,b,c);
show(m, q , c);
}



