#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l;
    int matrix[20][20];
    printf("Enter number of rows of the matrix :");
    scanf("%d",&i);
    printf("Enter number of columns of the matrix :");
    scanf("%d",&j);
    for(k=0;k<i;k++)
    {
        for(l=0;l<j;l++)
        {
            printf("Enter element a%d%d :",k+1,l+1);
            scanf("%d",&matrix[k][l]);
        }
    }
    printf("Entered matrix :\n");
    for(k=0;k<i;k++)
    {
        for(l=0;l<j;l++)
        {
            printf("%d\t",matrix[k][l]);
        }
        printf("\n");
    }
    printf("Transpose matrix :\n");
    for(k=0;k<j;k++)
    {
        for(l=0;l<i;l++)
        {
            printf("%d\t",matrix[l][k]);
        }
        printf("\n");
    }
}
