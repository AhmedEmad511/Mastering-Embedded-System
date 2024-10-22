#ifndef ALARM_H_
#define ALARM_H_
#include "Platform_types.h"

#define SET_BIT(ADDRESS,BIT)   ADDRESS |=  (1<<BIT)
#define RESET_BIT(ADDRESS,BIT) ADDRESS &= ~(1<<BIT)


#define GPIO_PORTA 0x40010800
#define GPIOA_ODR *(vuint32 *)(GPIO_PORTA + 0x0C)


void Set_Alarm_actuator(uint32 i);

#endif