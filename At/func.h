#include <mega164a.h>
#include <stdbool.h>
#include <stdio.h>
#include <defs.h>

bool verificare_joc(int tabla[4][4], int nr) {   // 1 for the player , 2 for the computer
    int i, j;                                      // c pt diagonala principala
    int c = 0, k = 0, l = 0, p = 0;                // k pt linie
    for (i = 0; i < 3; i++) {                     //l pt coloana
        if (tabla[i][i] == nr) c++;              //p pt diagonala secundara
        for (j = 0; j < 3; j++) {
            if (tabla[i][j] == nr) k++;
            if (tabla[j][i] == nr) l++;
            if (i + j == 2 && tabla[i][j] == nr) p++;
        }
        if (k == 3 || l == 3) return false;
        k = 0;
        l = 0;
    }
    return !(c == 3 || p == 3);
}

bool Space(int tabla[4][4]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (tabla[i][j] == 0) return true;
        }
    }
    return false;
}

void Unu()
{
                        output=1;
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        output=0;
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
}

void Zero()
{
                        output=1;
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        output=0;
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        
}



void Negru()
{
    int i;
                    for(i=0;i<24;i++)
                    {
                        Zero();
                    }
}
void Rosu()
{
    int i;
                    for(i=0;i<8;i++)
                    {
                        Zero();
                    } 
                    Unu();
                    for(i=0;i<15;i++)
                    {
                        Zero();
                    } 
    
};

void Albastru()
{
    int i;
                    for(i=0;i<16;i++)
                    {
                        Zero();
                    }
                    Unu();
                    for(i=0;i<7;i++)
                    {
                        Zero();
                    } 
    
}

void Alb()
{
    int i;
 /*   for(i=0;i<24;i++)
    {
                        output=1;
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        output=0;
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
                        nope();
    }     */
                    Unu();
                    for(i=0;i<7;i++)
                    {
                        Zero();
                    }
                    Unu();
                    for(i=0;i<7;i++)
                    {
                        Zero();
                    }
                    Unu();
                    for(i=0;i<7;i++)
                    {
                        Zero();
                    } 
    
    
}
void Verde ()           //Galben de fapt
{
    int i;
                        Zero();
                        Zero();
                        Unu();
                        
                        for(i=0;i<5;i++)
                        {
                            Zero(); 
                        }
                        Zero();
                        Zero();
                        Unu();
                        
                        for(i=0;i<13;i++)
                        {
                            Zero(); 
                        }
    
                   
                
}
void Afisare(int tabla[4][4]) {
    int i, j;
            for(i=0;i<4;i++)
            {
                for(j=0;j<4;j++)
                {
                    if((i==3)||(j==3))
                    {
                        Verde();
                    }
                    else
                    {
                    if(tabla[i][j]==0)
                    {
                        Negru();
                    }
                    if(tabla[i][j]==1)
                    {
                        Rosu();
                    }
                    if(tabla[i][j]==2)
                    {
                        Albastru();
                    }
                    }
                }
            }
}

void Restart()
{
 int i , j ;
             for(i=0;i<4;i++)
            {
                for(j=0;j<4;j++)
                {
                if((i==3)||(j==3))
                {
                Verde();
                }
                else
                {
                Negru();
                }
                }
             }
}

void Manual(int g , int r , int b )
{
    int val=128;
    int i ;
   for(i=0;i<8;i++)
   { 
    if((g&val)!=0)
    {
        Unu();  
    }
    else
    {
        Zero();
    }
    val=val/2;
   }
   val=128;
   for(i=0;i<8;i++)
   { 
    if((r&val)!=0)
    {
        Unu();
    }
    else
    {
        Zero();
        printf("%d",val);
    }
    val=val/2;
   }
   val=128; 

   for(i=0;i<8;i++)
   { 
    if((b&val)!=0)
    {
        Unu();
    }
    else
    {
        Zero();
    }
    val=val/2;
   }
    
} 
  
              
        
                        

 

