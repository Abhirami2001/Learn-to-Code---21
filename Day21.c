Write a C program to count and display the number of Vowels, Consonants and spaces in a string

#include <stdio.h>
int main()
    {
    
    char a[150];
    int i,v=0,c=0,s=0;
    gets(a);
    
    for(i=0;a[i]!='\0';i++)
        {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            {
            v++;
            }
        
            
            
                
        
        else if(a[i]==' ')
            {
            s++;
                }
        
        else
{
            c++;
                }
        }
    
     printf("%d\n",v);
    printf("%d\n",c);
    printf("%d",s);

            
        
    
    





    return 0;
}
