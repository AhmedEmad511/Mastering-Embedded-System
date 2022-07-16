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
	int i;
	printf("Enter integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&i);
	printf("You entered : %d",i);
}
