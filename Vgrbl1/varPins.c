#include "grbl.h"
#include <avr/io.h>
#include "varPins.h"

 volatile uint8_t *ioPort[19];
 volatile uint8_t *ioPin[19];
 volatile uint8_t *ioDdr[19];
 volatile uint8_t *ioInt[19];
 volatile uint8_t ioBit[19];

 uint8_t XSpin=2; // ($v A)	> X Step
 uint8_t YSpin=3; // ($v B)	> Y Step
 uint8_t ZSpin=4; // ($v C)	> Z Step
 uint8_t XDpin=5; // ($v D)	> X Dir
 uint8_t YDpin=6; // ($v E)	> Y Dir
 uint8_t ZDpin=7; // ($v F)	> Z Dir
 uint8_t ENpin=8; // ($v G)	> Enable
 uint8_t XLpin=9; // ($v H)	< X Limit
 uint8_t YLpin=10;// ($v I)	< Y Limit
 uint8_t ZLpin=11;// ($v J)	< Z Limit
 uint8_t M3pin=12;// ($v K)	> M3
 uint8_t M4pin=13;// ($v L)	> Spindle Direction (M4)
 uint8_t REpin=14;// ($v M)	< Reset/Abort	A0
 uint8_t FHpin=15;// ($v N)	< Feed Hold	A1
 uint8_t CSpin=16;// ($v O)	< Cycle Start/Resume	A2
 uint8_t COpin=17;// ($v P)	> Coolant	A3
 uint8_t NUpin=18;// ($v Q)	  Not Used	A4
 uint8_t PRpin=19;// ($v R)	< Probe	A5

// uint16_t PRlen=0;// Hight of Touch-Part of The Probing device in mm/100 

void varPins(){

ioPort[2] = &PORTD;              // Addr of PORTD
  ioPin[2]  = &PIND;             // Addr of PIND 
  ioDdr[2]  = &DDRD;             // Addr of DDRD
  ioInt[2]  = &PCMSK2;           // Addr of PCMSK2
  ioBit[2]  = (1<<2);            // DB5 (Uno D2)
  
ioPort[3] = &PORTD;             
  ioPin[3]  = &PIND;              
  ioDdr[3]  = &DDRD;
  ioInt[3]  = &PCMSK2;                         
  ioBit[3]  = (1<<3);            // DB5 (Uno D3)
  
ioPort[4] = &PORTD;             
  ioPin[4]  = &PIND;              
  ioDdr[4]  = &DDRD;
  ioInt[4]  = &PCMSK2;                         
  ioBit[4]  = (1<<4);            // DB5 (Uno D4)
  
ioPort[5] = &PORTD;             
  ioPin[5]  = &PIND;              
  ioDdr[5]  = &DDRD;
  ioInt[5]  = &PCMSK2;                         
  ioBit[5]  = (1<<5);            // DB5 (Uno D5)
  
ioPort[6] = &PORTD;             
  ioPin[6]  = &PIND;              
  ioDdr[6]  = &DDRD;
  ioInt[6]  = &PCMSK2;                         
  ioBit[6]  = (1<<6);            // DB5 (Uno D6)
  
ioPort[7] = &PORTD;             
  ioPin[7]  = &PIND;              
  ioDdr[7]  = &DDRD;
  ioInt[7]  = &PCMSK2;                         
  ioBit[7]  = (1<<7);            // DB5 (Uno D7)
  
ioPort[8] = &PORTB;             
  ioPin[8]  = &PINB;              
  ioDdr[8]  = &DDRB;
  ioInt[8]  = &PCMSK0;                         
  ioBit[8]  = (1<<0);            // DB5 (Uno D8)
  
ioPort[9] = &PORTB;             
  ioPin[9]  = &PINB;              
  ioDdr[9]  = &DDRB;
  ioInt[9]  = &PCMSK0;                         
  ioBit[9]  = (1<<1);            // DB5 (Uno D9)
  
ioPort[10] = &PORTB;             
  ioPin[10]  = &PINB;              
  ioDdr[10]  = &DDRB;
  ioInt[10]  = &PCMSK0;                         
  ioBit[10]  = (1<<2);            // DB5 (Uno D10)
  
ioPort[11] = &PORTB;             
  ioPin[11]  = &PINB;              
  ioDdr[11]  = &DDRB;
  ioInt[11]  = &PCMSK0;                         
  ioBit[11]  = (1<<3);            // DB5 (Uno D11)
  
ioPort[12] = &PORTB;             
  ioPin[12]  = &PINB;              
  ioDdr[12]  = &DDRB;
  ioInt[12]  = &PCMSK0;                         
  ioBit[12]  = (1<<4);            // DB5 (Uno D12)
  
ioPort[13] = &PORTB;             
  ioPin[13]  = &PINB;              
  ioDdr[13]  = &DDRB;
  ioInt[13]  = &PCMSK1;                         
  ioBit[13]  = (1<<5);            // DB5 (Uno D13)
  
ioPort[14] = &PORTC;             
  ioPin[14]  = &PINC;              
  ioDdr[14]  = &DDRC;
  ioInt[14]  = &PCMSK1;                         
  ioBit[14]  = (1<<0);            // DB5 (Uno A0)
  
ioPort[15] = &PORTC;             
  ioPin[15]  = &PINC;              
  ioDdr[15]  = &DDRC;
  ioInt[15]  = &PCMSK1;                         
  ioBit[15]  = (1<<1);            // DB5 (Uno A1)
  
ioPort[16] = &PORTC;             
  ioPin[16]  = &PINC;              
  ioDdr[16]  = &DDRC;
  ioInt[16]  = &PCMSK1;                         
  ioBit[16]  = (1<<2);            // DB5 (Uno A2)
  
ioPort[17] = &PORTC;             
  ioPin[17]  = &PINC;              
  ioDdr[17]  = &DDRC;
  ioInt[17]  = &PCMSK1;                         
  ioBit[17]  = (1<<3);            // DB5 (Uno A3)
  
ioPort[18] = &PORTC;             
  ioPin[18]  = &PINC;              
  ioDdr[18]  = &DDRC;
  ioInt[18]  = &PCMSK1;                         
  ioBit[18]  = (1<<4);            // DB5 (Uno A4)
  
ioPort[19] = &PORTC;             
  ioPin[19]  = &PINC;              
  ioDdr[19]  = &DDRC;
  ioInt[19]  = &PCMSK1;                         
  ioBit[19]  = (1<<5);            // DB5 (Uno A5)
  
}
