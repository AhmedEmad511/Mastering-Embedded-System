#include "Platform_types.h"
#include "LIFO.h"



LIFO_STATUS LIFO_Create(LIFO_buffer_t* lifo_name, uint32* arr, uint32 element_num)
{
	if(arr == '\0')
		return(LIFO_NULL);

	lifo_name->base = arr;
	lifo_name->head = arr;
	lifo_name->count = 0;
	lifo_name->length = element_num ;
	return(LIFO_No_Err);
}

LIFO_STATUS LIFO_Add(LIFO_buffer_t* lifo_name ,uint32 element)
{
	//check if there is LIFO
	if(!lifo_name->base || !lifo_name->head)
		return (LIFO_NULL);

	//check if LIFO is full
	if(lifo_name->count == lifo_name->length)
		return (LIFO_Full);

	//Add item
	*(lifo_name->head) = element;
	lifo_name->head++;
	lifo_name->count++;

	return(LIFO_No_Err);
}

LIFO_STATUS LIFO_Read(LIFO_buffer_t* lifo_name, uint32* var)
{
	//check if there is LIFO
	if(!lifo_name->base || !lifo_name->head)
		return (LIFO_NULL);

	//check if there are items
	if(lifo_name->count == 0)
		return(LIFO_Empty);

	//pop item in var
	lifo_name->head--;
	*var = *(lifo_name->head);
	lifo_name->count--;

	return(LIFO_No_Err);
}
