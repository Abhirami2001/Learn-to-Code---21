Write a C Program to determine the factorial of a number.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    
int n,i,f=1;

scanf("%d",&n);

if(n<0)
{
printf("ERROR");

exit(0);
}
else if(n==0)
printf("1");
    


else
{
for(i=n;i>=1;i--)

f=f*i;
printf("%d",f);
}
return 0;
}


    





