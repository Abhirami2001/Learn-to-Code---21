Write a C program to find the factorial of a given number using a recursive function


#include <stdio.h>
int fact(int);
int main()
    {
    int n,f;
    scanf("%d",&n);
    if(n<0)
        {
        printf("ERROR");
        }
    else{
    f=fact(n);
    
    
    printf("%d",f);
    }
    return 0;
    }
    int fact(int n)
        {
        
        if(n==0)
            {
            return 1;
            }
        else
{
            return n*fact(n-1);
            }
        }


  
    

