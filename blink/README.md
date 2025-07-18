# Led Blink Using Raw C (No Arduino IDE)

### Clone this repo then follow these commands to run this

### To compile the code:
```bash
avr-gcc -mmcu=atmega328p -DF_CPU=16000000UL -Os -o blink.elf blink.c

### Generate Hex file from the .elf file 
```bash
avr-objcopy -O ihex -R .eeprom blink.elf blink.hex

### Flash Using Avrdude
```bash
avrdude -c arduino -p m328p -P /dev/ttyACM0(ur Port) -b 115200 -u flash:w:blink.hex