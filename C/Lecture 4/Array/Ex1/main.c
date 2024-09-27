#include <stdio.h>
#include <stdlib.h>

int main()
{
    int FM [2][2];
    int SM [2][2];
    int i ,j,k,l;
    printf("Enter the elements of the first matrix :\n");
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
          printf ("Enter the element a%d%d :",i+1,j+1);
          scanf("%d",&FM[i][j]);
      }
    }
    printf("Enter the elements of the second matrix :\n");
    for(k=0;k<2;k++)
    {
      for(l=0;l<2;l++)
      {
          printf ("Enter the element b%d%d :",k+1,l+1);
          scanf("%d",&SM[k][l]);
      }
    }
    int sum[2][2];
    printf("The sum is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]= FM[i][j]+SM[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}
