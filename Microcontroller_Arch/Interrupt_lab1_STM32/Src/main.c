#include "Platform_types.h"
#include "BIT_MATH.h"


//RCC Registers
#define RCC 	 0x40021000
#define APB2ENR  *((vuint32 *) (RCC + 0x18))

//GPIOA registers
#define GPIO_PA  0x40010800
#define CRH 	 *((vuint32 *) (GPIO_PA + 0x04))
#define ODR		 *((vuint32 *) (GPIO_PA + 0x0C))
#define CRL 	 *((vuint32 *) (GPIO_PA + 0x00))

//INT registers
#define EXTI_base	0x40010400
#define EXTI_IMR	*((vuint32 *) (EXTI_base+ 0x00 ))
#define EXTI_RTSR	*((vuint32 *) (EXTI_base+ 0x08 )) //Rising edge trigger
#define EXTI_PR		*((vuint32 *) (EXTI_base+ 0x14 )) //pending register, used to clear the interrupt

//AFIO
#define AFIO_base	0x40010000
#define AFIO_EXTICR1	*((vuint32 *) (AFIO_base+ 0x08 ))

//NVIC
#define NVIC_ISER0 *(vuint32 *)(0xE000E100)

void RCC_init(void)
{
	SET_BIT(APB2ENR,2);
	//Enable clock for AFIO
	SET_BIT(APB2ENR,0);
}

void GPIOA_init(void)
{
	CRH &= 0xff0fffff;
	CRH |= 0x00200000;

	//put PA0 as floating input
	SET_BIT(CRL,2);
}

void EXTI_init(void)
{
	AFIO_EXTICR1 = 0 ; //configure PA0 to be used as EXTI
	SET_BIT(EXTI_IMR,0);//Enable EXTI0
	SET_BIT(EXTI_RTSR,0);//Enable rising edge trigger

	//Enable NVIC <<6>> for EXTI0
	SET_BIT(NVIC_ISER0,6);

}

int main(void)
{
	RCC_init();
	GPIOA_init();
	EXTI_init();
	while(1)
	{

	}

}

void EXTI0_IRQHandler(void)
{
	//ISR on PORTA pin0 Rising Edge


	//Toggle PORTA13
	TOGGLE_BIT(ODR,13);

	//clear pending request
	SET_BIT(EXTI_PR,0);


}
