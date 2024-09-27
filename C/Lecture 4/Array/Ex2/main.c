#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    float avg;
    float sum =0;
    float matrix[100];
    printf("Enter numbers of data :");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        printf("%d. Enter number :",j+1);
        scanf("%f",&matrix[j]);
    }
    for(j=0;j<i;j++)
    {
        sum = sum + matrix[j];
    }
    avg= sum/i;
    printf("The average is : %0.02f",avg);

}
