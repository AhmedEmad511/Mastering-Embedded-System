#include <stdio.h>
#include <stdlib.h>
int prime(int num)
{
    int m,j,k;
    k=num/2;
    j=0;
    for(m=2;m<k;m++)
    {
        if(num%m==0)
        {
            j=1;
            break;
        }
    }
return j;
}
int main()
{
    int x ,y,i,j;
    printf("Enter two numbers (intervals) : ");
    scanf("%d %d",&x,&y);
    printf("The prime numbers between %d and %d is :",x,y);
    for(i=x+1;i<y;i++)
    {
        j=prime(i);
        if(j==0)
        {
            printf("%d\t",i);
        }
    }
}
