include <stdio.h>

  int main()
{
    int num1,res;
num1=121;
    res=palindrome(num1);
    if(res==num1)
        
    {   
          
    printf("\n%dis a palindrome number\n",res);
    }
    else
    {
        printf("/n%d is not a palindrome integer\n",res);
    }
    return 0;
}
int palindrome(int x)

{
    int rem,sum=0;
    while(x!=0)
    {
        rem=x%10;
        sum=(sum*10)+rem;
        x=x/10;
    }
    return sum;
}
