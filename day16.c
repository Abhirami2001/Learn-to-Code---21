Write a C program to find the minimum and maximum element of an array.


#include <stdio.h>
int main()
    {
    
    int a[25],i,m,max,min;
    
    scanf("%d",&m);
    
    for(i=0;i<m;i++)
        {
        scanf("%d",&a[i]);
        }
    
    min=a[0];
    max=a[0];
    
    for(i=1;i<m;i++)
        {
        if(a[i]<min)
            {
            min=a[i];
            }
        if(a[i]>max)
            {
            max=a[i];
            }
        }
    
            
        
        
           
              
        
        
    
    printf("%d\n%d",min,max);

  
    
    
    
    






     
    return 0;
}
