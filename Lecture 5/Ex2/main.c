#include <stdio.h>
#include <stdlib.h>
int factorial (int num)
{
    if(num!=1)
       return num*factorial(num-1);

}
int main()
{
    int x,j;
    printf("Enter positive integer :");
    scanf("%d",&x);
    printf("The factorial number of %d is : %d",x,factorial(x));

}
