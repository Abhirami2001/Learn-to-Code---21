Write a C Program to perform all four basic Mathematical Operations on two numbers taken from user input.
#include <stdio.h>
#include <math.h>
int main()
{
int a,b;
 


scanf("%d%d",&a,&b);
    
printf("%d\n",a+b);
printf("%d\n",a-b);
printf("%d\n",a*b);
printf("%0.2f\n",a/(float)b);
    
return 0;
}
