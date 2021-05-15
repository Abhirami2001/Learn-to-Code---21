In a sequence of numbers from 1 - 100, replace the numbers divisble by 3 with "FIZZ", replace the numbers divisble by 5 with "BUZZ" and replace the numbers divisble by 15 with "FIZZBUZZ" and print the result.
#include <stdio.h>
int main()
{
int n;
    

    
for(n=1;n<=100;n++)
 {


if(n%15==0)
printf("FIZZBUZZ ");
    
else if(n%5==0)
printf("BUZZ ");
    
else if(n%3==0)
printf("FIZZ ");
    
    
else 
printf("%d ",n );
 }
    
return 0;
}







    






