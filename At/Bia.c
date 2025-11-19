/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 5/31/2024
Author  : 
Company : 
Comments: 


Chip type               : ATmega164A
Program type            : Application
AVR Core Clock frequency: 20.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/

#include <mega164a.h>
#include <stdbool.h>
#include "func.h"
#include "defs.h"
#include <stdio.h>
#include <delay.h>
/*#ifndef RXB8
#define RXB8 1
#endif

#ifndef TXB8
#define TXB8 0
#endif

#ifndef UPE
#define UPE 2
#endif

#ifndef DOR
#define DOR 3
#endif

#ifndef FE
#define FE 4
#endif

#ifndef UDRE
#define UDRE 5
#endif

#ifndef RXC
#define RXC 7
#endif

#define FRAMING_ERROR (1<<FE)
#define PARITY_ERROR (1<<UPE)
#define DATA_OVERRUN (1<<DOR)
#define DATA_REGISTER_EMPTY (1<<UDRE)
#define RX_COMPLETE (1<<RXC)

// USART0 Receiver buffer
#define RX_BUFFER_SIZE0 8
char rx_buffer0[RX_BUFFER_SIZE0];

#if RX_BUFFER_SIZE0 <= 256
unsigned char rx_wr_index0,rx_rd_index0,rx_counter0;
#else
unsigned int rx_wr_index0,rx_rd_index0,rx_counter0;
#endif

// This flag is set on USART0 Receiver buffer overflow
bit rx_buffer_overflow0;

// USART0 Receiver interrupt service routine
interrupt [USART0_RXC] void usart0_rx_isr(void)
{
char status,data;
status=UCSR0A;
data=UDR0;
if ((status & (FRAMING_ERROR | PARITY_ERROR | DATA_OVERRUN))==0)
   {
   rx_buffer0[rx_wr_index0++]=data;
#if RX_BUFFER_SIZE0 == 256
   // special case for receiver buffer size=256
   if (++rx_counter0 == 0) rx_buffer_overflow0=1;
#else
   if (rx_wr_index0 == RX_BUFFER_SIZE0) rx_wr_index0=0;
   if (++rx_counter0 == RX_BUFFER_SIZE0)
      {
      rx_counter0=0;
      rx_buffer_overflow0=1;
      }
#endif
   }
}

#ifndef _DEBUG_TERMINAL_IO_
// Get a character from the USART0 Receiver buffer
#define _ALTERNATE_GETCHAR_
#pragma used+
char getchar(void)
{
char data;
while (rx_counter0==0);
data=rx_buffer0[rx_rd_index0++];
#if RX_BUFFER_SIZE0 != 256
if (rx_rd_index0 == RX_BUFFER_SIZE0) rx_rd_index0=0;
#endif
#asm("cli")
--rx_counter0;
#asm("sei")
return data;
}
#pragma used-
#endif

// USART0 Transmitter buffer
#define TX_BUFFER_SIZE0 8
char tx_buffer0[TX_BUFFER_SIZE0];

#if TX_BUFFER_SIZE0 <= 256
unsigned char tx_wr_index0,tx_rd_index0,tx_counter0;
#else
unsigned int tx_wr_index0,tx_rd_index0,tx_counter0;
#endif

// USART0 Transmitter interrupt service routine
interrupt [USART0_TXC] void usart0_tx_isr(void)
{
if (tx_counter0)
   {
   --tx_counter0;
   UDR0=tx_buffer0[tx_rd_index0++];
#if TX_BUFFER_SIZE0 != 256
   if (tx_rd_index0 == TX_BUFFER_SIZE0) tx_rd_index0=0;
#endif
   }
}

#ifndef _DEBUG_TERMINAL_IO_
// Write a character to the USART0 Transmitter buffer
#define _ALTERNATE_PUTCHAR_
#pragma used+
void putchar(char c)
{
while (tx_counter0 == TX_BUFFER_SIZE0);
#asm("cli")
if (tx_counter0 || ((UCSR0A & DATA_REGISTER_EMPTY)==0))
   {
   tx_buffer0[tx_wr_index0++]=c;
#if TX_BUFFER_SIZE0 != 256
   if (tx_wr_index0 == TX_BUFFER_SIZE0) tx_wr_index0=0;
#endif
   ++tx_counter0;
   }
else
   UDR0=c;
#asm("sei")
}
#pragma used-
#endif  */


            


// Declare your global variables here

