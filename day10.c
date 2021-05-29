Write a C program to print the Roots of a Quadratic Equation of the form ax^2+bx+c

#include <stdio.h>
#include <math.h>
int main()
{

float a,b,c,d,r1,r2,real,img;

scanf("%f%f%f",&a,&b,&c);
d=b*b-(4*a*c);   
   
if(d<0)
{
real=-b/(2*a);
img=sqrt(-d)/(2*a);

printf("Complex: %0.2f + i%0.2f , %0.2f - i%0.2f",real,img,real,img);

}    
    
else if(d>0)
{  
r1=(-b+sqrt(d))/(2*a); 
r2=(-b-sqrt(d))/(2*a);
    
printf("Distinct Real : %0.2f , %0.2f",r1,r2);
    
}  
    
else
{
r1=r2=-b/(2*a);
    
printf("Equal Real: %0.2f , %0.2f",r1,r2); 
    
}    
    
return 0;    
}   
