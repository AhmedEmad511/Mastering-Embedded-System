#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char *x;
    printf("The alphabet is :\n");
    for(i=0;i<26;i++)
    {
        *x=i+'A';
        printf("%c\n",*x);
         x++;

    }
}
