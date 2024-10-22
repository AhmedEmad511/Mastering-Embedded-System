#include "Platform_types.h"
#include "BIT_MATH.h"

#define RCC 	 0x40021000
#define APB2ENR  *((vuint32 *) (RCC + 0x18))
#define GPIO_PA  0x40010800
#define CRH 	 *((vuint32 *) (GPIO_PA + 0x04))
#define ODR		 *((vuint32 *) (GPIO_PA + 0x0C))


int main(void)
{
	uint32 x ;
	uint32 i ;
	SET_BIT(APB2ENR,2);
	CRH &= 0xff0fffff;
	CRH |= 0x00200000;
	while(1)
	{
		SET_BIT(ODR,13);
		for(x =0 ; x<10000 ; x++);
		CLR_BIT(ODR,13);
		for(i =0 ; i<10000 ; i++);
	}

}
