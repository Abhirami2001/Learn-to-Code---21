Write a C program to find the number of words in a string. Also reverse string


#include <stdio.h>
 
int main()
{
    char string[50];
    int i, length = 0,j,count=0,k;
 
    
    gets(string);
  for(k=0;string[k]!='\0';k++)
        {
        if(string[k]==' ')
            {
            count++;
            
            }
        
        }
    printf("no of words = %d\n",count+1);
  
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    
    


    for(j=length-1;j>=0;j--) 
    
    {
      printf("%c",string[j]);
 }
 
 
 

return 0;
}
