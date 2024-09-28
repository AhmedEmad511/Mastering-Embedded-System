#include "UART.h"

#define UART0DR    		*((vuint32*)((uint32 *)0x101f1000))

void UART_Send_String(uint8* ptr_tx_str)
{
	while(*ptr_tx_str !='\0')
	{
		UART0DR = ((uint32)(*ptr_tx_str)) ;
		ptr_tx_str++ ;
	}
	
}