#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[100];
    int i;
    int sum=0;
    printf("Enter string :");
    gets(c);
    for(i=0;c[i]!='\0';i++)
    {
        sum++;
    }
    printf("The length of the string is %d ",sum);
}
