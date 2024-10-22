#include "GPIO.h"
#include "pressure_sensor.h"
#include "alarm.h"
#include "Platform_types.h"


int main (){
	GPIO_INITIALIZATION();
	uint32 pressureVal;
	uint32 ON = 1;
	uint32 OFF = 0;
	Set_Alarm_actuator(OFF);
	while (1)
	{
		

		pressureVal = getPressureVal();
		if(pressureVal >= 20)
		{
			Set_Alarm_actuator(ON);
			Delay(60000);
			Set_Alarm_actuator(OFF);
		}
		else
		{
			Delay(60000);
		}
	}

}
