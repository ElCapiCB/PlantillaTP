#include "utilities.h"

void acot1(u8 PORT_X, u8 pin, bit PULL_UP){
    if(PORT_X == 0){
        DDRD&=~(1<<pin);
	    if(PULL_UP){
            SET_PIN(PORTD, pin);
        }
    }else if(PORT_X == 1){
        DDRB&=~(1<<pin);
	    if(PULL_UP){
            SET_PIN(PORTB, pin);
        }
    }else if(PORT_X == 2){
        DDRC&=~(1<<pin);
	    if(PULL_UP){
            SET_PIN(PORTC, pin);
        }
    }
}

void acot2(u8 PORT_X, u8 pin){
    if(PORT_X == 0){
        DDRD|=(1<<pin);
    }else if(PORT_X == 1){
        DDRD|=(1<<pin);
    }else if(PORT_X == 2){
        DDRD|=(1<<pin);
    }
}

void establishPortIn(u8 PXX, u8 PORT_X, bit PULL_UP){
    if(((PXX)&1)){
        acot1(PORT_X, 0, PULL_UP);
    }
    if(((PXX>>1)&1)){
        acot1(PORT_X, 1, PULL_UP);
    }
    if(((PXX>>2)&1)){
        acot1(PORT_X, 2, PULL_UP);
    }
    if(((PXX>>3)&1)){
        acot1(PORT_X, 3, PULL_UP);
    }
    if(((PXX>>4)&1)){
        acot1(PORT_X, 4, PULL_UP);
    }
    if(((PXX>>5)&1)){
        acot1(PORT_X, 5, PULL_UP);
    }
    if(((PXX>>6)&1)){
        acot1(PORT_X, 6, PULL_UP);
    }
    if(((PXX>>7)&1)){
        acot1(PORT_X, 7, PULL_UP);
    }
}

void establishPortOut(u8 PXX, u8 PORT_X){
    if(((PXX)&1)){
        acot2(PORT_X,0);
    }
    if(((PXX>>1)&1)){
        acot2(PORT_X,1);
    }
    if(((PXX>>2)&1)){
        acot2(PORT_X,2);
    }
    if(((PXX>>3)&1)){
        acot2(PORT_X,3);
    }
    if(((PXX>>4)&1)){
        acot2(PORT_X,4);
    }
    if(((PXX>>5)&1)){
        acot2(PORT_X,5);
    }
    if(((PXX>>6)&1)){
        acot2(PORT_X,6);
    }
    if(((PXX>>7)&1)){
        acot2(PORT_X,7);
    }
}

