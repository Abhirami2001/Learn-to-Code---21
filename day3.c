Write a C Program to convert Fahrenheit to Celsius.
#include <stdio.h>
#include <math.h>
int main ()
{
float f;
    
scanf("%f",&f);
printf("%0.2f\n",(f-32)*5/(float)9);
       
return 0;
}
