Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.


#include <stdio.h>
int main()
    {
    
    int a[5][5],b[5][5],p[5][5],i,j,k,x,y,r,s,sum=0;
    
    scanf("%d%d",&x,&y);
    
    
    for(i=0;i<x;i++)
        {
        for(j=0;j<y;j++)
            {
            scanf("%d",&a[i][j]);
            }
        }
    scanf("%d%d",&r,&s);
    if (r!=y)

{
   
        
        printf("ERROR");
        }
    
    else
{
    
    
    for(i=0;i<r;i++)
        {
        for(j=0;j<s;j++)
            {
            scanf("%d",&b[i][j]);
            }
        }
    
    
    

    for(i=0;i<x;i++)
        {
        for(j=0;j<s;j++)
            {
            
                for(k=0;k<r;k++)
                    {
                    sum+=a[i][k]*b[k][j];
                    }
            p[i][j]=sum;
            sum=0;
            }
        }
    
    for(i=0;i<x;i++)
        {
        for(j=0;j<s;j++)
            {
            printf("%d ",p[i][j]);
            }
            printf("\n");
            
        }
        }
          
          return 0;
          }
