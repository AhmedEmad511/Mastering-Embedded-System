#include "BIT_MATH.h"
#include "Platform_types.h"
#include<util/delay.h>

//GPIO Registers
#define DDRB	*(vuint8 *)(0x37)
#define DDRD	*(vuint8 *)(0x31)
#define PORTD	*(vuint8 *)(0x32)

//EXTI Registers
#define SREG	*(vuint8 *)(0x5F)
#define GICR	*(vuint8 *)(0x5B)
#define MCUCR	*(vuint8 *)(0x55)
#define MCUCSR	*(vuint8 *)(0x54)

void GPIO_init(void)
{
	//configure PD 5,6,7 output
	DDRD |= (0b111<<5);

	//configure PB2, PD2,3 Input for EXTI *NOT Mandatory*
	CLR_BIT(DDRB,2);
	CLR_BIT(DDRD,2);
	CLR_BIT(DDRD,3);
}

void EXTI_init(void)
{
	// Interrupt 0,1 Sense Control
	MCUCR |= (0b1101<<0); //11 for ISC11,10 for rising edge for INT1 , 01 for INT0 any logical change

	//Interrupt 2 Sense Control
	CLR_BIT(MCUCSR,6); //to enable falling edge for INT2 **This is not mandatory as the initial value is 0**

	//Enable EXTI0,1,2
	GICR |= (0b111<<5);

	//Enable Global Interrupt
	SET_BIT(SREG,7);

}

void main (void)
{
	GPIO_init();
	EXTI_init();
	while(1)
	{
		CLR_BIT(PORTD,5);
		CLR_BIT(PORTD,6);
		CLR_BIT(PORTD,7);

	}

}

void __vector_1(void)     __attribute__((signal));
void __vector_1(void)
{
	//EXTI0 ISR
	//Open PD5 for one second
	SET_BIT(PORTD,5);
	_delay_ms(1000);

}
void __vector_2(void)     __attribute__((signal));
void __vector_2(void)
{
	//EXINT1 ISR
	//Open PD6 for one sec
	SET_BIT(PORTD,6);
	_delay_ms(1000);
}
void __vector_3(void)     __attribute__((signal));
void __vector_3(void)
{
	//EXINT2 ISR
	//Open PD7 for one sec
	SET_BIT(PORTD,7);
	_delay_ms(1000);

}
