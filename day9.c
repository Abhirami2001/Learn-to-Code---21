Write a C program to print the following number pattern
55555
 4444
  333
   22
    1


The number of rows is given by the user

This program is similar to floyds triangle 

#include <stdio.h>
int main()
{

int n,i,j,k;
scanf("%d",&n);

 

    
for(i=n;i>=1;i--)
{
for(j=n-1;j>=i;j--)
{
printf(" ");  
}
for(k=1;k<=i;k++)
{
printf("%d",i);
}
printf("\n");   
}    
 
return 0;  
}    
    
    
