/*
 * File:   main.c
 * Author: suren
 *
 * Created on March 24, 2026, 3:36 PM
 */


#include <xc.h>
#pragma config WDTE = OFF

void init_config(void) {
    TRISD=0x00;
    PORTD=0x00;
}

void main(void) {
    init_config();
    unsigned long delay=50000;
    int i=0;
    while (1) {
        if(delay--==0)
        {
            delay=50000;
        if(i<8)
        {
            PORTD=(PORTD<<1)|1;
        }
        else if(i<16)
        {
            PORTD=PORTD<<1;
        }
        else if(i<24)
        {
            PORTD=(PORTD>>1)|0x80;
        }
        else if(i<32)
        {
            PORTD=PORTD>>1;
        }
        else
        {
            i=0;
        }
        i++;
        }
    }
}
