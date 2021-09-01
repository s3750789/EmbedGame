#--------------------------------------Makefile-------------------------------------

SRC_DIR = ./src
BUIL_DIR = ./build

CFILES = $(wildcard $(SRC_DIR)/*.c)
OFILES = $(CFILES:$(SRC_DIR)/%.c=$(BUIL_DIR)/%.o)

GCCFLAGS = -Wall -O2 -ffreestanding -nostdinc -nostdlib -nostartfiles
LDFLAGS = -nostdlib -nostartfiles

all: kernel8.img run
 
$(BUIL_DIR)/boot.o: $(SRC_DIR)/boot.S
		aarch64-none-elf-gcc $(GCCFLAGS) -c $(SRC_DIR)/boot.S -o $(BUIL_DIR)/boot.o
		
$(BUIL_DIR)/%.o: $(SRC_DIR)/%.c
		aarch64-none-elf-gcc $(GCCFLAGS) -c $< -o $@
		
kernel8.img: $(BUIL_DIR)/boot.o $(OFILES)
		aarch64-none-elf-ld $(LDFLAGS) $(BUIL_DIR)/boot.o $(OFILES) -T $(SRC_DIR)/link.ld -o $(BUIL_DIR)/kernel8.elf
		aarch64-none-elf-objcopy -O binary $(BUIL_DIR)/kernel8.elf kernel8.img

clean:
		del .\build\kernel8.elf .\build\*.o *.img
		
run: 
		qemu-system-aarch64 -M raspi3 -kernel kernel8.img -serial null -serial stdio

test: all run