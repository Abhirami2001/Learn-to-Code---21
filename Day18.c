Write a C program to swap the values of two variables.


#include <stdio.h>
int main()
    {
    
    int a,b;
    
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d\n",a,b); 
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("a=%d b=%d",a,b);
    
    





    return 0;
}