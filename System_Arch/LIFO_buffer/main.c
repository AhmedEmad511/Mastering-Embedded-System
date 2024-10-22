#include "Platform_types.h"
#include "LIFO.h"
#include <stdio.h>

uint32 buffer1[5];

void main (void)
{
	uint8 i;
	uint32 x;
	LIFO_buffer_t test;
	LIFO_Create(&test, buffer1, 5);

	for(i=0;i<5;i++)
	{
		if(LIFO_Add(&test,i)==LIFO_No_Err)
			printf("\n\n ITEM ADDED : %d \n",i);
	}
	for(i=0;i<5;i++)
	{
		if(LIFO_Read(&test,&x)==LIFO_No_Err)
			printf("\n\n ITEM ADDED : %d \n",x);
	}

}
