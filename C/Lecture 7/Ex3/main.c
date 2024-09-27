#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[100];
    char* p;
    int i;
    printf("Enter string :");
    gets(x);
    for(i=0;i<100;i++)
    {
        if(x[i]=='\0'){
            p=&x[i];
            break;
           }
        else
            i++;
    }
    i--;
    printf("The sentence is :%s\n",x);
    printf("The reverse is :");
    for(i;i>=0;i--)
    {
        p=&x[i];
        printf("%c",*p);
    }
}
