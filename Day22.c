Write a C Program to read an array, then display the array twice. Once using the index, and the other time using the array pointer.


#include <stdio.h>
int main()
    {
    int a[50],n,i;
    int *ptr;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
    
    printf("DISPLAYING USING INDEX:");
    
    for(i=0;i<n;i++)
        {
        printf(" %d",a[i]);
        }
    
    printf("\nDISPLAYING USING POINTERS:");
    
    for(i=0;i<n;i++)
        {
        ptr=a;
        printf(" %d",*(ptr+i));
        
        }
               






     
    return 0;
}
