Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input.
#include <stdio.h>
#include <math.h>
int main()
{
int a;
int r;
int b,h;
    
scanf("%d",&a);
scanf("%d",&r);
scanf("%d%d",&b,&h);
    
printf("%d\n",a*a);
printf("%0.1f\n",3.14*r*r);
printf("%0.2f\n",0.5*b*h);

       
    
return 0;
}



  


