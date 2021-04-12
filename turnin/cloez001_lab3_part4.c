
/*	Author: lab
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0x0F; PORTC = 0x00;
    DDRC = 0xF0; PORTC = 0x00;
    unsigned char tmp = 0x00;
    unsigned char tmpA = 0x00;

    /* Insert your solution below */
    while (1) {
	tmpA = PINA & 0xFF;
	tmpB = PINB;
	tmpC = PINC;

	tmpB = (tmpA >> 4) | tmpB;
        tmpC = (tmpC & 0x0F) 
	tmpA = (PINA & 0x0F) << 4;
	tmpC = tmpA | tmpC;

	PORTB = tmpB; 
        PORTC = tmpC;
       
    }
    
}
