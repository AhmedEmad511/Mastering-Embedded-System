#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 6;
    int* p=&x;
    printf("Address of x = 0x%x\nThe value of x = %d\n",p,x);
    printf("Now pointer P is assigned with address of m \n");
    printf("Address of pointer P = 0x%x\n",p);
    printf("Content of P = %d\n",*p);
    x=8;
    printf("The value of x is assigned to 8 now \n");
    printf("Address of pointer P = 0x%x\n",p);
    printf("Content of P = %d\n",*p);
    *p=20;
    printf("The pointer variable is assigned with value 20 now\n");
    printf("Address of x = 0x%x\nThe value of x = %d\n",p,x);
}
