myarray[10] ={10,25,8,14,3,23,1,0,12,9} Write a C program to

      1) Print the value of 4th element.
      2) Print the value of last element in the array.
      3) Change the value of third element to 30 and print the new value.
      4) Print all the elements stored in the new array.




#include <stdio.h>
int main()
{

int arr[10]={10,25,8,14,3,23,1,0,12,9},i;
    
printf("%d\n",arr[3]);

printf("%d\n",arr[9]);  
    
arr[2]=30;
printf("%d\n",arr[2]);

for(i=0;i<10;i++)
{
printf("%d ",arr[i]);
}





    return 0;
}
