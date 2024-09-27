#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int* ptr;
    int x=0;
    int arr[20];
    printf("Enter number of elements to store in array (max 20) :");
    scanf("%d",&x);
    printf("Enter %d numbers to store in array :\n",x);
    for(i=0;i<x;i++)
    {
        printf("Enter number %d :",i+1);
        scanf("%d",&arr[i]);
    }i--;
    printf("The elements of the array in reverse order is :\n");
    for(i;i>=0;i--)
    {
        ptr=&arr[i];
        printf("Element number %d = %d\n",i+1,*ptr);
    }
}
