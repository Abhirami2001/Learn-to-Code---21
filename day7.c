Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement.
#include <stdio.h>
int main()
{
    
int n,a,b;
  

    
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");

scanf("%d%d%d",&n,&a,&b);

    
switch(n)
{
case 1:printf("%d\n",a+b);
break;
case 2:printf("%d\n",a-b);
break;
case 3:printf("%d\n",a*b);
break;
case 4:
if(b==0)
{
printf("\nCannot be determined");
}
else   
{
printf("%0.1f\n",a/(float)b);
}
break;
}




    
return 0;
}





