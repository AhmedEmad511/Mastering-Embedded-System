/*
 ============================================================================
 Name        : Ex1.c
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
	printf("Enter Number :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&i);
	if((i % 2)==0){
		printf("%d is even",i);
	}
	else{printf("%d is odd",i);
}
}
