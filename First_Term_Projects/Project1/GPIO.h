#ifndef GPIO_H_
#define GPIO_H_
#include "Platform_types.h"

#define SET_BIT(ADDRESS,BIT)   ADDRESS |=  (1<<BIT)
#define RESET_BIT(ADDRESS,BIT) ADDRESS &= ~(1<<BIT)
#define TOGGLE_BIT(ADDRESS,BIT)  ADDRESS ^=  (1<<BIT)
#define READ_BIT(ADDRESS,BIT) ((ADDRESS) &   (1<<(BIT)))


#define GPIO_PORTA 0x40010800
#define BASE_RCC   0x40021000

#define APB2ENR   *(vuint32 *)(BASE_RCC + 0x18)

#define GPIOA_CRL *(vuint32*)(GPIO_PORTA + 0x00)
#define GPIOA_CRH *(vuint32*)(GPIO_PORTA + 0X04)


void GPIO_INITIALIZATION ();
void Delay(uint32 nCount);

#endif