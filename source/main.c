
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
    DDRD = 0x00; PORTD = 0xFF;
    DDRB = 0x00; PORTB = 0x01;
    DDRB = 0x0E; PORTB = 0x00;
   
    unsigned char tmpD = 0x00;
    unsigned char tmpB = 0x00;
    unsigned char outB = 0;

    /* Insert your solution below */
    while (1) {
	tmpD = PIND & 0xFF;
	tmpB = PINB & 0x01;
   	unsigned char weight = 0;

        if((tmpD & 0x01) == 0x01){
            weight = weight + 2;
        } if ((tmpD & 0x02) == 0x02) {
            weight = weight + 4;
        } if ( (tmpD & 0x04) == 0x04 ) {
            weight = weight + 8;
        } if ((tmpD & 0x08) == 0x08) {
       	    weight = weight + 16;
        } if ((tmpD & 0x10) == 0x10 ) {
            weight = weight + 32;
        } if ((tmpD & 0x20) == 0x20 ) {
            weight = weight + 64;
        } if ((tmpD & 0x40) == 0x40 ) {
            weight = weight + 128;
        } if ((tmpD & 0x80) == 0x80 ) {
            weight = weight + 256;
        } if(tmpB == 1){
	    weight = weight + 1;
	}


	if(weight < 6){
	    outB = 0x00;
	} else if (weight < 70) {
	    outB = 0x04;
	} else if (weight > 69 ){
	    outB = 0x02;
	} else {}

	PORTB = outB;
    }
    
}
