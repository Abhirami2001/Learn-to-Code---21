Write a C Program to read the values for a square 2D array and print its main/principal and secondary diagonals.


#include <stdio.h>
int main()
{
int a[20][20],m,n,b,c;
    
scanf("%d%d",&b,&c);
    
if(b!=c)
{
printf("ERROR"); 
}
else

{

  
for(m=0;m<b;m++)
{    
for(n=0;n<c;n++)  
{    
scanf("%d",&a[m][n]); 
}   
}    
    
    
for(m=0;m<b;m++)
{    
for(n=0;n<c;n++)  
{  
if(m==n)
{
printf("%d ",a[m][n]); 
  }  
}
}    
printf("\n");


    
for(m=0;m<b;m++)
{    
for(n=0;n<c;n++)  
{  
if((m+n)==(b-1))
{
printf("%d ",a[m][n]); 
 }




 }   
}
}
























 
 
    
    
    
    
    
    
    
    return 0;
}
