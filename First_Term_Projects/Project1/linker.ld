/* Credits : Ahmed Emad*/

/*First Term project1 on arm-cortex-m3*/
/*Pressure Monitor and alarm*/

MEMORY 
{
flash(rx) : ORIGIN = 0x08000000 , LENGTH = 128k
sram(rwx) : ORIGIN = 0x20000000, LENGTH = 20k
}

SECTIONS 
{
	.text :
	{
		*(.vectors*)
		*(.text*)
		*(.rodata)
		. = ALIGN(4) ;
		_E_TEXT = . ;
	}> flash
	.data :
	{
		_S_DATA = . ;
		*(.data)
		. = ALIGN(4) ;
		_E_DATA = . ;
	}> sram AT> flash
	.bss :
	{
		_S_BSS = . ;
		*(.bss*)
		_E_BSS = . ;
	}> sram
}