//startup for cortexm4 
//credits : Ahmed Emad
// learn-in-depth 

#include "Platform_types.h"


void Reset_handler() ;
extern void main(void);


void Default_Handler()
{
	Reset_handler();
}

void NMI_handler () 	__attribute__((weak,alias ("Default_Handler")));;
void H_Fault_handler () __attribute__((weak,alias ("Default_Handler")));;

static uint32 stack_top[256];

void (* const  g_p_fn_vectors[])()  __attribute__((section(".vectors"))) =
{
	(void (*)()) ((uint32)stack_top + sizeof(stack_top)),
	&Reset_handler,
	&NMI_handler,
	&H_Fault_handler
};

extern uint32 _S_DATA;
extern uint32 _E_DATA;
extern uint32 _S_BSS;
extern uint32 _E_BSS;
extern uint32 _E_TEXT;


void Reset_handler()
{
	uint32 mov_data;
	uint32 DATA_size = (uint8*)&_E_DATA - (uint8*)&_S_DATA;
	uint8* P_src = (uint8*)&_E_TEXT;
	uint8* P_dst = (uint8*)&_S_DATA;
	
	//move data from flash to ram 
	for(mov_data=0;mov_data<DATA_size;mov_data++)
	{
		*((uint8*)P_dst++) = *((uint8*)P_src++);
	}
	
	//init bss in ram with 0
	uint32 BSS_size = (uint8*)&_E_BSS - (uint8*)&_S_BSS;
	P_dst = (uint8*)&_S_BSS;
	for(mov_data=0;mov_data<BSS_size;mov_data++)
	{
		*((uint8*)P_dst++) = (uint8)0;
	}
	// jump to main func
	main();
}
