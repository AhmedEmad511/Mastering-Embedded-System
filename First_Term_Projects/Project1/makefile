#This makefile is for first term project1 || This project shall monitor the pressure in the cabin and turn an alarm if the pressure exceeded 20 bar ||
#Makefile for ------------->STM32F103C6<---------------
#note : startup : .c , debug :ON , Mapfile : YES
#@copyrights : Ahmed Emad

CC=arm-none-eabi-
CFLAGS=-g -mcpu=cortex-m3 -mthumb -g -gdwarf-2
INCS=-I.
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
AsOBJ = $(AS:.s=.o)
Project_name = Project1



all:$(Project_name).bin
	@echo "=======Done compiling======"
	

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@
	
$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map
	cp $(Project_name).elf $(Project_name).axf

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@
	
	
clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin