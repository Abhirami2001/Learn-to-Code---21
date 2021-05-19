Write a C Program to identify if a number is a palindrome or not
#include <stdio.h>
int main ()
{

int n,r=0,q,rem;
    
scanf("%d",&n);

    
q=n;
    
while(q!=0)
{
rem=q%10;
r=r*10+rem;
q=q/10;
}

if(r==n)
{
printf("Yes");
}

else
{
printf("No");
}
    
return 0;
}
