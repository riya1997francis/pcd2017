#include<stdio.h>
int add( int a[],int n)
{  int sum=0,i;
for(i=0; i<n;i++)
{
  sum+=a[i];


}
return sum;

}





int main()
{       int n=10;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int res= add(a,n);
    printf("Result is %d", res);
    return 0;
        }

