#include <stdio.h>
#include <stdlib.h>
int power(int num1,int num2)
{
    if(num2!=0)
    {
     return num1*power(num1,num2-1);

    }
    else
    return 1;
}
int main()
{
    int x,y;
    printf("Enter base number and power :");
    scanf("%d %d",&x,&y);
    power(x,y);
    printf("%d^%d =%d",x,y,power(x,y));

}
