#ifndef PRESSURE_SENSOR_H_
#define PRESSURE_SENSOR_H_
#include "Platform_types.h"


#define GPIO_PORTA 0x40010800
#define GPIOA_IDR *(vuint32 *)(GPIO_PORTA + 0x08)

int getPressureVal();

#endif