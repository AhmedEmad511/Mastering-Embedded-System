/*
 ============================================================================
 Name        : Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x , y ;
	int sum =0;
	printf("Enter two integers :");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&x,&y);
	sum = x+y;
	printf("Sum : %d",sum);

}
