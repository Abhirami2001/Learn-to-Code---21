WACP to accept marks of three subjects.. Calculate the percentage and respective grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F




#include <stdio.h>
int main()
{

int a,b,c;
    
scanf("%d%d%d",&a,&b,&c);

printf("%0.2f\n",(a+b+c)*100/(float)300);
    
float p=((a+b+c)*100/(float)300);
    

    
if(p>=90)
{
printf("A");
}
    
else if(p>=80)
{
printf("B");
}
    


else if(p>=70)
{
printf("C");
}

else if(p>=60)
{
printf("D");
}
    
else if(p>=40)
{
printf("E");
}
    
else
{
printf("F");
}

return 0;
}







    





















    



    

























    











