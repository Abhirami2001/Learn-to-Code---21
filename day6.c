WACP to determine if a triangle is valid from the given sides.
#include <stdio.h>
int main ()
{
int a,b,c;
    
scanf("%d%d%d",&a,&b,&c);
    
if(a+b>c)
{
printf("Yes");
}
    
else
{
printf("No");
}
    
return 0;
}
