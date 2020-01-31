#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRB |= (1 << DDB7);

    while(1) {
        PORTB |= (1 << PORTB7);
        _delay_ms(1000);
        PORTB &= ~(1 << PORTB7);
        _delay_ms(1000);
    }
}