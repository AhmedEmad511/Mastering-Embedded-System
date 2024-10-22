#include "Platform_types.h"
#include "fifo.h"
#include <stdio.h>

FIFO_Status FIFO_Create(FIFO_Buffer_t* fifo_name, uint32 size, ELEMENT_T* arr)
{
	//check if the address is valid
	if(arr == '\0')
		return FIFO_NULL;

	//create FIFO
	fifo_name->base = arr;
	fifo_name->head = arr;
	fifo_name->tail = arr;
	fifo_name->count = 0;
	fifo_name->length = size;

	return FIFO_No_Err;
}

FIFO_Status FIFO_Enqueue(FIFO_Buffer_t* fifo_name, ELEMENT_T data)
{
	//Check if there is FIFO
	if(!fifo_name->base || !fifo_name->head || !fifo_name->tail )
		return FIFO_NULL;

	//Check if FIFO is full
	if (FIFO_FULL(fifo_name) == FIFO_Full)
		return FIFO_Full;

	//Add new data to FIFO
	*(fifo_name->head) = data;
	fifo_name->count++;

	//circular fifo

	//if head is on last element
	if(fifo_name->head == (fifo_name->base + (fifo_name->length * sizeof(ELEMENT_T))))
		fifo_name->head = fifo_name->base;

	//if not
	else
		fifo_name->head++;

	return FIFO_No_Err;
}

FIFO_Status FIFO_Dequeue(FIFO_Buffer_t* fifo_name, ELEMENT_T* var)
{
	//Check if there is FIFO
	if(!fifo_name->base || !fifo_name->head || !fifo_name->tail )
		return FIFO_NULL;

	//Check if FIFO is Empty
	if (fifo_name->count == 0)
		return FIFO_Empty;

	//POP item in var
	*var = *(fifo_name->tail);
	fifo_name->count--;


	//circular fifo

	//if tail is on last element
	if(fifo_name->tail == (fifo_name->base + (fifo_name->length * sizeof(ELEMENT_T))))
		fifo_name->tail = fifo_name->base;

	//if not
	else
		fifo_name->tail++;

	return FIFO_No_Err;
}

FIFO_Status FIFO_FULL(FIFO_Buffer_t* fifo_name)
{
	//Check if there is FIFO
	if(!fifo_name->base || !fifo_name->head || !fifo_name->tail )
		return FIFO_NULL;

	//Check if FIFO is full
	if(fifo_name->count == fifo_name->length)
		return FIFO_Full;

	//if not full
	return FIFO_No_Err;
}

void FIFO_Print(FIFO_Buffer_t* fifo_name)
{
	ELEMENT_T* temp;
	uint32 i;

	if(fifo_name->count == 0)
	{
		printf("FIFO is Empty \n");
	}
	else
	{
		temp = fifo_name->tail;
		printf("\n=======FIFO ELEMENTS======\n\n");
		for(i=0; i<fifo_name->count; i++)
		{
			printf("\t %X \n", *temp);
			temp++;
		}
		printf("\n=======Done======\n\n");
	}

}
