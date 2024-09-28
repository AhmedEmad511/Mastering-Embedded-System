#include "UART.h"

uint8 uart_buffer[100] = "learn-in-depth:<Ahmed_Emad>" ;
void main (void)
{
	UART_Send_String(uart_buffer);
	
	for(;;);
}