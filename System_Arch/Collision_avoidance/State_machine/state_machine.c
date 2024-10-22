#include <stdio.h>
#include <stdlib.h>
#include "Platform_types.h"
#include "state_machine.h"
#define DPRINTF(...) {fflush(stdout);\
		fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);\
		fflush(stdin);}

uint32 speed, distance, threshold=50 ;
int generate_random(int l , int h, int num );

enum
{
	waiting,
	driving

}state_id;

void (*state) ();

void waiting_func()
{
	state_id = waiting;
	speed=0;

	//generate random distanc

	distance = generate_random(35,55,1);

	//check distance
	//(distance <= threshold) ? (state = driving_func) : (state = driving_func);

	if(distance<= threshold)
	{
		waiting_func();
	}
	else
	{
		driving_func();
	}

	DPRINTF("\n waiting state : distance = %d , speed = %d", distance, speed);
}

void driving_func()
{
	state_id = driving;
	speed = 50;
	distance = generate_random(35,55,1);

	//check distance
	//(distance <= threshold) ? (state = driving_func) : (state =driving_func);
	if(distance<= threshold)
	{
		waiting_func();
	}
	else
	{
		driving_func();
	}

	DPRINTF("\n driving state : distance = %d , speed = %d", distance, speed);
}

void setup()
{
	driving_func();
}
