riscv64-unknown-elf-gcc ./readHPM.c ./vvadd_main.c ./syscalls.c ./crt.S -o out -static -nostdlib -lm -lgcc -T ./test.ld -mcmodel=medany -fno-builtin-printf
