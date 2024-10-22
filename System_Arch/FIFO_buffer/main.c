#include "fifo.h"
#include "Platform_types.h"
#include <stdio.h>


ELEMENT_T UART_BUFFER[100];


void main(void)
{
	FIFO_Buffer_t UART_FIFO;
	ELEMENT_T temp;
	uint8 i ;
	if(FIFO_Create(&UART_FIFO, 5 ,UART_BUFFER)== FIFO_No_Err)
		printf("FIFO Created\n");

	for (i=0; i<5 ; i++)
	{
		printf("FIFO ENQUEUE %x \n",i);
		if(FIFO_Enqueue(&UART_FIFO, i)==FIFO_No_Err)
			printf("ITEM ADDED\n");
		else
			printf("ADDING FAILED\n");
	}
	FIFO_Print(&UART_FIFO);
	if(FIFO_Dequeue(&UART_FIFO,&temp)==FIFO_No_Err)
		printf("ITEM Dequeued\n");
	if(FIFO_Dequeue(&UART_FIFO,&temp)==FIFO_No_Err)
		printf("ITEM Dequeued\n");
	FIFO_Print(&UART_FIFO);

}
