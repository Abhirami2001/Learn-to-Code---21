Write a C program to find the number of prime numbers in a array of integers

#include<stdio.h>

int main() 
{

   int arr[10], i, s, j, p, count=0;

   
   scanf("%d", &s);

   
   for (i = 0; i < s; i++) 
   {
       scanf("%d", &arr[i]);
   }

   
   for (i = 0; i < s; i++)
   {
       j = 2;
       p = 1;
       while (j < arr[i])
       {
           if (arr[i] % j == 0)
           {
               p = 0;
               break;
           }
           j++;
       }
       if (p == 1) 
       {
           
           count++;
       }
   }
   printf("%d",count);

   return 0;
}
