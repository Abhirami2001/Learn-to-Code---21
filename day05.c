Write a C Program to perform Read and Print operations using the four basic data types in C. (int, float, char & double)
#include <stdio.h>
int main ()
{
char z;
int b;
float c;
double d;

scanf("%c", &z);
scanf("%d", &b);
scanf("%f", &c);
scanf("%lf", &d);
    
printf("%c \n",z);
printf("%d \n",b);
printf("%f \n",c);
printf("%lf \n",d);
       
return 0;
}

