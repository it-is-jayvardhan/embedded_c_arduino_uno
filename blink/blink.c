#include <avr/io.h> //arduino board libraries
#include <util/delay.h> // delay 
int main(void){
    DDRB |=(1<<PB5);// 13 th pin as output 
    while(1){
        PORTB ^= (1<<PB5);
        _delay_ms(500);
    }
}
