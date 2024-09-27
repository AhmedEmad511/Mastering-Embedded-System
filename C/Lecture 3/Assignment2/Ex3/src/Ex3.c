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
	int a,b,c;
	printf("Enter three numbers :");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("Largest Number : %d",a);
	}
	else if(b>a && b>c){
		printf("Largest Number : %d",b);
	}
	else{
		printf("Largest Number : %d",c);
	}
}
