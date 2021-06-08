Write a C program to find the frequency of odd and even numbers in the 1D array.



#include <stdio.h>
int main()
{
int n,arr[50],i,even=0,odd=0;

scanf("%d",&n);
    
for(i=0;i<n;i++) 
    
{
    
scanf("%d",&arr[i]);  

if(arr[i]%2==0)  
{
even++;
} 

else
{
odd++;
}
    
} 

printf("%d",even);
printf("\n%d",odd);


    return 0;
}
