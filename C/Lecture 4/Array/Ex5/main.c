#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j;
    int arr[20];
    printf("Enter number of elements :");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched :");
    scanf("%d",&j);
    for(i=0;i<num;i++)
    {
        if(j==arr[i])
        {
            printf("The position is %d",i+1);
            break;
        }
    }
}
