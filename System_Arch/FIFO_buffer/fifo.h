#ifndef FIFO_H_
#define FIFO_H_
#include "Platform_types.h"

//Select element type (uint8,16,32,64)?
#define ELEMENT_T	uint8

typedef struct
{
	uint32 count;
	uint32 length;
	ELEMENT_T* base;
	ELEMENT_T* head;
	ELEMENT_T* tail;
}FIFO_Buffer_t;

typedef enum
{
	FIFO_No_Err,
	FIFO_NULL,
	FIFO_Full,
	FIFO_Empty
}FIFO_Status;

FIFO_Status FIFO_Create(FIFO_Buffer_t* fifo_name, uint32 size, ELEMENT_T* arr);

FIFO_Status FIFO_Enqueue(FIFO_Buffer_t* fifo_name, ELEMENT_T data);

FIFO_Status FIFO_Dequeue(FIFO_Buffer_t* fifo_name, ELEMENT_T* var);

FIFO_Status FIFO_FULL(FIFO_Buffer_t* fifo_name);

void FIFO_Print(FIFO_Buffer_t* fifo_name);




#endif
