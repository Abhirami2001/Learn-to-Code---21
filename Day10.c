
Fn = 0 1 1 2 3 5 8 13 21

image

Write a C program to print the above series starting from 0 and the upperlimit is determined by the user

#include <stdio.h>
int main ()
{

int n,a,b,r,i;
a=0;
b=1;
    
scanf("%d",&n);

 
for(i=1;i<=n;i++)
{
printf("%d ",a);  
r=a+b;   
a=b;    
b=r;  
} 
    
return 0;    
}  
    
