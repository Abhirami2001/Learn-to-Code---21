Write a C program to input two numbers.If sum of the numbers is even, find the reverse of the sum .If sum is odd check whether the sum is prime or not.


#include <stdio.h>



int main()
{
  int a,b,sum=0,r=0,i,f=0;
  
  scanf("%d%d",&a,&b);
    
  sum=a+b;
  printf("%d\n",sum);
    
  if(sum%2==0) 
  {
    
      while (sum != 0)
  {
    r = r * 10;
    r = r + sum%10;
    sum = sum/10;
  }   
    printf("%d",r);
  }
    
  else
  {
    
    for (i = 2; i <= sum/ 2; ++i)
    {
    
    if (sum % i == 0)
    {
      f= 1;
      break;
    }
  }
    if (sum == 1) 
    {
    printf("1 is neither prime nor composite.");
  } 
  else 
  {
    if (f == 0)
      printf("Prime\n") ;
    else
      printf("Not prime") ;
  }
 } 
  return 0;
 }




    

