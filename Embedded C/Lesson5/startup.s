/* Startup cortex m3 
credits : Ahmed Emad */



/*.word address for sp*/  
.section .vectors

.word 0x20001000
.word _reset
.word _Vector_handler
.word _Vector_handler
.word _Vector_handler

.section .text

_reset:
	bl main
	b .
	
.thumb_func
	
	
_Vector_handler:
	b _reset
	