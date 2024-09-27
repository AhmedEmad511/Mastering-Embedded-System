#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[100];
    char ch;
    int i;
    int sum =0;
    printf("Enter a string :");
    gets(c);
    printf("Enter letter to find it's frequency :");
    scanf("%c",&ch);
    for(i=0;c[i]!='\0';i++)
    {
        if(ch==c[i])
            sum++;
    }
    printf("The frequency of %c is %d",ch,sum);
}
