/*
 ============================================================================
 Name        : Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("Enter character : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	if(x=='a'||x=='A'||x=='E'||x=='e'||x=='o'||x=='O'||x=='i'||x=='I'||x=='u'||x=='U')
	{
		printf("%c is vowel", x);
	}
	else {

			printf("%c is Constant", x);
		}


}
