/*
 * File:   traffic.c
 * Author: Manikandan
 *
 * Created on 10 September, 2026, 12:21 PM
 */


#include <xc.h>

// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

#define config cp = OFF
#define _XTAL_FREQ 20000000

void main(void) {
    TRISD0 =0;
    TRISD1 =0;
    TRISD2 =0;
    TRISD3 =0;
    TRISD4 =0;
    
    
    
  
    while(1)
    {
        RD0 =1;
        RD1=1;
        
        __delay_ms(100);
        RD0=0;
        RD1=0;
        
        RD2=1;
       
        
         __delay_ms(100);
        
         RD2=0;
        
         
         RD3 =1;
         RD4=1;
        __delay_ms(100);
         RD3 =0;
         RD4=0;
         __delay_ms(100);
    };
    
    return;
}