#include "defs.h"
                                          

/*
 * most intialization values are generated using Code Wizard and depend on clock value
 */
void Init_initController(void)
{
// Crystal Oscillator division factor: 1
#pragma optsize-
CLKPR=0x80;
CLKPR=0x00;
#ifdef _OPTIMIZE_SIZE_
#pragma optsize+
#endif

// Input/Output Ports initialization
// Port A initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTA=0x00;
DDRA=0x00;

// Port B initialization
PORTB=0x00;
DDRB=0x00;

// Port C initialization
PORTC=0x00;
DDRC=0x00;

// Port D initialization
PORTD=0b00100000; // D.5 needs pull-up resistor
DDRD= 0b00001000; // D.6 is LED, D.4 is test output

// Timer/Counter 0 initialization
// Clock source: System Clock
// Clock value: Timer 0 Stopped
// Mode: Normal top=FFh
// OC0 output: Disconnected
TCCR0A=0x00;
TCCR0B=0x00;
TCNT0=0x00;
OCR0A=0x00;
OCR0B=0x00;

// Timer/Counter 1 initialization
// Clock source: System Clock
// Clock value: 19.531 kHz = CLOCK/256
// Mode: CTC top=OCR1A
// OC1A output: Discon.
// OC1B output: Discon.
// Noise Canceler: Off
// Input Capture on Falling Edge
// Timer 1 Overflow Interrupt: Off
// Input Capture Interrupt: Off
// Compare A Match Interrupt: On
// Compare B Match Interrupt: Off

TCCR1A=0x00;
TCCR1B=0x0D;
TCNT1H=0x00;
TCNT1L=0x00;
ICR1H=0x00;
ICR1L=0x00;

// 1 sec = 19531 counts = 4C41H counts, from 0 to 4C40 
// 4C40H = 4CH (MSB) and 40H (LSB)
OCR1AH=0x4C;
OCR1AL=0x40;

OCR1BH=0x00;
OCR1BL=0x00;

// Timer/Counter 2 initialization
// Clock source: System Clock
// Clock value: Timer2 Stopped
// Mode: Normal top=0xFF
// OC2A output: Disconnected
// OC2B output: Disconnected
ASSR=0x00;
TCCR2A=0x00;
TCCR2B=0x00;
TCNT2=0x00;
OCR2A=0x00;
OCR2B=0x00;

// External Interrupt(s) initialization
// INT0: Off
// INT1: Off
// INT2: Off
// Interrupt on any change on pins PCINT0-7: Off
// Interrupt on any change on pins PCINT8-15: Off
// Interrupt on any change on pins PCINT16-23: Off
// Interrupt on any change on pins PCINT24-31: Off
EICRA=0x00;
EIMSK=0x00;
PCICR=0x00;

// Timer/Counter 0,1,2 Interrupt(s) initialization
TIMSK0=0x00;
TIMSK1=0x02;
TIMSK2=0x00;

// USART0 initialization
// Communication Parameters: 8 Data, 1 Stop, No Parity
// USART0 Receiver: On
// USART0 Transmitter: On
// USART0 Mode: Asynchronous
// USART0 Baud rate: 9600
UCSR0A=0x00;
UCSR0B=0xD8;
UCSR0C=0x06;
UBRR0H=0x00;
UBRR0L=0x81;

// USART1 initialization
// USART1 disabled
UCSR1B=0x00;


// Analog Comparator initialization
// Analog Comparator: Off
// Analog Comparator Input Capture by Timer/Counter 1: Off
ACSR=0x80;
ADCSRB=0x00;
DIDR1=0x00;

// Watchdog Timer initialization
// Watchdog Timer Prescaler: OSC/2048  
#pragma optsize-
#asm("wdr")
// Write 2 consecutive values to enable watchdog
// this is NOT a mistake !
WDTCSR=0x18;
WDTCSR=0x08;
#ifdef _OPTIMIZE_SIZE_
#pragma optsize+
#endif

}
