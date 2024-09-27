#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int i,j,k,location,m;
    printf("Enter number of elements : ");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    printf("Enter number to be inserted :");
    scanf("%d",&k);
    printf("Enter location :");
    scanf("%d",&location);
    for(m=i;m>=location;m--)
    {
        arr[m]=arr[m-1];
    }
    arr[location-1]=k;
   for(m=0;m<=i;m++)
    {
        printf("%d\t",arr[m]);
    }
}
