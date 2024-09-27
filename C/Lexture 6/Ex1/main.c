#include <stdio.h>
#include <stdlib.h>
struct Sstudent
{
    char name[50];
    int roll;
    float mark;
}x;
int main()
{
    struct Sstudent x ;
    printf("Enter student information :-\n");
    printf("Enter student name :");
    scanf("%s",x.name);
    printf("Enter roll number :");
    scanf("%d",&x.roll);
    printf("Enter marks :");
    scanf("%f",&x.mark);
    printf("Displaying informations :\n");
    printf("Name : %s\n",x.name);
    printf("Roll number : %d\n",x.roll);
    printf("Marks : %.2f\n",x.mark);


}
