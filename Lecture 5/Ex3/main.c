#include <stdio.h>
#include <stdlib.h>
void sentence ()
{
    char x;
    scanf("%c",&x);
    if(x!='\n')
    {
        sentence();
        printf("%c",x);
    }
}
int main()
{
    printf("Enter sentence :");
    sentence();
}
