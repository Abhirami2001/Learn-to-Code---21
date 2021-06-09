Write a C program to print inverted full pyramid of *


#include <stdio.h>
int main()
    {
    
    int i,j,a,s;
    
    scanf("%d",&a);
    
    if(a<1)
        {
        printf("ERROR");
        }
    
    else
{
        for(i=a;i>=1;i--)
            {
            for(s=0;s<a-i;s++)
               { 
                printf("  ");
                }
                for(j=i;j<=2*i-1;j++)
                   { 
                    printf("* ");
                    }
                    for(j=0;j<i-1;j++)
                      {
                     printf("* ");
                        }
                    
                
            printf("\n");
            }
        }
                        
            
            
                 
                        






    
  

            
            
        
                        
            
            
                 
                        






    
    return 0;
}
