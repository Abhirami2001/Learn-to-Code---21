Write a C program to find the second maximum element in an array of integer elements


#include <stdio.h>
#include <limits.h>
int main()
    {
    int a[20],n,max=0,max2=0,i;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
    
    max=max2=INT_MIN;
    
    for(i=0;i<n;i++)
        {
        if(max<a[i])
            {
            max2=max;
            max=a[i];
            }
        
        if(a[i]!=max&&a[i]>max2)
            {
            max2=a[i];
            }
        }
    
    printf("%d\n",max2);
    
            
        
        





    return 0;
}
