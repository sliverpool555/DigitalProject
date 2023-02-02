// Program to blink an LED at Port pin P1.0 (physical pin 1 of IC)

//#include<reg52.h>  // special function register declarations for 89s52

#include<AT89C51XD2.h> //uses the functions for the AT89C51XD2

#include<stdio.h>  // prototype declarations for I/O functions

sbit LED = P1^0;    // defining pin P1^0 as LED

void delay(void) ;  //delay function prototype declaration

void main (void) 
    
{ 
    LED = 0 ;              // Make LED pin as Output 
    while(1)                //indefinite loop 
    { 
       LED = 0;           // LED Off 
       delay(); 
       LED = 1;          // LED ON  
       delay(); 
    } 
}

void delay(void) 
{ 
    int j; 
    int i; 
    for(i=0;i<10;i++) 
    { 
        for(j=0;j<10000;j++) 
        { 
        } 
    } 
}