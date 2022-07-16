/*
 ============================================================================
 Name        : Ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,fact,x;
	fact=1;
	printf("Enter an integer :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	if(x>0){
		for(i=1;i<=x;i++){
			fact=fact*i;
		}
		printf("Factorial = %d",fact);
	}
	else if(x<0){
		printf("Error!!! Factorial of negative number does not exist");
	}
	else{
		printf("Factorial of 0 equal 1");
	}
}
