#@copyrights : Ahmed Emad

CC=arm-none-eabi-
CFLAGS=-g -mcpu=arm926ej-s
INCS=-I.
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
AsOBJ = $(AS:.s=.o)
Project_name = learn-in-depth



all:$(Project_name).bin
	@echo "=======Done compiling======"
	
startup.o: startup.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@
	
$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=mapfile.map

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@
	
	
clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin