#include <stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
  char s[100],k;
  int i,j;
  printf("Enter string :");
  gets(s);
  i=strlen(s)-1;
  j=0;
  while(j<i)
  {
      k=s[i];
      s[i]=s[j];
      s[j]=k;
      j++;
      i--;
  }
  printf("The reversed string is : %s",s);
}
