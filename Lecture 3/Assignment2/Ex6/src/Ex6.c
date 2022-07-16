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
	int i,x;
	int sum = 0;
	printf("Enter an integer :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&i);
	for(x=0;x<=i;x++){
		sum = sum+x;
	}
	printf("sum =%d",sum);
}
