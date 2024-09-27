#include <stdio.h>
#include <stdlib.h>
struct student{
    char name [50];
    int roll;
    float mark;
};
int main()
{
    struct student x[10];
    printf("Enter data for students\n");
    int i;
    for(i=0;i<10;i++)
    {
        printf("for roll number %d\n",i+1);
        printf("Enter name :");
        scanf("%s",x[i].name);
        printf("Enter mark :");
        scanf("%f",&x[i].mark);
    }
    printf("\n\n");
    printf("The data you entered is\n\n");
    for(i=0;i<10;i++)
    {
        printf("Roll number %d\n",i+1);
        printf("Name :");
        puts(x[i].name);
        printf("Mark : %.2f\n",x[i].mark);
    }


}
