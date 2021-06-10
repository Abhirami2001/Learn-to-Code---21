Write a C program that reads and displays details of 4 students. The 'structure' should contain the RollNo(int), FirstName(string) and marks(float).


#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i;
    

  
    for (i = 0; i < 4; ++i) {
        s[i].roll = i + 1;
        
        scanf("%d", &s[i].roll) ;
        scanf("%s", &s[i].firstName);
        
        scanf("%f", &s[i].marks);
    }
    

  
    for (i = 0; i < 4; ++i) {
        printf("DETAILS OF ROLLNO %d\n", s[i].roll);
        printf("NAME: ");
        printf("%s\n", s[i].firstName) ;
        
        printf("MARKS: %0.2f\n", s[i].marks);
        
    }
    return 0;
}
