/*
 * Blink.c
 *
 * Turns on a LED for one second, then off for one second etc.
 *
 * This example code is in the public domain.
 *
 * Pin PB5 = D13 (most arduino's & teensy 3.0)
 * Pin PB3 = D11 (teensy 2.0)
 * Pin PD6 = D6  (teensy++ 2.0)
 */
#define F_CPU 16000000UL	/* set frequensy for delay library before including it (!) */
#include <avr/io.h>			/* needed to communicate with I/O pins */
#include <util/delay.h>		/* needed to create delay to blink LED with */

int main(void)
{
	DDRB |= (1 << DDB5); /* set pin PB5 to output (1 is output, 0 is input) */
	
	while(1)
	{
		PORTB |= (1 << PORTB5);		/* set pin PB5 to HIGH (1) */
		_delay_ms(1000);			/* Delay for 1000 ms */
		PORTB &= ~(1 << PORTB5);	/* set pin PB5 to LOW (0) */ 
		_delay_ms(1000);
	}
}
