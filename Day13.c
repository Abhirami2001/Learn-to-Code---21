Write a program in C to Find the Frequency of Characters.


#include <stdio.h>
#include <string.h>
int main()
{

char a[100],ch;
int i, frequency=0;
    
gets(a);
 
 scanf("%c",&ch);
    
for(i=0;a[i]!='\0';i++)
  {  
 if(a[i]==ch)
  {
  frequency++;
  }
 }
    
 printf("%d",frequency);
    
    
    return 0;
}
