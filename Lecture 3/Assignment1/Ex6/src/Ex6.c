/*
 ============================================================================
 Name        : Ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;
	printf("Enter Value of a :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	printf("Enter Value of b :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&b);
	printf("After swapping, The value of a is : %d\nAfter swapping, The value of b is : %d",b,a);


}
