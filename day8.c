Write a C Program to compute the multiplication table of 1 - 5 using do-while.
#include <stdio.h>
#include <stdlib.h>
int main()
{

int n,i;

do
{
    
printf("\n1.Table of 1");
printf("\n2.Table of 2");
printf("\n3.Table of 3");
printf("\n4.Table of 4");
printf("\n5.Table of 5");
printf("\n6.Exit\n");  

scanf("%d",&n);
    




if(n==6)
{
exit(0);
    
}
    
else if(n>6)
{
printf("Enter a valid option!");
}

else
{
for(i=1;i<=10;i++)
{
printf("%d ",n*i);
}
}
}
while(1);



return 0;
}
