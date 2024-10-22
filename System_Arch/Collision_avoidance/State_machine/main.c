#include "state_machine.h"
#include "Platform_types.h"
#include <stdio.h>
#define DPRINTF(...) {fflush(stdout);\
		fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);\
		fflush(stdin);}
void main(void)
{
	uint64 count;
	DPRINTF("\n test");
	setup();
	DPRINTF("\n test1");
	while(1)
	{
		setup();
		//for(count=0;count<10000;count++);
	}
}

int generate_random(int l , int h, int num )
{
	int random_val;
	int i ;
	for(i=0 ; i<num ; i++)
	{
		random_val = (rand() % (h- l + 1)) + l;
	}
	return random_val;

}