void main(void)
{  
// Declare your local variables here
    int tabla[4][4];
    int i;
    int j;
    int coloana;
    int diag;
    int linie;
    int o;
    int sec_diag;
    int l=0;
    int c=0;
    bool adv_l = 0;
    bool adv_c = 0 ;
    bool adv_diag_prin = 0 ;
    bool adv_diag_sec = 0;
    bool done = 0;               
    

    

    

 
    

// Crystal Oscillator division factor: 1
#pragma optsize-
CLKPR=(1<<CLKPCE);
CLKPR=(0<<CLKPCE) | (0<<CLKPS3) | (0<<CLKPS2) | (0<<CLKPS1) | (0<<CLKPS0);
#ifdef _OPTIMIZE_SIZE_
#pragma optsize+
#endif

// Input/Output Ports initialization
// Port A initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRA=(0<<DDA7) | (0<<DDA6) | (0<<DDA5) | (0<<DDA4) | (0<<DDA3) | (0<<DDA2) | (0<<DDA1) | (0<<DDA0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTA=(0<<PORTA7) | (0<<PORTA6) | (0<<PORTA5) | (0<<PORTA4) | (0<<PORTA3) | (0<<PORTA2) | (0<<PORTA1) | (0<<PORTA0);

// Port B initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRB=(0<<DDB7) | (0<<DDB6) | (0<<DDB5) | (0<<DDB4) | (0<<DDB3) | (0<<DDB2) | (0<<DDB1) | (0<<DDB0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTB=(0<<PORTB7) | (0<<PORTB6) | (0<<PORTB5) | (0<<PORTB4) | (0<<PORTB3) | (0<<PORTB2) | (0<<PORTB1) | (0<<PORTB0);

// Port C initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRC=(0<<DDC7) | (0<<DDC6) | (0<<DDC5) | (0<<DDC4) | (0<<DDC3) | (0<<DDC2) | (0<<DDC1) | (0<<DDC0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTC=(0<<PORTC7) | (0<<PORTC6) | (0<<PORTC5) | (0<<PORTC4) | (0<<PORTC3) | (0<<PORTC2) | (0<<PORTC1) | (0<<PORTC0);

// Port D initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRD=(1<<DDD7) | (1<<DDD6) | (0<<DDD5) | (1<<DDD4) | (0<<DDD3) | (0<<DDD2) | (0<<DDD1) | (0<<DDD0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTD=(0<<PORTD7) | (0<<PORTD6) | (0<<PORTD5) | (0<<PORTD4) | (0<<PORTD3) | (0<<PORTD2) | (0<<PORTD1) | (0<<PORTD0);
           for(i=0;i<4;i++)
           {
            for(j=0;j<4;j++)
            {
                tabla[i][j]=0;
            }
           }
            Restart();
while (1)
      {         

            
      
 //     if (Space(tabla) && verificare_joc(tabla, 1) && verificare_joc(tabla, 2)) {
            coloana = 0;
            linie = 0;
            sec_diag = 0;
            diag = 0;
            printf("Introduce i: \r\n");
            scanf("%d", &l);
   //         printf("%d",l);
            printf("Introduce j: \r\n");
            scanf("%d", &c);
            
            while((tabla[l][c]==1)||(tabla[l][c]==2))
            {
            printf("Nu poti sa scrii peste calculator/tine\n");
            printf("Introduce i: \r\n");
            scanf("%d", &l);
            printf("Introduce j: \r\n");
            scanf("%d", &c);
            }
     //       printf("%d",c);
            tabla[l][c] = 1;
  /*          for(i=0;i<4;i++)
            {
                for(j=0;j<4;j++)
                {
                printf("%d",tabla[i][j]);
                }
            }           */
            
            
            Afisare(tabla);
            
            delay_ms(2000);
           
 
            if (!verificare_joc(tabla, 1)) {
                for(i=0;i<4;i++)
                {
                    for(j=0;j<4;j++)
                    {
                        tabla[i][j]=1;
                    }
                }
                for(i=0;i<16;i++)
                {
                    Rosu();
                }
                delay_ms(5000);
                Restart();
                for(i=0;i<4;i++)
                {
                for(j=0;j<4;j++)
                {
                    tabla[i][j]=0;
                }
                }
                continue;
                }
                
             if(Space(tabla)==0)
             {
             for(i=0;i<4;i++)
                {
                    for(j=0;j<4;j++)
                    {
                    tabla[i][j]=0;
                    Negru();
                    }
                }
                delay_ms(1000);
                for(i=0;i<16;i++)
                {
                Verde();
                }
                delay_ms(5000);
                Restart();
            continue;
            }
                
                 
             
                for (i = 0; i < 3; i++) {         //Verify if blue wins
                    if (tabla[i][i] == 2) diag++;
                    if (tabla[i][i] == 1) adv_diag_prin = 1;
                    if(tabla[i][2-i]==2) sec_diag++;
                    if (tabla[i][2 - i] == 1)
                    { adv_diag_sec = 1; 
                    }
                    for (j = 0; j < 3; j++) {
                        if (tabla[i][j] == 2) coloana++;
                        if (tabla[i][j] == 1) adv_l = 1;
                        if (tabla[j][i] == 2) linie++;
                        if (tabla[j][i] == 1) adv_c = 1;
                    }
                    if (coloana == 2 && !done && !adv_l) {
                        for (o = 0; o < 3; o++) {
                            tabla[i][o] = 2;
                        }
                        Afisare(tabla);
                        done = 1;
                    }
                    if (linie == 2 && !done && !adv_c) {
                        for (o = 0; o < 3; o++) {
                            tabla[o][i] = 2;
                        }
                        done = 1;
                        Afisare(tabla);
                    }
                    coloana = 0;
                    linie = 0;
                    adv_c = 0;
                    adv_l = 0;
                }
                if (sec_diag == 2 && !done && !adv_diag_sec) {
                    for (o = 0; o < 3; o++) {
                        tabla[o][2 - o] = 2;
                    }
                    Afisare(tabla);
                    done = 1;
                }
                if (diag == 2 && !done && !adv_diag_prin) {
                    for (o = 0; o < 3; o++) {
                        tabla[o][o] = 2;
                    }
                    Afisare(tabla);
                    done = 1;
                }
                diag = 0;
                sec_diag = 0;
                adv_diag_prin = 0;
                adv_diag_sec = 0;

                if (!done) {          //Verify if the player wins
                    for (i = 0; i < 3; i++) {
                        if (tabla[i][i] == 1) diag++;
                        if (tabla[i][2 - i] == 1) sec_diag++;
                        for (j = 0; j < 3; j++) {
                            if (tabla[i][j] == 1) coloana++;
                            if (tabla[j][i] == 1) linie++;
                        }
                        if (coloana == 2 && !done) {
                            for (o = 0; o < 3; o++) {
                                if (tabla[i][o] == 0 && !done) {
                                    tabla[i][o] = 2;
                                    Afisare(tabla);
                                    done = 1;
                                }
                            }
                        }
                        if (linie == 2 && !done) {
                            for (o = 0; o < 3; o++) {
                                if (tabla[o][i] == 0 && !done) {
                                    tabla[o][i] = 2;
                                    Afisare(tabla);
                                    done = 1;
                                }
                            }
                        }
                        coloana = 0;
                        linie = 0;
                    }
                    if (sec_diag == 2 && !done) {
                        for (o = 0; o < 3; o++) {
                            if (tabla[o][2 - o] == 0 && !done) {
                                tabla[o][2 - o] = 2;
                                Afisare(tabla);
                                done = 1;
                            }
                        }
                    }
                    if (diag == 2 && !done) {
                        for (o = 0; o < 3; o++) {
                            if (tabla[o][o] == 0 && !done) {
                                tabla[o][o] = 2;
                                Afisare(tabla);
                                done = 1;
                            }
                        }
                    }
                    coloana = 0;
                    linie = 0;
                    sec_diag = 0;
                    diag = 0;
                }
                if (!done) {                            //Verify if there are any corners/center to play
                    for (i = 0; i < 3; i++) {
                        for (j = 0; j < 3; j++) {
                            if (((j == i) || (j + i == 2)) && tabla[i][j] == 0 && !done) {
                                tabla[i][j] = 2;
                                Afisare(tabla);
                                done = 1;
                            }
                        }
                    }
                }
                if (!done) {                   //Play anywhere
                    for (i = 0; i < 3; i++) {
                        for (j = 0; j < 3; j++) {
                            if (tabla[i][j] == 0 && !done) {
                                tabla[i][j] = 2;
                                Afisare(tabla);
                                done = 1;
                            }
                        }
                    }
                }
                done = 0;
                
    //            delay_ms(2000);
            
                if (!verificare_joc(tabla, 2)) {
                delay_ms(2000);
                for(i=0;i<4;i++)
                {
                    for(j=0;j<4;j++)
                    {
                        tabla[i][j]=2;
                    }
                }
                for(i=0;i<16;i++)
                {
                    Albastru();
                }
                delay_ms(5000);
                Restart();
                for(i=0;i<4;i++)
                {
                for(j=0;j<4;j++)
                {
                    tabla[i][j]=0;
                }
                }
                continue;    
             
 }    

} 
}