Write a C program to check whether a given number is amstrong or not.


#include <stdio.h>
int main()
    {
    
    int n,r,a,sum=0;
    
    scanf("%d",&n);
    
    a=n;
    
    while(n!=0)
        {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
        }
    
    if(a==sum)
        {
        printf("Amstrong");
        }
    else

{
        printf("Not Amstrong");
        }
    
    return 0;
    }
    
   
