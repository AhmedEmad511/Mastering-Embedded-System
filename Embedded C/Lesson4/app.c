// lesson 4 lab 3
#include "Platform_types.h"
#include "BIT_MATH.h"

#define SYSCTL 				0x400FE000
#define GPIOF				0x40025000
#define SYSCTL_RCGC2_R		*((vuint32 *)(SYSCTL+0x108))
#define GPIOF_DIR			*((vuint32 *)(GPIOF+0x400))
#define GPIOF_D				*((vuint32 *)(GPIOF+0x3FC))
#define GPIOF_E				*((vuint32 *)(GPIOF+0x51C))

void main (void)
{
	vuint32 x=0;
	SYSCTL_RCGC2_R &= 0xffffff0f ;
	SYSCTL_RCGC2_R |= 0x00000020 ; // Enable GPIOF
	for(x=0;x<200;x++); //delay until GPIOF is up 
	SET_BIT(GPIOF_E,3);
	SET_BIT(GPIOF_DIR,3);
	
	while(1)
	{
		SET_BIT(GPIOF_D,3);
		for(x=0;x<200000;x++);
		CLR_BIT(GPIOF_D,3);
		for(x=0;x<200000;x++);
	}
	
}