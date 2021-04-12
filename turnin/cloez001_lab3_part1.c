
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
    DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    unsigned char i = 0;
    unsigned char tmpC = 0;
    unsigned char numA = 0;
    unsigned char numB = 0;   
    /* Insert your solution below */
    while (1) {
	numA = PINA & 0xFF;
	numB = PINB & 0xFF;

	for (i=0; i<8; ++i){
	    if( numA & (0x01 << i)){
		tmpC = tmpC+1;
	    }
	    if( numB & (0x01 << i)){
		tmpC = tmpC+1;
	    }
	} 
	PORTC = tmpC;
    }
    
}
