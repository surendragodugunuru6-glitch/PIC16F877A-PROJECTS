/*
 * File:   main.c
 * Author: suren
 *
 * Created on October 21, 2025, 8:50 AM
 */


#include <xc.h>
#pragma config WDTE=OFF

void init_config(void)
{
    TRISB=0X00;
}
void main(void) {
    init_config();
    while(1)
    {
        PORTB=0XFF;
        for(unsigned long delay =50000;delay--;);
        PORTB=0X00;
        for(unsigned long delay =50000;delay--;);    
    }
}
