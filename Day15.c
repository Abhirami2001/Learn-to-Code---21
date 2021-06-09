Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each occurrence of that element with its position(s).


  #include <stdio.h>
int main()
{

int a[20][20],m,n,b,c,x;

    scanf("%d%d",&b,&c);
    
    for(m=0;m<b;m++)
        {
        for(n=0;n<c;n++)
            {
            scanf("%d",&a[m][n]);
            }
        }
    
    scanf("%d",&x);
    
    for(m=0;m<b;m++)
        {
        
        for(n=0;n<c;n++)
            {
            if(a[m][n]==x)
                {
                printf("Element found at (%d,%d)\n",m,n);
                break;
                }
                else
{
                    continue;
                    printf("Element not found\n");
                    }
                
            }
        }
        
        
        
    
    
            
            
        
        
 
    
    return 0;
    }
        
           
                
                


        
        
    
    
            

  

