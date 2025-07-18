# Led Blink Using Raw C (No Arduino IDE)

### Clone this repo then follow these commands to run this

### To compile the code:
```bash
avr-gcc -mmcu=atmega328p -DF_CPU=16000000UL -Os -o blink.elf blink.c
