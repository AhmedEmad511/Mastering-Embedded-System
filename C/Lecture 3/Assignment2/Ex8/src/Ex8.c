/*
 ============================================================================
 Name        : Ex8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float y,z,out;
		char x;

			printf("Enter operator + or - or * or / :");
			fflush(stdin); fflush(stdout);
			scanf("%c",&x);
			printf("Enter two operands :");
			fflush(stdin); fflush(stdout);
			scanf("%f %f",&y,&z);
			switch(x){
			case'+':
				printf("%f + %f = %f",y,z,y+z);
				break;
			case'-':
					out = y-z;
					printf("%f - %f =%f",y,z,out);
					break;
			case'*':
					out = y*z;
					printf("%f * %f =%f",y,z,out);
					break;
			case'/':
					out = y/z;
					printf("%f / %f =%f",y,z,out);
					break;

			}
}
