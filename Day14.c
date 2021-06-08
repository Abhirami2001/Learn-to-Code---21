Write a C Program to read a 2D Array and then display it.


#include <stdio.h>
int main()
{

int c,b,m,n,a[10][10];
scanf("%d%d",&c,&b);    
for(m=0;m<c;m++)  
{    
for(n=0;n<b;n++) 
{
scanf("%d",&a[m][n]);
  
 }   
  }  
    
for(m=0;m<c;m++)
{
for(n=0;n<b;n++)
{    
printf("%d ",a[m][n]); 

}   
printf("\n"); 
 }   
    return 0;
}
