#ifndef LIFO_H_
#define LIFO_H_

typedef struct
{
	uint32 length ;
	uint32 count ;
	uint32* head ;
	uint32* base ;
}LIFO_buffer_t;

typedef enum
{
	LIFO_No_Err,
	LIFO_Full,
	LIFO_Empty,
	LIFO_NULL
}LIFO_STATUS;

LIFO_STATUS LIFO_Add(LIFO_buffer_t* lifo_name ,uint32 element);

LIFO_STATUS LIFO_Read(LIFO_buffer_t* lifo_name, uint32* var);

LIFO_STATUS LIFO_Create(LIFO_buffer_t* lifo_name, uint32* arr, uint32 size);


#endif
