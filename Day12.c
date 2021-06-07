Write a C program to check whether a number present in the 1D array or not


#include <stdio.h>
int main()
{

int arr[10],n,i,num,a;

scanf("%d",&n);


for(i=0;i<n;i++)   
{    
scanf ("%d",&arr[i]);
} 
scanf("%d",&num);
a=0; 
for(i=0;i<n;i++)
{ 

if(arr[i]==num)
{  
a=1;
break;
}   
}
if(a==1)
{
printf("%d is present in this array",num); 
}
else if(a==0)
{
printf("%d is not present in this array",num);
}

    
return 0;
}



   
    
